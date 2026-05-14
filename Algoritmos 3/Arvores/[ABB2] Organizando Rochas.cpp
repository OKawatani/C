#include<iostream>
using namespace std;

typedef struct treenode* treenodeptr;

struct dados{
    string nome;
    string tipo;
};


struct treenode {
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

bool tRemove(treenodeptr &p, string nome){
        
    treenodeptr t;
        
    if(p == NULL)return false;
        
    if(nome == p->info.nome){
            
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

    else if(nome < p->info.nome) return tRemove(p->left,nome);
    else return tRemove(p->right,nome);
}

int main(){

    int x;
    string nome;
    treenode *p = NULL;
    dados pedra;

    while(cin >> x){

        if(x == 1){

            cin >> pedra.nome;
            cin >> pedra.tipo;
            tInsert(p, pedra);
        }

        if(x == 2){
            
            cin >> nome;
            treenodeptr result = tSearch(p, nome);

            if(result){
                cout << "Nome: " << result->info.nome << endl;
                cout << "Tipo: " << result->info.tipo << endl;
            }
            else{
                cout << "ROcha nao encontrada" << endl;
            }
        }

        if(x == 3){
            cin >> nome;
            bool result = tRemove(p, nome);
            
            if(result){
                cout << "Rocha removida com sucesso" << endl;
            }
            else cout << "Rocha nao encontrada para remocao" << endl;
        }

        if(x == 0){
            break;
        }

    }



    return 0;
}
