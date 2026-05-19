#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

float Raiz_Rec(float x, float xz, float e)
{
	if(abs(pow(xz,2) - x) <= e)
	{
		return xz;
	}
	else
	{
		return Raiz_Rec(x, ((xz * xz) + x) / (2*xz), e);
	}
}

int main()
{
	float x, xz, e, res;
	
	cin >> x >> xz >> e;
	
	res = Raiz_Rec(x, xz, e);
	
	cout << fixed << setprecision(4);
	cout << res << endl;
	return 0;
}