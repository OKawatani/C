#include <iostream>

using namespace std;

 typedef struct No 
{
    int info;
    struct No* prox;

} Pilha;

// Inicializa a pilha como vazia
Pilha* inicializar() 
{
    return NULL;
}

// Empilha um elemento (push)
Pilha* empilhar(Pilha* topo, int valor) 
{
    Pilha* novo = new No;
    novo->info = valor;
    novo->prox = topo;
    return novo;
}

// Desempilha um elemento (pop)
Pilha* desempilhar(Pilha* topo, int* valor) {
    if (topo == NULL) return NULL;
    *valor = topo->info;
    Pilha* temp = topo->prox;
    delete topo;
    return temp;
}

// Exibe todos os elementos da pilha
void exibir(Pilha* topo) {
    Pilha* p = topo;
    while (p != NULL) {
        std::cout << p->info << " ";
        p = p->prox;
    }
    std::cout << std::endl;
}

// Libera toda a memória alocada para a pilha
void liberar(Pilha* topo) {
    Pilha* p = topo;
    while (p != NULL) {
        Pilha* temp = p->prox;
        delete p;
        p = temp;
    }
}

int main() {
    Pilha* pilha = inicializar();
    pilha = empilhar(pilha, 10);
    pilha = empilhar(pilha, 20);
    pilha = empilhar(pilha, 30);

    cout << "Pilha atual: ";
    exibir(pilha);

    int valor;
    
	pilha = desempilhar(pilha, &valor);
    
	cout << "Elemento desempilhado: " << valor << std::endl;
    
	cout << "Pilha após desempilhar: ";
    
	exibir(pilha);

    liberar(pilha);
    return 0;
}