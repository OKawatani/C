#include<iostream>
#include<utility>
using namespace std;






int particionar(int a[], int l, int r)
{
	int x, i, j;
	
	x = a[r];
	i = l - 1;
	
	for(j = l; j <= r-1; j++)
	{
		if(a[j] <= x)
		{
			i++;
			swap(a[i], a[j]);
		}	
	}
	
	swap(a[i+1], a[r]);
	
	return i+1;
	 
}



void QUICKSORT(int a[], int l, int r)
{
	int p;
	
	if(l < r)
	{
		p = particionar(a,l,r);
		QUICKSORT(a, l, p-1);
		QUICKSORT(a, p+1, r);
	}
	
}



int main()
{
	int v[50],v1[50],tamanho = 0, l, r;
	
	for(int i = 0; i < 100; i++)
	{
		cin >> v1[i];
		
		l = v1[0];

		if(v1[i] != -1)
		{
			v[i] = v1[i];
			tamanho++;
		}
		else
		{
			r = v1[i-1];
			break;
		}
		
	}
	
	QUICKSORT(v, 0, tamanho-1);
	
	for(int i = 0; i < tamanho; i++)
	{
		cout << v[i];
	
	}
		
	
	
	return 0;
}