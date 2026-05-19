#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

struct dados
{
	char nomes[50];
	float pontos;
	
};

int main()
{
	dados jedis[50];
	
	int n;
	int total = 0, maior = 0;
	float media;
	
	cin >> n;
	
	
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		
		cin.getline(jedis[i].nomes,50);
		
		cin >> jedis[i].pontos;
		
		if(jedis[i].pontos > maior)
		{
			maior = jedis[i].pontos;
		}
		
		total = jedis[i].pontos + total;		
	}
	
	media = total / n;
	
	for(int i = 0; i < n; i++)
	{
		if(jedis[i].pontos == maior )
		{
			cout << "Padawan com mais pontos: " << jedis[i].nomes << endl;
			cout << "Pontos: " << jedis[i].pontos << endl;
			cout << fixed << setprecision(2) << "Media da turma: " << media << endl;
		}
	}
	
	
	return 0;
}