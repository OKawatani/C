#include<iostream>
using namespace std;

int main()
{
	int n,total = 0;
	
	cout << "Digite o tamanho do vetor: " << endl;
	cin >> n;
	
	int *v = new int[n];
	
	cout << "Digite os elementos do vetor: " << endl;
	
	int *p = v;
	
	for(int i = 0; i < n; i++)
	{
		cin >> *p;
		
		if(*p % 2 == 0 && *p >0)
			total++;
		
		*p++;
	}
	
	cout << "Quantidade de elementos pares e positivos no vetor: " << total << endl;
	
	delete[] v;
	return 0;
}