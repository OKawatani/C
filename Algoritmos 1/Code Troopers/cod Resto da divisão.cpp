#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	int minimo,maximo,i;
	
	
	
		
	cin >> x;
	cin >> y;
	
	minimo = min(x,y); 
	maximo = max(x,y);
	
	for(i = minimo; i < maximo; i++)
		
	{
		if(i%5 == 2 || i%5 == 3)
		{
			cout << i << endl;
		}
	} 
	
	
	
 
	return 0;
}