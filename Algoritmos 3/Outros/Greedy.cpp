#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;


struct dados 
{
	char nome[20];
	double volume;
	int peso;
	int preco;
};


int main()
{
	dados minerios[20];
	
	
	int peso = 0, pesomax = 400, valor = 0; 
	float vol = 0.000, volmax = 1.000;
	
	
	//Diamante
	strcpy(minerios[0].nome, "Diamante");
	minerios[0].volume = 0.455;
	minerios[0].peso = 263;
	minerios[0].preco = 500;
	
	//Esmeralda
	strcpy(minerios[1].nome, "Esmeralda");
	minerios[1].volume = 0.521;
	minerios[1].peso = 127;
	minerios[1].preco = 410;
	
	//Topazio
	strcpy(minerios[2].nome, "Topazio");
	minerios[2].volume = 0.857;
	minerios[2].peso = 254;
	minerios[2].preco = 320;
	
	//Rubi
	strcpy(minerios[3].nome, "Rubi");
	minerios[3].volume = 0.065;
	minerios[3].peso = 134;
	minerios[3].preco = 315;
	
	//Jade
	strcpy(minerios[4].nome, "Jade");
	minerios[4].volume = 0.012;
	minerios[4].peso = 111;
	minerios[4].preco = 280;
	
	for(int i = 0; i < 5; i++)
	{
		if (peso + minerios[i].peso > pesomax || vol + minerios[i].volume > volmax)
			break;	
			
			if(peso <= pesomax && vol <= volmax)
			{
				
				peso += minerios[i].peso;
				vol += minerios[i].volume;
				valor += minerios[i].preco;
			}
			
	}
	
	cout << valor << endl;
	
	
	
	
	
	
	
	
}