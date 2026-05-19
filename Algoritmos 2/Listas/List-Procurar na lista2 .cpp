
#include <iostream>
using namespace std;

typedef struct No {
    int info;
    struct No* prox;
} Lista;

// Inicializa a lista como vazia
Lista* inicializar() {
    return NULL;
}

// Insere um elemento no início da lista
Lista* inserir(Lista* lista, int valor) {
    Lista* novo = new No;
    novo->info = valor;
    novo->prox = lista;
    return novo;
}

// Exibe todos os elementos da lista
void exibir(Lista* lista) {
    Lista* p = lista;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->prox;
    }
    cout << endl;
}

// Libera toda a memória alocada para a lista
void liberar(Lista* lista) {
    Lista* p = lista;
    while (p != NULL) {
        Lista* temp = p->prox;
        delete p;
        p = temp;
    }
}

bool encontrar(Lista* lista, int x)
{
	Lista* p = lista;
	
	while(p != NULL)
	{
		if(p->info == x)
			return true;
		else 
			p = p->prox;
	}
	return false;
}


// Remove um elemento da lista (primeira ocorrência)
Lista* remover(Lista* lista, int valor) {
    Lista* anterior = NULL;
    Lista* p = lista;
    while (p != NULL && p->info != valor) {
        anterior = p;
        p = p->prox;
    }
    if (p == NULL) return lista; // elemento não encontrado
    if (anterior == NULL) {
        lista = p->prox; // remove o primeiro elemento
    } else {
        anterior->prox = p->prox; // remove um elemento do meio ou final
    }
    delete p;
    return lista;
}

int main() {
    Lista* lista = inicializar();
    int valor = 0,num;
    

    cout << "Insira os elementos da lista: " << endl;
  	  while (true) 
		{
            cin >> valor;
			if (valor == 0)
            break;
            lista = inserir(lista, valor);
 	    }	
	
	
	cout << "Lista atual: ";
    exibir(lista);
    
    cout << "Digite qual elemento deseja procurar na lista: " << endl;
	cin >> num; 
	
    int res;
	res = encontrar(lista, num);
    
    if(res == 1)
    	cout << "Encontrado" << endl;
    else
    	cout << "Nao encontrado" << endl;


    liberar(lista);
    return 0;
}