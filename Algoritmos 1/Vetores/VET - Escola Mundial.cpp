#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int quant;
	float notas[1005], media = 0.0, soma = 0;
	int acima = 0, abaixo = 0;
	
	cout << fixed << setprecision(2) <<"Insira a quantidade de alunos: " << endl;
	cin >> quant;
	
	for(int i = 0; i < quant; i ++)
	{
		cin >> notas[i];
		
	}
	for(int i = 0; i < quant; i++)
	{
		soma = soma + notas[i];
	}
		media = soma/quant;
		
	for(int i = 0; i < quant; i++)
	{
		if(notas[i] > media)
		{
			acima++;
		}
		if(notas[i] < media)
		{
			abaixo++;
		}
	}
		cout << "Media da turma: " << media << endl;
		cout << "Alunos com notas acima da media: " << acima << endl;
		cout << "Alunos com nota abaixo da media: " << abaixo << endl;
	
	return 0;
}