#include<iostream>
using namespace std;

float media(int notas[], int nAlunos)
{
	float soma = 0.0, media;
	
	
	for(int i = 0; i < nAlunos; i++)
	{
		soma += notas[i];
	}
	
	media = soma / nAlunos;
	
	return media;
}

int main()
{
	
	int quant;
	int notas[101];
	float res;
	
	cin >> quant;
	
	for(int i = 0; i < quant; i++)
	{
		cin >> notas[i];
	}
	
	res = media(notas,quant);
	
	cout << "Media da turma = " << res << endl;
	
	return 0;
}