#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x){
    for(int i = 0; i < lista.size(); i++){
        if(lista.front() == x){
            return true;
        }
        lista.pop_front();
    }
    return false;
}


int main(){

    list<int> lista;

    int valor, x;

    do{
    
        cin >> valor;
        lista.push_back(valor);
    }while(valor != 0);

    cin >> x;
    if(encontrar(lista, x)){
        cout << "Valor encontrado" << endl;    

    }
    
    else{
        cout << "Valor nao encontrado" << endl;
    }

    return 0;
}