#include<iostream>
using namespace std;
int main()
{
	
	int n, r;

	
	while(cin >> n >> r)// cin dentro do while rodará infinitamente EOF 
	{
		bool ret[n]; // bool = Vetor que armazena true ou false 
		int v[n];
		
		for (int i = 0; i < n; i++)// For para definir todos os valores
 	 	   	   	   	   	   	   	   // de ret como falso
		{
			ret[i] = false;
		}
		
		for (int i = 0; i < r; i++)// For para definir a segunda linha
								   // de plaquetas que retornaram
		{
			cin >> v[i];
		}
		
		for (int i = 0; i < n; i++) 
		{
			
			if (i == v[i]) 
			{
				ret[i] = true;
				cout << ret[i] << endl; 
			}
			
		}
		
		
	}
	
	return 0;
}