#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct No
{
    int info;
    struct No* prox;
} Pilha;

//Inicializa a pilha como vazia 
Pilha* inicializar()
{
    return NULL;
}

//Empilha um elemento (push)
Pilha* empilhar(Pilha* topo, int valor)
{
    Pilha* novo = new No;
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

int hash1(int k, int m)
{
	int h1;
	h1 = k % m;
	
	if(h1 < 0)
	{
		return h1 + m;
	}
	return h1;
}

int hash2(int k, int m)
{
	int h2;
	
	h2 = 1 + (k % (m - 1));
	
	if(h2 < 0)
	{
		return h2 + (m - 1);
	}
	
	return h2;
}

int dhash(int k, int m, int i)
{
	int dhash;
	
	dhash = (hash1(k,m) + i*hash2(k,m)) % m;
	
	return dhash;
}

int main()
{
    Pilha* pilha = inicializar();
    int quant, m, num[100];

    cout << "Digite o valor de m: " << endl;
    cin >> m;

    int tabela[m];

    for(int i = 0; i < m; i++)
    {
        tabela[i] = -1;
    }

    cout << "Digite a quantidade de numeros que deseja empilhar: " << endl;
    cin >> quant;

    for(int i = 0; i < quant; i++)
    {
        cin >> num[i];
        pilha = empilhar(pilha, num[i]);
    }

    int valor;

    while(pilha != NULL)
    {
        pilha = desempilhar(pilha, &valor);

        int i = 0;
        int pos;

        while(i < m)
        {
            pos = dhash(valor, m, i);

            if(tabela[pos] == -1)
            {
                break;
            }

            i++;
        }

        tabela[pos] = valor;
        
    }

        for(int i = 0; i < m; i++)
        {
            cout << tabela[i];

            if(i < m - 1)
            cout << " ";
        }
        cout << endl;

    liberar(pilha);

    // A complexidade do algoritmo é O(n*m) no pior caso, onde n é a quantidade de números a serem empilhados e m é o tamanho da tabela hash. Isso ocorre porque, no pior caso, cada número pode colidir com outros números na tabela hash, exigindo uma busca linear para encontrar uma posição vazia.
    return 0;
}