#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	
	cout << "Digite a quantidade de notas: " << endl;
	cin >> n;
	
	int *v = new int[n]; // Aloca um espaço de memória em v
	
	cout << "Digite as notas: " << endl;
	
	int *p = v; // Faz o ponteiro 'p' apontar no inicio do vetor 'v'
	
	float media = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> *p; // Utiliza o ponteiro 'p' para preencher o vetor 'v'
		
		media += *p;  // *p indica o elemento do vetor 'v' enquanto apenas v indica o endereço armazenado
		
		p++; // Avança as posições do vetor
		

	}
	
	float res = 0;
	
	res = media / n;
	
	cout << fixed << setprecision(2) << res;
	
	delete[] v;
	
	return 0;
}