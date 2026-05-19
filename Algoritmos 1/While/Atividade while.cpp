#include<iostream>
using namespace std;
int main()
{
int nota;
	
	
	
	while(nota<100 && nota>0)
	{
		
		cin >> nota;
	if(nota >= 60)
	{
		cout << "Passou" << endl;
		
	}
	else 
	{
		cout << "Nao passou" << endl;
	}
	}
	return 0;
}
