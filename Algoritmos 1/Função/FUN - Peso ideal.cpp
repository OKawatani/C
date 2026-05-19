#include<iostream>
using namespace std;

float ideal(float h, char sexo)
{
	float res;
	
	if(sexo == 'M')
	{
		res = (72.7 * h) - 58;
	}
	else
	{
		res = (62.1 * h) - 44.7;
	}
	
	return res;
}


int main()
{
	float h, resultado;
	char sexo;
	
	cin >> h >> sexo;
	
	resultado = ideal(h, sexo);
	
	cout << resultado << endl; 
	
	return 0;
}