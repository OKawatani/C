#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	float x, m, s, op1, op2, fx;

	cin >> x >> m >> s;
	
	op1 = 1 / sqrt(2 * 3.14159 * pow(s,2));
	op2 = (- pow(x - m, 2) / 2 * pow (s,2));
	 
	fx = op1 * exp(op2);
	
	cout << fixed << setprecision(4) << fx << endl;
	return 0;
}