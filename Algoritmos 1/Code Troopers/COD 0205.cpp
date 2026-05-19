#include<iostream>
using namespace std;
int main()
{
	long long int a,b,soma;
	
	cin >> a >> b;
	
	soma = (b - a + 1)*(a + b) / 2.0;
 	
 	cout << soma << endl;
	return 0;
}