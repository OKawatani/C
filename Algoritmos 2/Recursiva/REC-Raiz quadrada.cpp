#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Raiz_recursiva(float x, float x0, float e)
{
	if(abs(pow(x0,2) - x) <= e)
		return x0;
	
	else
		return Raiz_recursiva(x, ( (x0*x0) + x ) / ( 2*x0 ), e);
}





int main()
{
	float x, x0, e;
	
	cin >> x >> x0 >> e;
	
	float res = Raiz_recursiva(x,x0,e);
	
	cout << fixed << setprecision(4) << endl;
	cout << res << endl;
	return 0;
}