#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore(); // limpa o \n do buffer

    string nomes[n];

    for(int i = 0; i < n; i++){
        getline(cin, nomes[i]);
    }

    // lista de adjacência: quem cada usuário segue
    list<int> adj[n];

    int x;

    // leitura das relações
    for(int i = 0; i < n; i++){
        while(true){
            cin >> x;

            if(x == -1) break;

            adj[i].push_back(x);
        }
    }

    int alvo;
    cin >> alvo;

    // encontrar seguidores
    for(int i = 0; i < n; i++){

        for(list<int>::iterator it = adj[i].begin(); it != adj[i].end(); it++){

            if(*it == alvo){
                cout << nomes[i] << endl;
            }
        }
    }

    return 0;
}