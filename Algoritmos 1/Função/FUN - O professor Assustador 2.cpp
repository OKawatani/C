#include<iostream>
#include<iomanip>

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
int nAbaixo(int notas[], int nAlunos, float media)
{
	int res = 0;
    float soma = 0.0;
	
	for(int i = 0; i < nAlunos; i++)
	{
		soma += notas[i];
		if(notas[i] < media)
		{
			res++;
		}
	}
	
	return res;
		
}
int nAcima(int notas[], int nAlunos, float media)
{
	int res = 0;
    float soma = 0.0;
	
	for(int i = 0; i < nAlunos; i++)
	{
		soma += notas[i];
		
		if(notas[i] >= media)
		{
			res++;
		}
		
	}
	return res;
}

int main()
{
	
	int quant,notas[101],acima,abaixo;
	float res;
	
	cin >> quant;
	
	for(int i = 0; i < quant; i++)
	{
		cin >> notas[i];
	}
	
	res = media(notas,quant);
	acima = nAbaixo(notas,quant,res);
	abaixo = nAcima(notas,quant,res);
	
	cout << fixed << setprecision(2) << "Media da turma = " << res << endl;
	cout << "Alunos com nota acima da media: " << acima << endl;
	cout << "Alunos com nota abaixo da media: " << abaixo << endl;
	
	return 0;
}