#include<iostream>
using namespace std;

int main(){

    int cidades, conexoes;

    cin >> cidades >> conexoes;

    int matriz[cidades][cidades];

    for(int i = 0; i < cidades; i++){
        for(int j = 0; j < cidades; j++){
            matriz[i][j] = 0;
        }
    }

    int a, b;

    for(int i = 0; i < conexoes; i++){
        
        cin >> a >> b;

        a--;
        b--;

        matriz[a][b] = 1;
        matriz[b][a] = 1;

    }

    for(int i = 0; i < cidades; i++){
        for(int j = 0; j < cidades; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}