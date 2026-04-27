#include <iostream>
#include <list>
#include <climits>
using namespace std;

#define INF 999999


struct no{

    int destino;
    int peso;
};

void prim(list<no> adj[], int nVertices, int start){

    bool intree[nVertices];
    int distance[nVertices];
    int parent[nVertices];
    int pesototal = 0;

    for(int u = 0; u < nVertices; u++){
        intree[u] = false;
        distance[u] = INF;
        parent[u] = -1;
    }

    distance[start] = 0;
    int v = start;

    while(intree[v] == false){

        intree[v] = true;

        for(list<no>::iterator p = adj[v].begin(); p != adj[v].end(); p++)
        {
            int destino = p -> destino;
            int weight = p -> peso;

            if(distance[destino] > weight && intree[destino] == false){
                distance[destino] = weight;
                parent[destino] = v;
            }

        }

        v = 0;
        int dist = INF;
        
        for(int u = 0; u < nVertices; u++){
            if(!intree[u] && distance[u] < dist){
                dist = distance[u];
                v = u;
            }
        }

        if(v == 0){
            break;
        }
    }

    cout << "Arestas da MST:\n";
    for(int i = 0; i < nVertices; i++){
        if(parent[i] != -1){
            cout << parent[i] << " - " << i << " (peso " << distance[i] << ")" << endl;

            pesototal += distance[i];
        }
    }
    cout << "Custo: " << pesototal;



}



int main(){

no dados, aux;
int vertices, orientado, starter, origem;

cin >> vertices >> orientado >> starter;

list<no> adj[vertices];

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

prim(adj, vertices, starter);

return 0;

}