#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char email1[40], email2[40], senha1[30], senha2[40], senha3[40];
	int cadastro, login1, login2;
	
	
	
	
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
	while(1)
	{
		cout << "Digite seu E-mail: ";
		cin.getline(email2,40);
		
		cout << "Digite sua senha: "; 
		cin.getline(senha3, 40);
		
		login1 = strcmp(email2, email1);
		login2 = strcmp(senha1, senha3);
		
		if(login1 == 0 && login2 == 0)
		{
			cout << "Logeido: " << endl;
		}
		else
		{
			cout << "Burrao mane: " << endl;
		}
		
	}
	
	return 0;
}