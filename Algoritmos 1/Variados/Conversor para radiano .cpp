#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int grau;
	
	cout<< "Digite um angulo: ";
	cin>> grau;
	
	float a;
	a = (grau * 3.14159)/180;
	
	cout<< "Seu angulo em radianos e: "<< a;
	return 0;
}