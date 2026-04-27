#include<iostream>
#include<list>
#include<climits>
using namespace std;

#define INF 99999

struct no{
    int destino;
    int peso;
};

void dijkstra(list<no> adj[], int nVertices, int start, int end){

    bool intree[nVertices];
    int distance[nVertices];
    int parent[nVertices] ;

    for(int u = 0; u < nVertices; u++){
        intree[u] = false;
        distance[u] = INF;
        parent[u] = -1;
    }

    distance[start] = 0;
    int v = start;

    while(intree[v] == false){
        intree[v] = true;
        
        for(list<no>::iterator p = adj[v].begin(); p != adj[v].end(); p++){
            int dest = p->destino;
            int weight = p->peso;
            
            if(!intree[dest] && distance[dest] > distance[v] + weight){
                distance[dest] = distance[v] + weight;
                parent[dest] = v;
            }
        }

        v = 0;
        int dist = INF;
        
        for(int u = 0; u < nVertices; u++){
            if(intree[u] == false && dist > distance[u])
            {
                dist = distance[u];
                v = u;
            }
        }

        if(v == 0) 
        break;
        
    }


   
    int atual = end;
    list<int> caminho;

    while(atual != -1){
        caminho.push_front(atual);
        atual = parent[atual];
    }

    cout << "Menor caminho: ";

    for(list<int>::iterator it = caminho.begin(); it != caminho.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Custo: " << distance[end];

}



int main(){

    int nVertices, origem, orientado, start, end;
    no dados, aux;

    cin >> nVertices >> orientado >> start >> end;

    list<no> adj[nVertices];

    while(true){

        cin >> origem >> dados.destino >> dados.peso;
        
        if(origem == -1 && dados.destino == -1 && dados.peso == -1){
            break;
        }
        
        if(orientado == 0){
            aux.destino = origem;
            aux.peso = dados.peso;
            adj[dados.destino].push_back(aux);
        }

        adj[origem].push_back(dados);
    }

    dijkstra(adj, nVertices, start, end);



    return 0;
}