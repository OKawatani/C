#include<iostream>
using namespace std;
int main()
{
	int senha;
	
	cin >> senha;
	
	while(senha != 2002)
	{
		cout << "SENHA INVALIDA" << endl;
		
			
		cin >> senha;
	}
	
		cout << "ACESSO PERMITIDO" << endl;
	
	
	return 0;
}