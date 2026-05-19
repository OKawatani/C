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
	dados jedis[50];

	int n,base = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		
		
		cout <<"Digite o nome" << endl;
		cin.ignore();
		cin.getline(jedis[i].nomes,50);
		
		
		
		cout <<"Digite a posicao" << endl;
		cin >> jedis[i].pos;
		

	}
	
	char nomes[50];
	
	
	cout << "Digite o nome" << endl;
	cin.ignore();
	cin.getline(nomes,50);
	
	for(int i = 0; i < n; i++)
	{
		if(strcmp(jedis[i].nomes,nomes) == 0) 
		{
			base = jedis[i].pos;
		}
		
	}
	
	if(base != 0)
	{
		cout << "Este cavaleiro esta na base " << base << endl;
	}
	else
	{
		cout << "Este cavaleiro nao esta cadastrado" << endl; 
	}
	return 0;
}