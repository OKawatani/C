#include<iostream>
#include<iomanip>
using namespace std;

// Função Hash com sondagem linear.

int hash1(int k, int i, int m)
{
	int hash1;
	
	hash1 = (k + i) % m;
	
	return hash1;
}

//Função para inserir a tabela hash

int hash_insert(int t[], int m, int k)
{
	int i = 0;
	
	while(i != m)
	{
		int j = hash1(k,i,m);
		if(t[j] == -1) // Verifica se a posição está vazia
		{
			t[j] = k; // Insere a chave 
			return j; // Retorna a posição de inserção 
		}
		else
		{
			i++; // Incrementa para a proxima posição
		}
	}
	return -1; // Retorna -1 se a tabela estiver cheia 
	
}

int main()
{
	
	int m, k, pos;
	
	cin >> m;
	
	int t[m];
	
	for(int i = 0; i < m; i++)
	{
		t[i] = -1; // Inicializa a tabela com -1 para indicar posições vazias
	}
	
	while(true)
	{
		cin >> k;
		
		if(k == 0)
			break;
		
		pos = hash_insert(t,m,k);
	}
	
	// Exibe a tabela depois de todas as inserções
	
	for(int i = 0; i < m; i++)
	{
		cout << t[i] << " ";
	}
    
	return 0;
}