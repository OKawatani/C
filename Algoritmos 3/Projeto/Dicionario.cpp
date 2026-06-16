// Marcelo Kian Abate Dantas 733 GES
// Pedro Paulo Castro Brito 2425 GEC
// Eduardo Kawatani Rios 668 GES
// Antonio Lucas Oshiro Rezende Teixeira 2363 GEC
// Vitor Augusto do Couto 536 GES

#include <iostream>
#include <cstdlib>
#include <list>
#include <string>
#include <cmath>
using namespace std;

// Armazenamento de dados 
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

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


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

treenodeptr tPointSmaller(treenodeptr &p){
    treenodeptr t = p;

    if(p->left == NULL){
        p = p->right;
        return t;
    }
    else{
        return tPointSmaller(p->left);
    }
}

bool tRemove(treenodeptr &p, string x){
        
    treenodeptr t;
        
    if(p == NULL)return false;
        
    if(x == p->info.palavraFicticia){
            
        t = p;
            
        if(p->left == NULL){
            p = p->right;
        }
            
        else if(p->right == NULL){
            p = p->left;
        }
            
        else{
            t = tPointSmaller(p->right);
            p->info = t->info;
        }

        delete t;
        return true;
    }

    else if(x < p->info.palavraFicticia) return tRemove(p->left,x);
    else return tRemove(p->right,x);
}

void percorrerArvore(treenodeptr p) {
    if (p != NULL) {
        percorrerArvore(p->left);
        cout << "Palavra Ficticia: "<<  p->info.palavraFicticia << endl;
        cout << "Palavra em Portugues: " << p->info.palavraPortugues << endl;
        cout << "Significado: " << p->info.palavraSignificado << endl;
        cout << "------------------------" << endl;
        percorrerArvore(p->right);
    }
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// Funções principais 

void cadastrarPalavra(treenodeptr &p) {

    No novo;
    char outro;

    cout << "Palavra Ficticia: "; cin >> novo.palavraFicticia;
    cout << "Traducao (Portugues): "; cin >> novo.palavraPortugues;
    cout << "Coordenadas (x y z): "; cin >> novo.x >> novo.y >> novo.z;
    cout << "Significado: "; cin >> novo.palavraSignificado;

    Aresta relacao;
    relacao.destino = novo.palavraSignificado;

    novo.adjacencias.push_back(relacao);

    do {

        cout << "Quer digitar outro significado? (s/n)";
        cin >> outro;

        if (outro == 's'){
            Aresta relacao2;
            cin >> relacao2.destino;
            novo.adjacencias.push_back(relacao2);
        }
    } while (outro == 's');

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
            cout << "Significado de "<< busca << ": ";

            list<Aresta>::iterator ita;
            for (ita = it->adjacencias.begin(); ita != it->adjacencias.end(); ++ita) {
                cout << "\n" << ita->destino;
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

    No* palavraBase = NULL;

    list<No>::iterator it;

    // encontra palavra buscada
    for(it = grafo.begin(); it != grafo.end(); ++it){

        if(it->palavraFicticia == busca){

            palavraBase = &(*it);

            break;
        }
    }

    if(palavraBase == NULL){

        cout << "Palavra nao encontrada.\n";
        return;
    }

    cout << "Sinonimos de " << busca << ":\n";

    bool encontrou = false;

    // percorre todas as palavras
    for(it = grafo.begin(); it != grafo.end(); ++it){

        if(it->palavraFicticia == busca)
            continue;

        bool igual = false;

        list<Aresta>::iterator s1;
        list<Aresta>::iterator s2;

        // compara TODOS os significados
        for(s1 = palavraBase->adjacencias.begin(); s1 != palavraBase->adjacencias.end(); ++s1){

            for(s2 = it->adjacencias.begin(); s2 != it->adjacencias.end(); ++s2){

                if(s1->destino == s2->destino){
                    igual = true;
                }
            }
        }

        if(igual){
            cout << "- " << it->palavraFicticia << endl;
            encontrou = true;
        }
    }

    if(!encontrou){
        cout << "Nenhum sinonimo encontrado.\n";
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
    
    if (grafo.empty()) {
        cout << "Cadastre uma palavra antes" << endl;
        return;
    }

    list<No> listaOrdenada = grafo;
    bool trocou;

    do {
        trocou = false;
        list<No>::iterator it = listaOrdenada.begin();
        list<No>::iterator proximo = it;
        proximo++;

        while (proximo != listaOrdenada.end()) {
            if (it->palavraFicticia.length() > proximo->palavraFicticia.length()) {
                
                No x = *it;
                *it = *proximo; 
                *proximo = x;
                trocou = true;}
                it++; 
                proximo++;
            
            }
    } while (trocou);
  
    list<No>::iterator ordem;
    for (ordem = listaOrdenada.begin(); ordem != listaOrdenada.end(); ordem++) {
      cout << ordem->palavraFicticia << ", ";
    }
}

void removerPalavra(treenodeptr &p){

    string palavra;

    cout << "Digite a palavra ficticia que deseja remover: ";
    cin >> palavra;

    bool result = tRemove(p, palavra);

    if(result){

        list<No>::iterator it;

        for(it = grafo.begin();it != grafo.end();){

            if(it->palavraFicticia == palavra){
                it = grafo.erase(it);
            }
            else{
                ++it;
            }
        }

        cout << "Palavra removida com sucesso\n";
    }

    else{

        cout << "Palavra nao encontrada\n";

    }
}

void calcularSimilaridade() {
    string palavra1, palavra2;

    cout << "Digite a primeira palavra: ";
    cin >> palavra1;

    cout << "Digite a segunda palavra: ";
    cin >> palavra2;

    No* p1 = NULL;
    No* p2 = NULL;

    list<No>::iterator it;

    for (it = grafo.begin(); it != grafo.end(); ++it) {
        if (it->palavraFicticia == palavra1) {
            p1 = &(*it);
        }

        if (it->palavraFicticia == palavra2) {
            p2 = &(*it);
        }
    }

    if (p1 == NULL || p2 == NULL) {
        cout << "Palavra nao encontrada.\n";
        return;
    }

    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    float dz = p2->z - p1->z;

    float distancia = sqrt((dx * dx) + (dy * dy) + (dz * dz));

    cout << "Similaridade de "
         << palavra1 << " e "
         << palavra2 << " = "
         << distancia << endl;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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
            case 6: removerPalavra(p); break;
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