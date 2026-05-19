#include<iostream>
using namespace std;
int main()
{
    long long int x = 0, y = 1, z, r, t, quant;
    
    
		
			
		cin >> t;
	
			if(t == 1)
			{
			r = 0;
			}
			else
	 	    { 	
				for(int i = 0; i <= t - 2 ; i++)
				{
				z = x + y;
				x = y;
				y = z;
				r = z;
	
				}
			}
	       cout << "Fib(" << t << ")" << " = " << r << endl;
		
	
	
	
	
	
	return 0;
}