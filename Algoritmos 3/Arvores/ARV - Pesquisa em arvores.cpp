#include<iostream>
using namespace std;

typedef struct treenode* treenodeptr;

struct treenode {
    int info;
    struct treenode *left;
    struct treenode *right;
};

void tInsert(treenodeptr &p, int x){

    if(p == NULL){
        p = new treenode;
        p->info = x;
        p->left = NULL;
        p->right = NULL;
    }
    else if(x < p->info){
        tInsert(p->left, x);
    }
    else{
        tInsert(p->right, x);
    }
} 


treenodeptr tSearch(treenodeptr p, int x){
    
    if(p == NULL){
        return NULL;
    }
    else if(x == p->info){
        return p;
    }
    else{

        if(x < p->info){
            return tSearch(p->left, x);
        }
        else{
            return tSearch(p->right, x);
        }
    }
}




int main(){

    int n, x;
    treenode *p = NULL;


    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> x;
        
        tInsert(p, x);
    }

    cin >> n;

    tSearch(p,n);

    if(p){
        cout << "Encontrado" << endl;
    }
    else{
        cout << "Nao encontrado" << endl;
    }



    return 0;
}