#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double m[12][12];
	char o[2];
	double s = 0.0;
	int x1 = 11;
	int x2 = 1;
	int c = 0;
	
	cin >> o;
	
	for(int i = 0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			cin >> m[i][j];
		}
	}
	
	for(int i=0; i<5; i++)
	{
		for(int j = x2; j < x1; j++)
		{
			s += m[i][j];
			c += 1;
		}
		x1 -= 1;
		x2 += 1;
	}
	if(o[0] == 'S')
	{
		cout << fixed << setprecision(1) << s << endl;
	}
	else
	{
	 cout << fixed << setprecision(1) << s/c << endl;
	}
	
	return 0;
	
}