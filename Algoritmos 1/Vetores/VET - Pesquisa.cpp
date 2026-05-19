#include<iostream>
using namespace std;
int main()
{
	int numeros[105], n, cont, quant = 0, i;
	 
	for(int i = 0; i < 100; i++)
	{
		cin >> numeros[i];
		
		
		if(numeros[i] == 0)
		{
			break; 
		}
		
		quant++;
		
	} 
	
	cin >> n;
	
	for(i = 0; i < quant; i++)
	{
		if(numeros[i] == n)
		{
			 cont = 1;
			 break;
		}
		else
		{
			cont = 2;
		}
		
		
	}
		
		if(cont == 1)
		{
			cout << "Elemento " << n << " encontrado na posicao " << i << endl;
		}
		else if(cont == 2)
		{
			cout << "Elemento " << n << " nao foi encontrado" << endl;
		}
	
	
	
	return 0;
}