#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int l, c, r1, r2;
	
	float distancia;
	
	cin >> l >> c >> r1 >> r2;
	
	distancia = sqrt(pow(l - r1 - r2, 2 ) + pow(c - r1 - r2, 2));
	
	if(distancia >= r1 + r2)
	{
		cout << "S" << endl;
	}
 	else
	 {
	 	cout << "N" << endl;
	 }
	return 0;
}