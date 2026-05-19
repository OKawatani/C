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
	int num[20],tamanho = 0, x, n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
		tamanho++;
		
	}
	
	cin >> x;
	
	int posicao = binaria(num, tamanho, x);
	
	if(posicao == -1)
	{
		cout << "Nao localizado" << endl;
	}
	else 
	{
		cout << "Corredor " << posicao << endl;
	}
	
	return 0;
}
