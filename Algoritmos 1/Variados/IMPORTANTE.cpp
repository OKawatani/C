#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char email[40], senha1[30], senha2[40];
	int resultado;
	
	
	cout << "Digite um e-mail: ";
	cin.getline(email,40);
	
	cout << "Digite uma senha: ";
	cin.getline(senha1,30);
	
	cout << "Confirme a senha: ";
	cin.getline(senha2,30);
	
	resultado = strcmp(senha1, senha2);
	
	while(resultado != 0)
	{
		cout << "Senha incorreta: ";
		cin.getline(senha2, 30);
		
		resultado = strcmp(senha1, senha2);
	
	}
	cout << "Cadaratado" << endl;
	return 0;
}