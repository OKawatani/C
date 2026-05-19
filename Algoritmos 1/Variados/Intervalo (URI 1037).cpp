#include<iostream>
using namespace std;
int main()
{
	float valor;
	
	cin >> valor;
	
	if(valor < 0)
	{
		cout << "Fora de intervalo" << endl;
	}
	else if(valor <= 25.00)
	{
		cout << "Intervalo [0,25]" << endl;
	}
	else if(valor <= 50.00)
	{
		cout << "Intervalo (25,50]" << endl;
	}
	else if(valor <= 75.00)
	{
		cout << "Intervalo (50,75]" << endl; 
	}
	else if(valor <= 100.00)
	{
		cout << "Intervalo (75,100]" << endl;
	}
	return 0;
}