#include<iostream>
using namespace std;

int exp_rec(int a, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
		return a * exp_rec(a, n-1);
	}
}


int main()
{
	int a, n, res;
	
	cin >> a >> n;
	
    res = exp_rec(a,n);
	
	cout << res << endl; 
	return 0;
}