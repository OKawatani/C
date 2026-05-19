#include<iostream>
using namespace std;
int main()
{
	int x,y[1000],maior = 0,menor = 1000; 
	
	cin >> x;
	
	for(int i = 0; i < x; i++)
	{
		cin >> y[i];
		
		if(y[i] > maior)
		{
			maior = y[i];
		}
		else if(y[i] < menor)
		{
			menor = y[i];
		}
	}
	
	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;
	
	return 0;
}