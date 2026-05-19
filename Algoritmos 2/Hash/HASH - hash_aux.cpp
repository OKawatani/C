#include<iostream>
using namespace std;

int hash_aux(int k, int m)
{
	int h;
	
	h = k % m;
	
	return h;
}


int main()
{
	int k, m, h;
	
	while(true)
	{
		cin >> k >> m;
		
		if(k == 0 && m == 0)
		{
			break;
		}
	}

	h = hash_aux(k, m);
	
	if(h < 0)
	{
		cout << h + m;
	}
	
		cout << h;
	
	
	return 0;
}