#include<iostream>
using namespace std;

int hash_aux(int k, int m)
{
	int h;
	
	h = k % m;
	
	if(h < 0) {
		return h + m;
	}
	
	
	
	return h;
}

int hash1(int k, int m, int i)
{
	int hlinha;
	
	hlinha = (hash_aux(k,m) + i) % m;
	
	return hlinha;
	
}

int main()
{
	int k, m, vet[50];
	
	cin >> k >> m;
	
	for(int i = 0; i < m; i++)
	{
		vet[i] = hash1(k,m,i);
	}
	
	for(int i = 0; i < m; i++)
	{
		cout << vet[i] << " ";
	}
	return 0;
}