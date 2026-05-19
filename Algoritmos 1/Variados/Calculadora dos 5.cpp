#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	
	cout<< "Digite dois numeros: ";
	cin>> n1 >> n2;
	
	int a;
	a = n1 + n2;
 
	int b;
	b = n1 - n2; 
	
	int c;
	c = n1 * n2; 
	
	int d;
	d = n1 / n2;
	
	int e;
	e = n1 % n2; 
	cout<< "Resultado: " << "Adicao:" << a << " Subtracao:" << b << " Multiplicacao:" << c << " Divisao:" << d << " Resto:" << e;
	return 0;
}