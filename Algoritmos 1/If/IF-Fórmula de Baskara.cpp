#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, c, delta, raiz1, raiz2;
	
	cin >> a >> b >> c;
	cout << fixed << setprecision(5) << endl;
	
	delta = b*b - 4 * a * c;
	
	if(delta > 0 && a >= 0 && b >= 0 && c >= 0)
	{
		raiz1 = (-(b) + sqrt(delta)) / (2 * a);
		raiz2 = (-(b) - sqrt(delta)) / (2 * a);
		
		cout << "R1: " << raiz1 << endl;
		cout << "R2: " << raiz2 << endl; 
	}
	else
	{
		cout << "Impossilvel calcular" << endl;
	}
	return 0;
}