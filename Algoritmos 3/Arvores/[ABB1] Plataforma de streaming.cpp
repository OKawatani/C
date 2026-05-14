#include<iostream>
using namespace std;

typedef struct treenode* treenodeptr; 

struct dados{
    string nome;
    string genero;
    int duracao;
    int classificacao;
    int ano;
};


struct treenode{
    dados info;
    struct treenode *left;
    struct treenode *right;
};

void tInsert(treenodeptr &p, dados x){

    if(p == NULL){
        p = new treenode;
        p->info = x;
        p->left = NULL;
        p->right = NULL;
    }
    else if(x.nome < p->info.nome){
        tInsert(p->left, x);
    }
    else{
        tInsert(p->right, x);
    }
} 


treenodeptr tSearch(treenodeptr p, string nome){
    
    if(p == NULL){
        return NULL;
    }
    else if(nome == p->info.nome){
        return p;
    }
    else{

        if(nome < p->info.nome){
            return tSearch(p->left, nome);
        }
        else{
            return tSearch(p->right, nome);
        }
    }
}

int main(){

    int x;
    string nome;
    treenode *p = NULL;
    dados filme;

    while(cin >> x){

        if(x == 1){
            
            cin.ignore();
            getline(cin, filme.nome);
            getline(cin, filme.genero);
            
            cin >> filme.duracao;
            cin >> filme.classificacao;
            cin >> filme.ano; 

            tInsert(p, filme);
        }
        
        else if(x == 2){
            
            cin.ignore();
            getline(cin, nome);
            
            treenodeptr result = tSearch(p, nome);

            if(result){
                
                cout << "Nome: " << result->info.nome << endl;
                cout << "Genero: " << result->info.genero << endl;
                cout << "Duracao: " << result->info.duracao << " mins" << endl;
                cout << "Classificacao: " << result->info.classificacao << endl;
                cout << "Ano: " << result->info.ano << endl;

            }
            else{
                cout << "Filme nao encontrado";
            }

        }
        
        else if(x == 0){
            break;
        }
        
        else{
            cout << "Operacao invalida" << endl;
        }
    }

    return 0;
}