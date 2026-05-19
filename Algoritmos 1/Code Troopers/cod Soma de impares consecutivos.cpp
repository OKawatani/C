#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, y, soma = 0;
	
	cin >> x >> y;
	
	int minimo, maximo;
	
	minimo = min(x,y);
	maximo = max(x,y);
	
	minimo = minimo + 1;
	maximo = maximo - 1;
	
	for( int i = minimo; i<= maximo; i++ )
	{
		if(i%2 != 0)
		{
			soma = soma + i;
		}
	}
	 cout << soma << endl;
		
		
	return 0;
}