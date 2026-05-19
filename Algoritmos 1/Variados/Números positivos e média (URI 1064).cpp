#include<iostream>
using namespace std;
int main()
{
	int i, numeros, contador = 0, media, soma = 0;
	
	for(i = 1; i <= 6; i++)
	{
		cin >> numeros;
		if(numeros >= 0)
		{
			soma = soma + numeros; 
			contador++;
		}
	}
	media = soma / 6;
	
	cout << contador << " " << "Valores positivos" << endl;
	cout << media << endl;
	
	return 0;
}