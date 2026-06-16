#include<iostream>
#include<list>
using namespace std;

int soma(list<int> lista){
    
    int soma = 0;
    list<int> ::iterator it;

    for(it = lista.begin(); it != lista.end(); it++){
        soma += *it;
    }
    return soma;
}

int main(){
    list<int> lista;
    int valor;

    do{
        cin >> valor;
        lista.push_back(valor);

    }while(valor != 0);

    cout << "Soma: " << soma(lista) << endl;
}