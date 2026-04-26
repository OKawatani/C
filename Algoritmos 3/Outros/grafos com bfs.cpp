#include <iostream>
#include <list> 
#define MAX_V 100 
using namespace std;

void bfs_matriz(int grafo[MAX_V][MAX_V], int vertices, int origem)
{
	int corrente;
	list<int> fila_visitacao;
	bool visitado[vertices];

	for(int i = 0; i < vertices; i++)
	{
		visitado[i] = false;
	}

	visitado[origem] = true;
	fila_visitacao.push_back(origem);

	while(!fila_visitacao.empty())
	{
		corrente = fila_visitacao.front();
		for(int i = 0; i < vertices; i++)
		{
			if(grafo[corrente][i] != -1 && !visitado[i])
			{
				visitado[i] = true;
				fila_visitacao.push_back(i);
			}

			
		}
			cout << corrente << endl;
			fila_visitacao.pop_front();
	
	}


}


int main()
{
	int vertices, arestas, origem, destino, peso, n;

	cin >> vertices;

	int grafo[MAX_V][MAX_V];

	for(int i = 0; i < vertices; i++)
	{
		for(int j = 0; j < vertices; j++)
		{
			grafo[i][j] = -1;
		}
	}

	cin >> arestas;
	cin >> n;

	for(int i = 0; i < arestas; i++)
	{
		cin >> origem >> destino >> peso;
		
		//origem--; destino--;

		grafo[origem][destino] = peso;
		grafo[destino][origem] = peso;

	}

	for(int i = 0; i < vertices; i++)
	{
		for(int j = 0; j < vertices; j++)
		{
			cout << grafo[i][j] << " ";
		}

		cout << endl;
	}

	bfs_matriz(grafo, vertices, n);

	return 0;
}
