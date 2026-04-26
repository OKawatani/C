#define INF 99999
#include <iostream>
#include <list>
using namespace std;


struct aresta
{
    int origem;
    int destino;
    int peso;
};


int dijkstra_lista(list<aresta>grafo[], int vertices, int origem, int destino)
{
    bool visitado[vertices];
    int pais [vertices], distancia[vertices], atual;

    for(int i = 0; i < vertices; i++)
    {
        visitado[i] = false;
        pais[i] = -1;
        distancia[i] = INF;
    }
    distancia[origem] = 0;
    atual = origem;

    while(!visitado[atual])
    {
        visitado[atual] = true;
        
        list<aresta>::iterator it; 
        
        for(it = grafo[atual].begin(); it != grafo[atual].end(); it++)
        {
            int d = it->destino, p = it->peso;
            
            if(!visitado[d] && distancia[atual] + p < distancia[d])
            {
                distancia[d] = distancia[atual] + p;
                pais[d] = atual;
            }
        
        }
        int menor_peso = INF;
        for(int i = 0; i< vertices; i++)
        {
            if(!visitado[i] && distancia[i] < menor_peso)
            {
                menor_peso = distancia[i];
                atual = i;
            }
        }
    }
    atual = destino;
    while(atual != origem)
    {
        cout << atual+1 << " <- ";
        atual = pais[atual];
    }
    return distancia[destino];
}





int main()
{
    int vertices, arestas, origem, destino, peso;
 
    cin >> vertices;

    list<aresta> grafo[vertices];
    
    cin >> arestas;
    
    for(int i = 0; i < arestas; i++)
    {
        cin >> origem >> destino >> peso;
 
        origem--; destino--;
 
        grafo[origem].push_back({origem, destino, peso});
        grafo[destino].push_back({destino, origem, peso});
    
    }


    list<aresta>::iterator it;
    for(int i = 0; i < vertices; i++)
    {
        cout << i << ": ";

        for(it = grafo[i].begin(); it != grafo[i].end(); it++)
        {
            cout << "(" << it->destino+1 << ","  << it->peso << "),";
        }
        cout << endl;
    }

    cout << dijkstra_lista(grafo, vertices, 0, 4) << endl;



    return 0;
}