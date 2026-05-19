#include<iostream>
using namespace std;




int main()
{
	int n;
	
	// Leitura do tamanho do vetor
	cout << "Informe o tamanho do vetor: " << endl;
	cin >> n;
	
	//Alocação dinâmica do vetor
	int *v = new int[n];
	
	cout << "Digite os elementos: ";
	
	int *p = v; // 'p' aponta para o início do vetor 'v', por ser um vetor não precisa do &
	for(int i = 0; i < n; i++)
	{
		
		cin >> *p; // Use o ponteiro 'p' para inserir o elemento no vetor
		p++; // Move o ponteiro 'p' para a próxima posição
	}
	
	p = v; // redefine o ponterio 'p' para o incio do vetor 'v'
	
	for(int i = 0; i < n; i++)
	{
		cout << *p << " ";
		p++;
	}
	
	delete []v;
	
	return 0;
}