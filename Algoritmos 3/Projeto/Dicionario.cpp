// Marcelo Kian Abate Dantas 733 GES
// Pedro Paulo Castro Brito 2425 GEC
// Eduardo Kawatani Rios 668 GES
// Antonio Lucas Oshiro Rezende Teixeira 2363 GEC
// Vitor Augusto do Couto 536 GES

#include <iostream>
#include <cstdlib>
#include <list>
#include <string>
using namespace std;

typedef struct treenode* treenodeptr;

struct Aresta {
    string destino;
};

struct No {
    string palavraFicticia;
    string palavraPortugues;
    string palavraSignificado;
    float x, y, z;
    list<Aresta> adjacencias;
};

struct treenode{
    No info;
    struct treenode *left;
    struct treenode *right;
};

list<No> grafo;

//Funções de árvore

void tInsert(treenodeptr &p, No x){

    if(p == NULL){
        p = new treenode;
        p->info = x;
        p->left = NULL;
        p->right = NULL;
    }
    else if(x.palavraFicticia < p->info.palavraFicticia){
        tInsert(p->left, x);
    }
    else if(x.palavraFicticia > p->info.palavraFicticia){
        tInsert(p->right, x);
    }
}

//---------------------------------------------------------------------

void cadastrarPalavra(treenodeptr &p) {
    No novo;
    

    cout << "Palavra Ficticia: "; cin >> novo.palavraFicticia;
    cout << "Traducao (Portugues): "; cin >> novo.palavraPortugues;
    cout << "Coordenadas (x y z): "; cin >> novo.x >> novo.y >> novo.z;
    cout << "Significado: "; cin >> novo.palavraSignificado;

    Aresta relacao;
    relacao.destino = novo.palavraSignificado;
    
    novo.adjacencias.push_back(relacao);

    grafo.push_back(novo);

    tInsert(p, novo);


    cout << "Palavra registrada!\n";
}

void listarSignificados() {
    string busca;
    cout << "Digite a palavra para ver os significados: ";
    cin >> busca;

    list<No>::iterator it;
    for (it = grafo.begin(); it != grafo.end(); ++it) {
        if (it->palavraFicticia == busca) {
            cout << "Significado de: " << busca;
            
            list<Aresta>::iterator ita;
            for (ita = it->adjacencias.begin(); ita != it->adjacencias.end(); ++ita) {
                cout << ": " << ita->destino << "\n";
            }
            return;
        }
    }
    cout << "Palavra nao encontrada.\n";
}

void listarSinonimos() {
    string busca;
    cout << "Digite a palavra para buscar sinonimos: ";
    cin >> busca;

    string significadoBase = "";
    bool encontrou = false;

    list<No>::iterator it;

    for (it = grafo.begin(); it != grafo.end(); ++it) {
        if (it->palavraFicticia == busca) {
            significadoBase = it->palavraSignificado; 
            encontrou = true;
            break;
        }
    }

    if (!encontrou) {
        cout << "Palavra nao encontrada.\n";
        return;
    }

    cout << "Sinonimos de " << busca << ":\n";

    bool temSinonimo = false;

    for (it = grafo.begin(); it != grafo.end(); ++it) {
        if (it->palavraFicticia != busca &&
            it->palavraSignificado == significadoBase) {

            cout << "- " << it->palavraFicticia << endl;
            temSinonimo = true;
        }
    }

    if (!temSinonimo) {
        cout << "Nenhum sinonimo encontrado.\n";
    }
}

void percorrerArvore(treenodeptr p) {
    if (p != NULL) {
        percorrerArvore(p->left);
        cout << p->info.palavraFicticia << endl;
        percorrerArvore(p->right);
    }
}

void listarOrdemAlfabetica(treenodeptr p) {
    if (p == NULL) {
        cout << "Cadastre palavras primeiro" << endl;
    } else {
        percorrerArvore(p);
    }
}

void listarPorTamanho() {
    cout << "Funcionalidade em construcao\n";
}

void removerPalavra() {
    cout << "Funcionalidade em construcao\n";
}

void calcularSimilaridade() {
    cout << "Funcionalidade em construcao\n";
}

int main() {
	
    int opcao;
    treenode *p = NULL;

    do {
        system("cls");

        cout << "===== MENU =====\n";
        cout << "1. Cadastrar palavra\n";
        cout << "2. Listar significados de uma palavra\n";
        cout << "3. Listar sinonimos de uma palavra\n";
        cout << "4. Listar palavras em ordem alfabetica\n";
        cout << "5. Listar palavras por tamanho\n";
        cout << "6. Remover palavra\n";
        cout << "7. Calcular similaridade entre duas palavras\n";
        cout << "0. Sair\n";
		cout << "Escolha uma opcao: ";
		// Bloqueia caso a resposta seja uma string ou char
		while (!(cin >> opcao)) { 
		    cin.clear(); 
		    cin.ignore(1000, '\n'); 
		    cout << "ERRO: Digite apenas numeros!\n";
		    cout << "Escolha uma opcao: ";
		}
		// ================================================
        system("cls");

        switch(opcao) {
            case 1: cadastrarPalavra(p); break;
            case 2: listarSignificados(); break;
            case 3: listarSinonimos(); break;
            case 4: listarOrdemAlfabetica(p); break;
            case 5: listarPorTamanho(); break;
            case 6: removerPalavra(); break;
            case 7: calcularSimilaridade(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida!\n";
        }

        if(opcao != 0) {
            cout << "\nPressione qualquer tecla para voltar ao menu...";
            cin.ignore();
            cin.get();
        }

    } while(opcao != 0);

    return 0;
}