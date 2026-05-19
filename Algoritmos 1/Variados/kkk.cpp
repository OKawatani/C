#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float x, m, s, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, pe;
    cin >> x >> m >> s;
    
	p1 = x - m;
	p2 = pow(p1, 2);
	pe = p2 * 2.781;
	p3 = pow(s, 2);
	p4 = 2 * p3;
	p10 = pe / p4;
	
	
	p5 = pow(s,2);
	p6 = 2 * 3.14159 * p5;
	p7 = sqrt(p6);
	p8 = 1 / p7;
	
	p9 = p8 - p10;
	
	cout << fixed << setprecision(4) << p9 << endl;
    
	return 0;
}