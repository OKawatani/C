#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	float c, i, m, porcentagem , percent, expoente, lucro;
	int t;
	
	cin >> c >> i >> t;
	
	 porcentagem = i / 100;
	 percent = (1 + porcentagem);
	 expoente = pow(percent, t);
	 m = c * expoente;
	 lucro = m - c;
	 
	 cout <<"LUCRO = " << fixed << setprecision(2) << lucro << endl;
	 
	 
	 
	return 0;
}