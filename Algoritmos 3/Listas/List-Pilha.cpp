#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> pilha;
    int valor;

    for(int i = 0; i < 4; i++){
        cin >> valor;
        pilha.push_back(valor);
    }

    while(!pilha.empty()){
        cout << pilha.back() << endl;
        pilha.pop_back();
    }

    return 0;
}