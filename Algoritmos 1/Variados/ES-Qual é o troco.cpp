#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float dinheiro, total, troco;
	 
	cin>> dinheiro >> total;

	
	troco = dinheiro - total;
	
	cout<< "TROCO = " << fixed << setprecision(2) << troco << endl;
	return 0;
}