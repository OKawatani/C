#include <iostream>  // Biblioteca para entrada e saída padrão
#include <list>      // Biblioteca para usar a estrutura de dados list
using namespace std; // Usa o namespace padrão para evitar prefixar std::

struct Aresta {
    int origem, destino, peso; // Estrutura que representa uma aresta com origem, destino e peso
};

int main() {
    int vertices, arestas, origem, destino, peso;

    // Lê o número de vértices do grafo
    cin >> vertices;

    // Declara um array de listas de adjacência, onde cada lista representa as arestas de um vértice
    list<Aresta> grafo[vertices];

    // Lê o número de arestas do grafo
    cin >> arestas;

    // Loop para ler as arestas do grafo
    for (int i = 0; i < arestas; i++) {
        cin >> origem >> destino >> peso; // Lê a origem, destino e peso da aresta
        origem--; destino--; // Ajusta os índices para começar de 0 (índice baseado em 1 para 0)
        
        // Adiciona a aresta na lista de adjacência do vértice de origem
        grafo[origem].push_back({origem, destino, peso});

        // Se o grafo for não-direcionado, descomente a linha abaixo para adicionar a aresta inversa
        // grafo[destino].push_back({destino, origem, peso});
    }

    // Declara um iterador para percorrer as listas de adjacência
    list<Aresta>::iterator it;

    // Loop para percorrer todos os vértices do grafo
    for (int i = 0; i < vertices; i++) {
        cout << i + 1 << ": "; // Imprime o número do vértice (ajustado para índice baseado em 1)

        // Loop para percorrer todas as arestas da lista de adjacência do vértice atual
        for (it = grafo[i].begin(); it != grafo[i].end(); it++) {
            // Imprime o destino e o peso da aresta
            cout << "(" << it->destino + 1; // Ajusta o índice do destino para começar de 1
            cout << ", " << it->peso << ")" << " ";
        }

        cout << endl; // Quebra de linha após imprimir todas as arestas do vértice
    }

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}