#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int n1;
	
	cout<< "Digite um numero: ";
	cin>> n1;
	
	float a;
	a = sqrt(n1);
	
	cout<< "Resultado: " << setprecision(3) << a;
	return 0;
}