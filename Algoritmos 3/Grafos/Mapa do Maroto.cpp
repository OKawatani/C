#include<iostream>
#include<list>
using namespace std;

struct no{

    int destino;
    int peso;
};

int main(){

    int n, orientado, origem, destino;

    no dados;

    cin >> n >> orientado;

    list<no> adj[n];

    while(true){

        cin >> origem >> dados.destino >> dados.peso;

        if(origem == -1 && dados.destino == -1 && dados.peso == -1 ){
            break;
        }

        adj[origem].push_back(dados);
        
        if(orientado == 0){

            destino = dados.destino;
            dados.destino = origem;
            adj[destino].push_back(dados);
        }

    }

    for(int i = 0; i < n; i++){

        for(list<no>::iterator it = adj[i].begin(); it != adj[i].end(); it++){

            cout << i << " " << it->destino << " " << it->peso << endl;
        }

    }


    return 0;
}