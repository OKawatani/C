#include<iostream>
#include<list>
using namespace std;

// Estrutura que representa uma aresta
struct no{
    int v;     // vértice de destino
    int peso;  // peso da aresta
};

// Função que insere uma aresta no grafo
void cria_aresta(list<no> adj[], int u, int v, int p, int orientado){

    no dados; // cria um "pacote" (destino + peso)

    dados.v = v;
    dados.peso = p;

    // adiciona aresta u -> v
    adj[u].push_back(dados); 

    // se o grafo NÃO for orientado, adiciona também v -> u
    if(orientado == 0){
        dados.v = u; // reaproveita a struct invertendo o destino
        adj[v].push_back(dados);
    }
}

int main(){
    
    int vertices, orientado;
    
    cin >> vertices >> orientado;
    // vertices = número de nós
    // orientado = 1 (direcionado) ou 0 (não direcionado)
    
    list<no> adj[vertices]; 
    // vetor de listas → lista de adjacência
    // adj[i] guarda todas as arestas que saem do vértice i
    
    int u, v, p;

    while(true){
        
        cin >> u >> v >> p;

        // condição de parada da entrada
        if(u == -1 && v == -1 && p == -1){
            break;
        }

        // adiciona a aresta no grafo
        cria_aresta(adj, u, v, p, orientado);

    }

    // percorre todos os vértices
    for(int i = 0; i < vertices; i++){
        
        // percorre todas as arestas que saem de i
        for(list<no>::iterator it = adj[i].begin(); it != adj[i].end(); it++){
            
            // imprime no formato: origem destino peso
            cout << i << " " << it->v << " " << it->peso << endl;
        }
    
    }

    return 0;
}