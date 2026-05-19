#include<iostream>
using namespace std;

float calc_delta(float a, float b, float c)
{
	int res;
	
	res = (b*b) - 4 * a * c;
	
	return res;
}
int main()
{
	float a,b,c;
	int delta;
	
	cin >> a >> b >> c;
	
	delta = calc_delta(a,b,c);
	
	cout << "delta = " << delta << endl;
	return 0;
}