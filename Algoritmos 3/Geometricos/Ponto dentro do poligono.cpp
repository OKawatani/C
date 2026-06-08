#include<iostream>
using namespace std;

struct ponto{
    int x, y;
};

float area_triangulo(ponto a, ponto b, ponto c){
    return (
        a.x * b.y - a.y * b.x +
        a.y * c.x - a.x * c.y +
        b.x * c.y - b.y * c.x
    ) / 2.0;
}

int lado(ponto a, ponto b, ponto p){

    float s = area_triangulo(a,b,p);

    if(s > 0){
        return 1;
    }
    else if(s < 0){
        return -1;
    }

    return 0;
}

int main(){

    ponto coord[100], p;
    int n;

    cin >> n;

    // ler vertices
    for(int i = 0; i < n; i++){
        cin >> coord[i].x >> coord[i].y;
    }

    // ponto a testar
    cin >> p.x >> p.y;

    int referencia = 0;
    bool dentro = true;

    for(int i = 0; i < n; i++){

        ponto a = coord[i];
        ponto b = coord[(i + 1) % n];

        int atual = lado(a, b, p);

        // ignora alinhado
        if(atual != 0){

            if(referencia == 0){
                referencia = atual;
            }

            else if(atual != referencia){
                dentro = false;
                break;
            }
        }
    }

    if(dentro){
        cout << "DENTRO";
    }
    else{
        cout << "!(DENTRO)";
    }

    return 0;
}