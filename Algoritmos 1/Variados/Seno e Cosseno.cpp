#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int grau;
	
	cout<< "Digite um angulo: ";
	cin>> grau;
	
	float a;
	a = (grau * 3.14159)/180;
	
	float b;
	b = sin(a);
	
	float c; 
	c = cos(a);
	
	cout<< "Resultados: "<< "Seno:" << a << " Cosseno:" << b;
	
	
	return 0;
}