#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	
	float triangulo;
	triangulo = a * c / 2;
	
	float circulo;
	circulo = c * c * 3.14159;
	
	float trapezio;
	trapezio = a * b / c;
	
	float quadrado;
	quadrado = b * b;
	
	float retangulo;
	retangulo = a * b;
    
    cout<< "Triangulo: "<< fixed << setprecision(3) << triangulo << endl;
    cout<< "Circulo: "<< fixed << setprecision(3) << circulo << endl;
    cout<< "Trapezio: "<< fixed << setprecision(3) << trapezio << endl;
    cout<< "Quadrado: "<< fixed << setprecision(3) << quadrado << endl;
	cout<< "Retangulo: "<< fixed << setprecision(3) << retangulo << endl; 
	return 0;
}