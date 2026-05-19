#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ddd[50];
	
	cin.getline(ddd,50);
	
	if(strcmp(ddd,"Brasilia") == 0)
	{
		cout << "61" << endl;
	}
	else if(strcmp(ddd,"Salvador") == 0)
	{
		cout << "71" << endl;
	}
	else if(strcmp(ddd,"Sao Paulo") == 0)
	{
		cout << "11" << endl;
	}
	else if(strcmp(ddd,"Rio de Janeiro") == 0)
	{
		cout << "21" << endl;
	}
	else if (strcmp(ddd,"Juiz de fora") == 0)
	{
		cout << "32" << endl;
	}
	else if(strcmp(ddd,"Campinas") == 0)
	{
		cout << "19" << endl;
	}
	else if (strcmp(ddd,"Vitoria") == 0)
	{
		cout << "27" << endl;
	}
	else if(strcmp(ddd,"Belo Horizonte") == 0)
	{
		cout << "31" << endl;
	}
	else if(strcmp(ddd,"Santa Rita do Sapucai") == 0)
	{
		cout << "35" << endl;
	}
	else
	{
		cout << "DDD nao encontrado" << endl;
	}
	
	return 0;
}