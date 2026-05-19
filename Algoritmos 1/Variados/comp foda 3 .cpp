#include<iostream>
using namespace std;
int main()
{
	int valor, n100, n50;
	
	cin >> valor; 
	
	if(valor >= 100)
	{
		n100 = valor/100;
	}
	if(n100 > 0)
	{
		n50 = n100/50;
	}
	cout << n100 << n50 << endl;
	return 0;
}