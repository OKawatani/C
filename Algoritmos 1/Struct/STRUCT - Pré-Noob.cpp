#include<iostream>
#include<iomanip>
using namespace std;

struct dados
{
	int matricula;
	float np1;
	float np2;
};

int main()
{
	dados aluno;
	
	cin >> aluno.matricula >> aluno.np1 >> aluno.np2;
	
	cout << "Matricula do aluno: " << aluno.matricula << endl;
	cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.np1 << endl;
	cout << "Nota da segunda prova: " << aluno.np2 << endl;
	
	return 0;
}