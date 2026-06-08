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

    ponto a,b,c,d;
    
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cin >> d.x >> d.y;

     int l1 = lado(a,b,c);
     int l2 = lado(a,b,d);
     int l3 = lado(c,d,a);
     int l4 = lado(c,d,b);

     if(l1 != l2 && l3 != l4){
        cout << "Sim" << endl;
     }
     else{
        cout << "Nao" << endl;
     }

    return 0;
}