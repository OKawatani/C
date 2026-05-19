#include <iostream>
using namespace std;   

struct Pilha
{
    int info;
    struct Pilha* prox;
};

Pilha* inicializar()
{
    return NULL;
}   

Pilha* inserir(Pilha* topo, int valor)
{
    Pilha* novo = new Pilha;
    novo -> info = valor;
    novo -> prox = topo;
    
    return novo;
}

Pilha* retirar(Pilha* topo, int* valor)
{
    if(topo == NULL)
    return NULL;

    *valor = topo -> info;
    Pilha* temp = topo -> prox;
    delete topo;
    return temp;

}

void exibir(Pilha* topo)
{
    Pilha* p = topo;
    while(p != NULL)
    {
        cout << p->info << " " << endl;
        p = p -> prox;
    }

    cout << endl;
}

void liberar(Pilha* topo)
{
    Pilha* p = topo;
    while(p != NULL)
    {
        Pilha* temp = p -> prox;
        delete p;
        p = temp;
    }
}






int main()
{
    Pilha* pilha = inicializar();
    int valor;

    for(int i = 0; i < 4; i++)
    {
        cin >> valor;

        pilha = inserir(pilha, valor);
    }

    exibir(pilha);
    liberar(pilha);







    return 0;
}