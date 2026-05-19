#include<iostream>
#include<iomanip>

using namespace std;

int vetorIMP(int vetor[])
{
	int quantIMP = 0;
	
		
		for(int i = 0; i < 10; i++)
		{
			if(vetor[i] % 2 != 0)
			{
				quantIMP++;
			}	
		}
	
	
	return quantIMP;
}


int main()
{
	
	int vetor[11];
	
	for(int i = 0; i < 10; i++)
	{
		cin >> vetor[i];
	}
	
	int quantimp = vetorIMP(vetor);
	
	cout << quantimp << endl;
	
	return 0;
}