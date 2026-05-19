#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int n;
	
	cout << "Digite a quantidade de numeros: " << endl;
	
	cin >> n;
	
	int *v = new int[n];
	
	cout << "Digite o numeros: " << endl;
	
	int *p = v;
	
	int maior = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> *p;
		
		if(*p % 2 == 0 && *p >= 0)
			maior++;
		
		p++;
	}
	
	cout << "Quantidade de numeros de pares e positivos: " << maior << endl;
	
	delete[ ] v;
	
	return 0;
}