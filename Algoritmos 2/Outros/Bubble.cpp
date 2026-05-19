#include<iostream>
using namespace std;

void BubbleSort (int vetor[], int tamanho)
{
	int i,j; // contadores
	int trab;
	bool troca;
	int limite;
	int contador = 0;
	troca = true;
	limite = tamanho-1;
	
	while(troca)
	{
		troca = false;
		
		for(i = 0; i < limite; i++)
		{
			if(vetor[i] > vetor[i+1])
			{	
			trab = vetor[i];
			vetor[i] = vetor[i+1];
			vetor[i+1] = trab;
			j = i;
			troca = true;
			contador++;
			cout << "New trab:" << trab << endl;
			}
		}
		limite = j;
	}
	cout << "Contador:" << contador << endl;
}

int main()
{
	int n, vetor[30];
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{

		cin >> vetor[i];
		
	}
	
	BubbleSort(vetor,n);
	
	return 0;
}