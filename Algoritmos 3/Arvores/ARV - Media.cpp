#include<iostream>
#include<iomanip>
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
    else if(x > p->info){
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

bool tRemove(treenodeptr &p, int x){
        
    treenodeptr t;
        
    if(p == NULL)return false;
        
    if(x == p->info){
            
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

    else if(x < p->info) return tRemove(p->left,x);
    else return tRemove(p->right,x);
}

void tPreOrder(treenodeptr p){
    
    if(p != NULL){
        cout << p->info << endl;
        tPreOrder(p->left);
        tPreOrder(p->right);
    }
}

void tInOrder(treenodeptr p){
    if(p != NULL){
        tInOrder(p->left);
        cout << p -> info << " ";
        tInOrder(p->right);
    }
}

void tPostOrder(treenodeptr p){
    if(p != NULL){
        tPostOrder(p->left);
        tPostOrder(p->right);

        cout << p->info << endl;
    }
}

int soma(treenodeptr p){
    if(p == NULL){
        return 0;
    }
    return p->info + soma(p->left) + soma(p->right);
}

int quantidade(treenodeptr p){
    if(p == NULL){
        return 0;
    }

    return 1 + quantidade(p->left) + quantidade(p->right);
}

float media(treenodeptr arvore){

    int s = soma(arvore);
    int q = quantidade(arvore);
    if(q == 0){
        return 0;
    }

    return (float) s/q;


}

int main(){

    int x;
    treenode *p = NULL;
    cout << fixed << setprecision(2);

   while(1){
    
    cin >> x;
    if(x == -1){
        break;
    }
    tInsert(p,x);

   }

   float res = media(p);

   cout << "Media: " << res; 

    return 0;
}
