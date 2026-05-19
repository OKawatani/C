#include <iostream>
using namespace std;

typedef struct No {
    int info;
    struct No* prox;
} Fila;

// Inicializa a filacomo vazia
Fila* inicializar() {
    return NULL;
}

// Insere um elemento no início da lista
Fila* inserir(Fila* fila, int valor) {
    Fila* novo = new No;
    novo->info = valor;
    novo->prox = NULL;
    
	if(fila == NULL)
	{
		return novo;
	}
	
	Fila* temp = fila;
	while(temp->prox != NULL)
	{
		temp = temp->prox;
	}
	
	temp -> prox = novo;
	return fila;
}

// Exibe todos os elementos da fila
void exibir(Fila* fila) {
    Fila* p = fila;
    while (p != NULL) {
        cout << p->info << " ";
        p = p->prox;
    }
    cout << endl;
}

// Libera toda a memória alocada para a lista
void liberar(Fila* fila) {
    Fila* p = fila;
    while (p != NULL) {
        Fila* temp = p->prox;
        delete p;
        p = temp;
    }
}

// Remove um elemento da fila(primeira ocorrência)
Fila* remover(Fila* fila, int valor) {
    Fila* anterior = NULL;
    Fila* p = fila;
    while (p != NULL && p->info != valor) {
        anterior = p;
        p = p->prox;
    }
    if (p == NULL) return fila; // elemento não encontrado
    if (anterior == NULL) {
        fila= p->prox; // remove o primeiro elemento
    } else {
        anterior->prox = p->prox; // remove um elemento do meio ou final
    }
    delete p;
    return fila;
}

int main() {
    Fila* fila= inicializar();
    int valor,num;
    

    cout << "Insira os elementos da lista: " << endl;
    
    for(int i = 0; i < 4; i++)
	{
		cin >> valor;
		fila = inserir(fila, valor);
	}
	
	
	cout << "Fila atual: ";
    exibir(fila);
    
    cout << "Digite qual elemento deseja remover da Fila: " << endl;
	cin >> num; 
	
    
	fila= remover(fila, num);
    cout << "fila apos remover " << num << ": ";
    exibir(fila);

    liberar(fila);
    return 0;
}