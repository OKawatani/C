#include<iostream>
#include<cstring>
using namespace std;

struct dados
{
	char nomes[50];
	char curso[50];
	int matricula;
};


int main()
{
	dados aluno[50];
	int n;
    char nome[50];
    bool achou = false;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin.ignore();
		
		cin.getline(aluno[i].nomes,50);
		
		cin.getline(aluno[i].curso,50);
		
		cin >> aluno[i].matricula;
	}
	
	cin.ignore();
	cin.getline(nome,50);
	
	for(int i = 0; i < n; i++)
	{
	    
	    
	    
		if(strcmp(aluno[i].nomes,nome) == 0)
		{
			cout << aluno[i].nomes << endl;
			cout << aluno[i].curso << endl;
			cout << aluno[i].matricula << endl;
			achou = true;
			break;
		
		}
		
		
	}
	
	if (achou == false){
	        cout << "Aluno nao localizado" << endl;
	    }
	return 0;
}