#include<iostream>
#include<cstring>
using namespace std;

struct dados
{
	char nomes[50];
	int pos;
};


int main()
{
	dados jogador[50];
	int n;
	int contador = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(jogador[i].nomes, 50);
		cin >> jogador[i].pos;
		
	}
	
	for(int i = 0; i < n; i++)
	{
		if(jogador[i].pos >= 18)
		{
			cout << jogador[i].nomes << endl;
			cout << jogador[i].pos << endl;
			contador++;
		}
		else if(contador == 0)
		{
			cout << "num tem" << endl;
			break;
		}
			
	}
	
	
	return 0;
}