#include<iostream>
#include<list>
using namespace std;


int main(){

    list<int> estoque, venda;
    int valor, opcao, codigo;

    cin >> valor;



    for(int i = 0; i < valor; i++){
        cin >> opcao;
        if(opcao == 1){
            cin >> codigo;
            estoque.push_back(codigo);
        }
        else if(opcao == 2){
            if(!estoque.empty()){
                venda.push_back(estoque.front());
                estoque.pop_front();
            }
        }
    }

    cout << "Estoque: " << endl;
    while(!estoque.empty()){
        cout << estoque.back() << " ";
        estoque.pop_back();
    }

    cout << "Venda: " << endl;
    while(!venda.empty()){
        cout << venda.back() << " ";
        venda.pop_back();
    }

    return 0;
}