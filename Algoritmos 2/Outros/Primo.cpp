#include<iostream>
using namespace std;
int main()
{
	
	int x, y = 0;
	
	cin >> x;
	
	for(int i = 1; i = x; i++)
	{
		if(i % x == 0)
		{
			y++;
		}
		if(y == 3)
		{
		    cout << "Nao e Primo" << endl;
		    break;
		}
		else
		{
		
			cout << "Primo" << endl;
			break;
		}
		
	}
	return 0;
}