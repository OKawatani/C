#include<iostream>
using namespace std;

int hash_aux(int k, int m)
{
	int h;
	
	h = k % m; 
	
	if(h < 0)
	{
		return h += m;
	}
	return h;
}

int hash2(int k, int i, int m, int c1, int c2)
{
	int hash2;
	
	hash2 = (hash_aux(k,m) + c1*i + c2*(i * i)) % m;
	
	return hash2;
}

int main()
{
	int k, m, c1, c2, vet[50];
	
	cin >> k >> m >> c1 >> c2;
	
	for(int i = 0; i < m; i++)
	{
		vet[i] = hash2(k,i,m,c1,c2);
		
		if(vet[i] < 0)
		{
			vet[i] += m;
		}
	}
	for(int i = 0; i < m; i++)
	{
		if(i != m)
		cout << vet[i] << " ";
		else
		cout << vet[i] << endl;	 
	}
	
	return 0;
}