#include<iostream>
using namespace std;
int main()
{
	int n, v[10005], x, pos = -1;
	
	cin >> n; // Numero de posicoes do vetor
	
	for(int i = 0; i < n; i++)
	{
		cin >> v[i]; // Preenche o vetor
	}
		cin >> x; // Declara qual numero a ser encontrado 
		
	int baixo = 0; // Determina a posicao inicial
	int alto = n - 1; // Determina a posicao final
	
	while(baixo <= alto) 
	{
		int meio = (baixo + alto) / 2.0; 
		if(x == v[meio])
		{
			pos = meio;
			break;
		}   	
		if(x > v[meio])
		{
			baixo = meio + 1;	
		}
		if(x < v[meio])
		{
			alto = meio - 1;
		}
	} 
	
	if(pos != -1)
	{
		cout << "Encontrado na posicao: " << x << endl;
	}
	else
	{
		cout << "Nao encontrado" << endl;
	}
	
	return 0;
}