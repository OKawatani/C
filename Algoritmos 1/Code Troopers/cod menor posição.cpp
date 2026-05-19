#include<iostream>
using namespace std;
int main()
{
	int n,i,valores,menor,posicao;
	int vetor[1005]; // 1 < n < 1000.
	
	
	cin >> n; // Quantidade de valores  
	vetor[0] = valores; // A primeira posição do vetor 
	menor = vetor[0]; // O menor número começa na primeira posição
	posicao = 0;
	
	for(i = 0; i < n; i++ )
	{
		cin >> valores;
		vetor[i] = valores;
		 
	  	if(vetor[i] < menor)
		  {
		  	menor = vetor[i];
		  	posicao = i;
		  }
		
	}
	cout << "Menor Valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
	return 0;
}