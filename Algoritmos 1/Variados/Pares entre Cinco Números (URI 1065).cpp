#include<iostream>
using namespace std;
int main()
{
	int numeros, i , impares = 0;
	
	for(i = 1; i <= 6; i++)
	{
		cin >> numeros;
		
		if(numeros%2 != 0)
		{
			impares++;
		}
	}
	cout << impares << " " << "valores impares" << endl;
	
	
	
	return 0;
}