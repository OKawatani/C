#include<iostream>
using namespace std;
int main()
{
	int valor, contador = 0, i;
	
	for(i=1; i<=6; i++)
	{
		cin >> valor;
		if(valor > 0)
		{
			contador++;
		}
		
	}
	cout << contador << " VALORES POSITIVOS" << endl;
	return 0;
}