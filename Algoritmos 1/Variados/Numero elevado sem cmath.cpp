#include<iostream>
using namespace std;
int main()
{
	int x, y, z = 1;
	int i; 
	cin >> x >> y;
	
	if(y !=0)
	{
		for( i = 0; i < y; i++)
			z *= x; // z = z*x;
		cout << x << " elevado a " << y << " = " << z << endl; 
	} 
	return 0;
}