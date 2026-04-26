#include<iostream>
using namespace std;

struct Itens
{
    int codigo;
    string nome;
    int preco;
};

int hash_aux(int k, int m)
{
	int h;
	
	h = k % m;
	
	if(h < 0) {
		return h + m;
	}
	
	
	
	return h;
}

int hash1(int k, int m, int i)
{
	int hlinha;
	
	hlinha = (hash_aux(k,m) + i) % m;
	
	return hlinha;
	
}


//Funções da fila

typedef struct No {
    int info;
    struct No* prox;
} Fila;

// Inicializa a filacomo vazia
Fila* inicializar() {
    return NULL;
}

// Insere um elemento no inicio da lista
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

// Libera toda a memoria alocada para a lista
void liberar(Fila* fila) {
    Fila* p = fila;
    while (p != NULL) {
        Fila* temp = p->prox;
        delete p;
        p = temp;
    }
}

// Remove um elemento da fila(primeira ocorrencia)
Fila* remover(Fila* fila, int valor) {
    Fila* anterior = NULL;
    Fila* p = fila;
    while (p != NULL && p->info != valor) {
        anterior = p;
        p = p->prox;
    }
    if (p == NULL) return fila; // elemento n�o encontrado
    if (anterior == NULL) {
        fila= p->prox; // remove o primeiro elemento
    } else {
        anterior->prox = p->prox; // remove um elemento do meio ou final
    }
    delete p;
    return fila;
}

// Remove o primeiro elemento da fila
Fila* remover_inicio(Fila* fila, int* valor)
{
    if(fila == NULL) return NULL;

    Fila* temp = fila;
    *valor = fila->info;
    fila = fila->prox;
    delete temp;

    return fila;
}


//Funções da pilha

typedef struct No2
{
    int info;
    struct No2* prox;
} Pilha;

//Inicializa a pilha como vazia 
Pilha* inicializar2()
{
    return NULL;
}

//Empilha um elemento (push)
Pilha* empilhar(Pilha* topo, int valor)
{
    Pilha* novo = new No2;
    novo->info = valor;
    novo->prox = topo;
    return novo;
}

//Desempilha um elemento (pop)
Pilha* desempilhar(Pilha* topo, int* valor)
{
    if(topo == NULL) return NULL;
    *valor = topo->info;
    Pilha* temp = topo->prox;
    delete topo;
    return temp;
}

//Exibe todos os elementos da pilha
void exibir(Pilha* topo)
{
    Pilha* p = topo;
    while(p != NULL)
    {
        cout << p->info << " ";
        p = p->prox;
    }
    cout << endl;
}

//Libera toda a memória alocada para a pilha
void liberar(Pilha* topo)
{
    Pilha* p = topo;
    while(p != NULL)
    {
        Pilha* temp = p->prox;
        delete p;
        p = temp;
    }
}

int main()
{
    Fila* fila = inicializar();
    Pilha* pilha = inicializar2();
    int n, m = 43, codfila[100], codpilha[100], quantpilha = 0, quantfila = 0, compra = 0, venda = 0, lucro = 0;

    Itens dados[43];
    Itens tabela[43];

    // Inicializa tabela hash
    for(int i = 0; i < m; i++)
    {
        tabela[i].codigo = -1;
        tabela[i].nome = "";
        tabela[i].preco = 0;
    }

    cin >> n;

    // Lê os dados primeiro
    for(int i = 0; i < n; i++)
    {
        cin >> dados[i].codigo;
        cin >> dados[i].nome;
        cin >> dados[i].preco;
    }

    // Agora insere na hash
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        int pos;

        do
        {
            pos = hash1(dados[i].codigo, m, j);
            j++;

        } while(tabela[pos].codigo != -1);

        tabela[pos] = dados[i]; // tranfere os dados nome e preço para a nova posição na tabela hash.
    }

    // Exibe a tabela hash
    //for(int i = 0; i < m; i++)
    //{
            //cout << "Posicao " << i << ": Codigo= " << tabela[i].codigo << ", Nome= " << tabela[i].nome << ", Preco= " << tabela[i].preco << endl;
    //}

    cout << "Digite o codigo do item que deseja adicionar na fila: " << endl;
    
    
    int j = 0;

    do
    {
        cin >> codfila[j];
        j++; 

    }while(codfila[j-1] != -1);

    for(int i = 0; i < j-1; i++)
    {
        int k = 0;
        int pos;
    
        do
        {
            pos = hash1(codfila[i], m, k);
            k++;
    
        } while(tabela[pos].codigo != codfila[i] && tabela[pos].codigo != -1);
    
        if(tabela[pos].codigo == codfila[i])
        {
            fila = inserir(fila, tabela[pos].preco);
        }
    }

    cout << "Digite o codigo dos itens que deseja adicionar na pilha: " << endl;
    
    int l = 0;

    do
    {
        
        cin >> codpilha[l];
        l++;

    }while(codpilha[l-1] != -1);

    for(int i = 0; i < l-1; i++)
    {
        int k = 0;
        int pos;
    
        do
        {
            pos = hash1(codpilha[i], m, k);
            k++;
    
        } while(tabela[pos].codigo != codpilha[i] && tabela[pos].codigo != -1);
    
        if(tabela[pos].codigo == codpilha[i])
        {
            pilha = empilhar(pilha, tabela[pos].preco);
        }
    }

    //cout << "Fila final: ";
    //exibir(fila);
    
    //cout << "Pilha final: ";
    //exibir(pilha);

    cout << "Digite o a quantida de itens que deseja remover da fila e da pilha: ";
    cin >> quantfila >> quantpilha;

    for(int i = 0; i < quantfila; i++)
    {
        if(fila != NULL)
        {
            int valor;
            fila = remover_inicio(fila, &valor);
            venda += valor;
        }
    }


    for(int i = 0; i < quantpilha; i++)
    {
        int valor;
        pilha = desempilhar(pilha, &valor);

        compra = valor + compra; 

    }

    lucro = venda - compra;
    cout << lucro << " Moeda(s)." << endl;

    liberar(fila);
    liberar(pilha);


   // A complexidade do algoritmo é O(n) para inserir os itens na fila e na pilha, onde n é o número de itens a serem inseridos. A busca na tabela hash tem complexidade média O(1), mas no pior caso pode chegar a O(m), onde m é o tamanho da tabela hash. A remoção dos itens da fila e da pilha tem complexidade O(k), onde k é a quantidade de itens a serem removidos. Portanto, a complexidade total do algoritmo é O(n + m + k).
    
   return 0;
}
