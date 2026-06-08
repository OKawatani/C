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
	} else if(s < 0){
		return -1;
	} else {
		return 0;
	}
}

int main(){
	ponto a, b, c;

    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
	
	float s = area_triangulo(a,b,c);
	
    cout << s;

    return 0;
	
	
}
