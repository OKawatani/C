#include<iostream>
#include<list>
using namespace std;

struct no{

    int destino;
    int peso;
};


void BFS(list<no>adj[], int nVertices, int s) 
{
    int state[nVertices], pai[nVertices];
    list<int> Q;

    for(int u = 0; u < nVertices; u++){
        
        if(u != s)
        {
            state[u] = 'u'; // undiscovered​
            pai[u] = -1; // sem pais  ​
        }
    
    }
        
    state[s] = 'd';// discovered​
    
    pai[s] = -1; 
    
    Q.push_back(s);
 
    while(!Q.empty()){

        int u = *Q.begin();
        Q.pop_front(); 
        
        cout << u << endl;

        for(list<no>::iterator p = adj[u].begin(); p != adj[u].end(); p++){

            int v = p->destino;
            
            cout << u << " " << v << endl;
            
            if(state[v] == 'u')
            {
                state[v] = 'd';
                pai[v] = u;
                Q.push_back(v);
            }
                
        }
        
        state[u] = 'p'; // processed
    
    }
        
}
    
int main(){

    int n, s, origem, destino;
    no dados;

    cin >> n >> s;

    list<no> adj[n];
    while(true){

        cin >> origem >> dados.destino >> dados.peso;

        if(origem == -1 && dados.destino == -1 && dados.peso == -1){
            break;
        }

        adj[origem].push_back(dados);

        no aux;
        aux.destino = origem;
        aux.peso = dados.peso;

        adj[dados.destino].push_back(aux);
    }
    
    BFS(adj, n, s);

    return 0;


}