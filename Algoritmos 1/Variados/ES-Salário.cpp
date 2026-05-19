#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int funcionario;
	float salario, total, horas; 
	cin >> funcionario >> horas >> salario;
	
	total = salario * horas;
	
	cout << "NUMBER = " << funcionario << "\n";
	cout << "SALARY = U$ " << fixed << setprecision(2) << total << endl;
	return 0;
}