#include<iostream>
using namespace std;

int sinal(int n)
{
	int res;
	
	if(n > 0)
	{
		res = 1;
	}
	else if(n < 0)
	{
		res = -1;
	}
	else
	{
		res = 0;
	}
	
	return res;
}


int main()
{
	int num, resultado;
	
	cin >> num;
	
	resultado = sinal(num);
	
	if(resultado == 1)
	{
		cout << "Positivo" << endl;
	}
	else if(resultado == -1)
	{
		cout << "Negativo" << endl;
	}
	else
	{
		cout << "Zero" << endl;
	}
	
	
	return 0;
}