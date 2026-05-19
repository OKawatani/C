#include<iostream>
using namespace std;

struct dados
{
	int id;
	float IM;
	float FA;
	float GA;
	
};


int main()
{
	dados trooper[100];
	int n = 0;
	float media, maior = 0.0;
	int id;
	
	
	
	
	for(int i = 0; i < 100; i++)
	{
		n++;
		
		cin >> trooper[i].id;
		
		if(trooper[i].id == 0)
		{
			break;
		}
		
		cin >> trooper[i].IM;
		cin >> trooper[i].FA;
			
	}
	for(int i = 0; i < n; i++)
	{
		media = (trooper[i].IM + trooper[i].FA) / 2.0;
		
		if(media > maior)
		{
			maior = media;
			id = trooper[i].id;
		}	
	}
	cout << "Storm trooper escolhido: " << id << endl;
	cout << "GA = " << maior << endl;
	
	return 0;
}