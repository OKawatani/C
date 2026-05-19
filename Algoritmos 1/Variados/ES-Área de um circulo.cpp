#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, area;
	cin>> a;
	
	area = a * a * 3.14159;
	
	cout<<"AREA = " << fixed << setprecision(3) << area << endl;
	
	return 0;
}