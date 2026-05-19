#include<iostream>
using namespace std;
int main()
{
	int n,i,idades,soma,media; 
	 
	cin >> n;
	soma = 0;
	for(i=1; i<=n; i++)
	{
		cin >> idades;
		soma = soma + idades; 
	}
    media = soma/n;

    cout << "Resultado: " << media << endl;

	return 0;
}