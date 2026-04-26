#include<iostream>
#include<list>
using namespace std;

int contar(list<int> lista){
    
    int contador = 0;
    list<int> :: iterator it;

    for(it = lista.begin(); it != lista.end(); it++){
        contador++;
    }
    return contador;
}

int main(){
    list<int> lista;
    int valor;

    do{
        
        cin >> valor;
        lista.push_back(valor);
        
    }while(valor != 0);
    
    lista.pop_back();
    cout << contar(lista) << endl;
    return 0;
}