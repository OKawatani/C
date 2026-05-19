#include<iostream>
using namespace std;
int main()
{
	float notas, media = 0, soma = 0;
	
	cin >> notas;
	
	while(notas <= 10 && notas > 0)
	{	cin >> notas;
		soma = soma + notas;
		media = soma / 2;
		
		cout << "soma = " << soma << endl;
	}
	cout << "Nota Invalida" << endl;
	return 0;
}