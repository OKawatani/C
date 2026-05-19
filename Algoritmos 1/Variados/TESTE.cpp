#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int num;
	char email1[40], email2[40], senha1[30], senha2[40], senha3[40];
	int cadastro, login1, login2;
	
	do
	{
		cout << "Portal Flytech" << endl;
		cout << endl;
		cout << "-1 Realizar cadastro de aluno: " << endl;
		cout << endl;
		cout << "-2 Realizar cadastro de professor: " << endl;
		cout << endl;
		cout << "-3 Sair: " << endl;
		cin >> num;
		
		if(num == 1)
		{
			cin.ignore();
			
			cout << "Digite um e-mail: ";
			cin.getline(email1,40);
			
			
	
			cout << "Digite uma senha: ";
			cin.getline(senha1,30);
			
			
	   	   	
			cout << "Confirme a senha: ";
			cin.getline(senha2,30);
			
	
			cadastro = strcmp(senha1, senha2);
	
			while(cadastro != 0)
			{
				cout << "Senha incorreta: ";
				cin.getline(senha2, 30);
		
				cadastro = strcmp(senha1, senha2);
	
			}
			cout << "Cadaratado" << endl;
		}
			
		
	}while(num != 3);
	
	return 0;
}
