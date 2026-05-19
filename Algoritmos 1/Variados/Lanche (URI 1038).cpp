#include<iostream>
using namespace std;
int main()
{
	int cod,quantidade;
	float valor;
	
	cin >> cod >> quantidade;
	
	if(cod == 1)
	{
		valor = quantidade * 4.00;
		cout << "Total: R$ " << valor << endl;
	}
	else if(cod ==2)
	{
		valor = quantidade * 4.50;
		cout << "Total: R$ " << valor << endl;
	}
	else if (cod == 3)
	{
		valor = quantidade * 5.00;
		cout << "Total: R$ " << valor << endl;
	}
	else if (cod == 4)
	{
		valor = quantidade * 2.00;
		cout << "Total: R$ " << valor << endl;
	}
	else if (cod == 5)
	{
		valor = quantidade * 1.50;
		cout << "Total: R$ " << valor << endl;
	}
	else 
	{
	 cout << "Codigo invalido" << endl;
	}
	
	return 0;
}