
#include<iostream>
#include<cstring>

using namespace std;

struct dados
{
	char nome[50];
	int idade;
	float peso;
};

int main()
{
	dados atletas[3];

	

	for(int i = 0; i < 3; i++)
	{
		cout << "Digite o nome: " << endl;
		cin.getline(atletas[i].nome, 50);
		
		cout << "Digite a idade: " << endl;
		cin >> atletas[i].idade;
		
		cout << "Digite o peso: " << endl;
		cin >> atletas[i]. peso;
		
		cin.ignore();
	}
	
	char nomes[50];
	cout << "Digite o nome que deseja buscar: " << endl;
	cin.getline(nomes,50);
	
	for(int i = 0; i < 3; i++)
	{
	if(strcmp(nomes, atletas[i].nome) == 0)
		{
			cout << "Peso do Atleta " << atletas[i].nome << " = " <<  atletas[i].peso << endl;
		}
			
	}
	
	

	return 0;
	}
	
