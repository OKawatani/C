#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int n;
	
	cout << "Digite o tamanho do vetor: " << endl;
	
	cin >> n;
	
	int *v = new int[n];
	
	cout << "Digite o numero dos vetores: " << endl;
	
	int *p = v;
	
	int maior = -100;
	
	for(int i = 0; i < n; i++)
	{
		cin >> *p;
		
		if(*p >= maior)
			maior = *p;
		
		p++;
	}
	
	cout << "Maior numero: " << maior << endl;
	
	delete[ ] v;
	
	return 0;
}