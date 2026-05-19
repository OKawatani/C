#include<iostream>
using namespace std;
int main()
{
	
	int usuarios;
	int quant[1005];
	int min = 10;
	int max = 0; 
	
	cout << "Digite a quantidade de usuarios:" << endl;
	cin >> usuarios;
	
	for(int i = 0; i < usuarios; i++)
	{
		cin >> quant[i];
		
		if(quant[i] > max)
		{
			max = quant[i];
		}
		else if(quant[i] < min)
		{
			min = quant[i];
		}
	}
	
	cout << "Menor numero de contatos: " << min << endl;
	cout << "Maior numero de contatos: " << max << endl;
	
	return 0;
}