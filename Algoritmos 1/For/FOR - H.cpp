#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n , i, resultado;
	double h;
	
	
	cin >> n;
	
	for(i = 1; i <= n; i++)
	{
	 h = h + 1.0 / i;
	 
	}
	cout << fixed << setprecision(4) << endl;
	cout << h << endl;
	
	
	
	return 0;
}