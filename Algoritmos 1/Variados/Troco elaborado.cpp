#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int valor,n100 = 0,n50 = 0,n20 = 0,n10 = 0,n5 = 0,n2 = 0,n1 = 0;
	int n100r = 0,n50r = 0,n20r = 0,n10r = 0,n5r = 0,n2r = 0,n1r = 0;
	// nx = quantidade de notas. 
	//nxr = restante do valor.
	
	cin >> valor; 
	
	if(valor > 0)
	{
		n100r = valor%100; // Divide-se o valor total para achar o resto que sera usado posteriormente. 
		n100 = valor/100; // Divide o valor total pelo valor da nota para achar a quantidade de notas.
		
	}
	if(n100r > 0) 
	{
		 n50r = n100r%50; // Divide-se o resultado do resto anterior para achar o resto seguinte. 
		 n50 = n100r/50; // Divide o valor do resto anterior para achar a quantidade de notas.
	}
	if(n50r > 0)
	{
		n20r = n50r%20;
		n20 = n50r/20;
	}
	if(n20r > 0)
	{
		n10r = n20r%10;
		n10 = n20r/10;
	}
	if(n10r > 0)
	{
		n5r = n10r%5;
		n5 = n10r/5;
	}
	if(n5r > 0)
	{
		n2r = n5r%2;
		n2 = n5r/2;
	}
	if(n2r > 0)
	{
		n1r = n2r%1;
		n1 = n2r/1;
	}
	
	cout << n100<< " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00"  << endl;
	cout << n20 << " nota(s) de R$ 20,00"  << endl;
	cout << n10 << " nota(s) de R$ 10,00"  << endl;
	cout << n5  << " nota(s) de R$ 5,00"   << endl;
	cout << n2  << " nota(s) de R$ 2,00"   <<endl;
	cout << n1  << " nota(s) de R$ 1,00"   <<endl;
	
	
}