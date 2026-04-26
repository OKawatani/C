#include <iostream>
#include <cmath>
using namespace std;


struct Pedra
{
	int peso;
	int volume;
	int valor;
}

int peso_limite = 400;
int volume_limite = 1000;

void solucao_iterativa(Pedra pedras[], int n)
{
	int escolhido[n], solucao[n];
	
	for(int i = 0; i < n; i++)
	{
		escolhido[i] = 0;
	}
	
	for(int j=0; j < pow(2,n); j++)
	{
		int peso = 0, volume = 0;
		float valor = 0.0, valor_max = 0.0;
	
		for(int i = 0; i < n; i++)
		{
			if(escolhido[i])
			{
				peso += pedras[i].peso;
				volume += pedras[i].volume;
				valor += pedras[i].valor;
			}
		}
	
		if(peso > peso_limite || volume > volume_limite)
			continue;
	
		if(valor > valor_max)
		{
			valor_max = valor;
			solucao = escolhido;
		}
		
		for(int i = 0; i < n; i++)
		{
			//Manipular o vetor escolhido
		}
	}
}

float solucao_recursiva(Pedra pedras[i], int n, int i, int pl, int vl)
{
	if(i >= n)
		return 0;
	
   float v1 = solucao_recursiva(pedras, n, i+1);
   float v2 = 0.0;
   if(pl - pedras[i].peso >= 0 && vl - pedras[i].volume >=0)
   v2 = solucao_recursiva(pedras, n, i+1, pl - pedras[i].peso, vl - pedras[i].volume) + pedras[i].valor;
	
	return max(v1, v2);
}

float solucao_gulosa(Pedra pedras[], int n)
{
	int peso = 0, volume = 0;
	float valor max = 0.0;
	
	for(int i = 0; i < n; i++)
	{
		if(pedras[i].peso + peso < peso_limite && pedras[i].volume + volume < volume_limite)
		{
			valor_max += pedras[i].valor;
			peso += pedras[i].peso;
			volume += pedras[i].volume;
		}
	}
	return valor_max;
}
	


int main()
{
	
	return 0;
}