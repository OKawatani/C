#include<iostream>
using namespace std;
int main()
{
	int i, n, par = 0, impar = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++ )
	{
        if(i%2 == 0 && i > 0)
		{
			 
			cout << "PAR POSITIVO : " << i << endl;
		}
	    else   
		{
			
			cout << "IMPAR POSITIVO: " << i << endl;
		}
	
	}
	
	return 0;
}