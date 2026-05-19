
#include<iostream>
using namespace std;

int hash1(int k, int m)
{
	int h1;
	h1 = k % m;
	
	if(h1 < 0)
	{
		return h1 + m;
	}
	return h1;
}
int hash2(int k, int m)
{
	int h2;
	
	h2 = 1 + (k % (m - 1));
	
	if(h2 < 0)
	{
		return h2 + m;
	}
	
	return h2;
}
int dhash(int k, int m, int i)
{
	int dhash;
	
	dhash = (hash1(k,m) + i*hash2(k,m)) % m;
	
	return dhash;
}

int main()
{
	int k, m, vet[30];
	
	cin >> k >> m;
	
	for(int i = 0; i < m; i++)
	{
		vet[i] = dhash(k,m,i);
		
	}
	for(int i = 0; i < m; i++)
	{
		if(i < m-1)
			cout << vet[i] << " ";
		else
			cout << vet[i] << endl;	
	}
	return 0;
}



