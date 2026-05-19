#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float nota1, nota2, media, i;
	
	cout << fixed << setprecision(2);
	do
	{
		
	
	do
	{
		cin >> nota1;
		if (nota1 < 0 || nota1 > 10)
		{
			cout << "nota invalida" << endl;
		}

	}while(nota1 < 0 || nota1 > 10);
		

	do
	{
		cin >> nota2;
		if(nota2 < 0 || nota2 > 10)
		{
			cout << "nota invalida" << endl;
		}
		
		
	}while(nota2 < 0 || nota2 > 10);
	
	media = (nota1 + nota2) / 2.0;
	
	cout << "media = " << media << endl;
	
	do
	{
	cout << "novo calculo (1-sim 2-nao)" << endl;
	cin >> i;
	}while(i != 2 && i != 1);
	
	}while(i == 1);
	
	
	
	 
	
	

	
	
	return 0;
}