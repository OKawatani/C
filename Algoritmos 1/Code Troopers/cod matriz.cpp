#include<iostream>
using namespace std;
int main()
{
	 int m[15][15];
	
	
	
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			cin >> m[i][j];
		}
	}
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}