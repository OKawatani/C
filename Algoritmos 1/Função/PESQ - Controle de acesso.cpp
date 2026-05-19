#include<iostream>
using namespace std;

int binaria (int vetor[], int tamanho, int x)
{
	bool achou;
	int baixo, meio, alto;
	
	baixo = 0;
	alto = tamanho -1;
	achou = false;
	
	while((baixo <= alto) && (achou == false))
	{
	
		meio = (baixo + alto) / 2;
		if(x <vetor[meio])
		{
			alto = meio -1;
		}
		else 
		{
			if(x > vetor[meio])
			{
				baixo = meio + 1;
			}
			else
			{
				achou = true;
			}
		}
	}
	
	if(achou == true)
	{
		return meio;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int num[20],tamanho = 0, x;
	
	for(int i = 0; i < 100; i++)
	{
		cin >> num[i];
		tamanho++;
		
		if(num[i] == -1)
		{
			break;
		}
	}
	
	cin >> x;
	
	int posicao = binaria(num, tamanho, x);
	
	if(posicao == -1)
	{
		cout << "Nao possui acesso" << endl;
	}
	else 
	{
		cout << "Possui acesso" << endl;
	}
	
	return 0;
}
