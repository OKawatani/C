#include<iostream>
using namespace std;


int soma( int a, int b)
{
	int som;
	som = a + b;
	
	return som; 
}
int sub( int a, int b)
{
	int su;
	su = a - b;
	
	return su;
}
int mult(int a, int b)
{
	int mul;
	mul = a * b;
	
	return mul;
}
float divi(float a, float b)
{
	float div;
	div = a / b;
	
	return div;
}

int main()
{
	
	int x, y;
	
	cout << "Digite dois numeros: " << endl;
	cin >> x >> y;
	
	cout << "Soma: " << soma(x,y) << endl;
	cout << "Subtracao: " << sub(x,y) << endl;
	cout << "Multiplicacao: " << mult(x,y) << endl;
	cout << "Divisao: " << divi(x,y) << endl;
	return 0;
}