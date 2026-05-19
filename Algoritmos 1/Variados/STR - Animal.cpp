#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	
	char osso[55],fome[55],tipo[55];
	
	cin.getline(osso,55);
	cin.getline(tipo,55);
	cin.getline(fome,55);
	
	if(strcmp(osso,"vertebrado") == 0)
	{
		if(strcmp(tipo,"ave") == 0)
		{
			if(strcmp(fome,"carnivoro") == 0)
			{
				cout << "Aguia" << endl;
			}
			else 
			{
				cout << "Pomba" << endl;
			}
		}
		else if(strcmp(tipo,"mamifero") == 0)
		{
			if(strcmp(fome,"onivoro") == 0)
			{
				cout << "homem" << endl;
			}
			else 
			{
				cout << "vaca" << endl;
			}
		}
			
	}
	
	if(strcmp(osso,"invertebrado") == 0)
	{
		if(strcmp(tipo,"inseto") == 0)
		{
			if(strcmp(fome,"hematofago") == 0)
			{
				cout << "pulga" << endl;
			}
			else
			{
				cout << "lagarta" << endl;
			}
		}
		else if (strcmp(tipo,"anelideo") == 0)
		{
			if(strcmp(fome,"hematofago") == 0)
			{
				cout << "sanguesuga" << endl;
			}
			else
			{
				cout << "minhoca" << endl;
			}
		}
	}
	
	return 0;
}