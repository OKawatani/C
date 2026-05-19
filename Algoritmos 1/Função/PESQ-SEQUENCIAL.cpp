#include<iostream>
using namespace std;
bool buscaSequencial(int vetor[], int tamanho, int valor)
{
	int i = 0;
	bool achou = false;
	while(i < tamanho && achou == false)
	{
		if(vetor[i] == valor)
		{
			achou = true;
		}
		
		i++;
		
	}
	
	return achou;
}


int main()
{

	int vetor[100], tamanho = 0, valor, pos;
	bool achou = false;
	for(int i = 0; i < 100; i++)
	{
		cin >> vetor[i];
		tamanho++;
		
		if(vetor[i] == -1)
		{
			break;
		}		
	}
	
	cin >> valor;
	
	for(int i = 0; i < tamanho; i++)
	{
		 achou = buscaSequencial(vetor,tamanho,valor);
	} 
	if(achou == 1)
	{
		cout << valor << " encontrado na posicao " << pos << endl;
	}
	if(achou == 0)
	{
		cout << valor << " nao encontrado" << endl;
	}

	
	return 0;
}