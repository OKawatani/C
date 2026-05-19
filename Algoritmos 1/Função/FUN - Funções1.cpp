#include<iostream>
using namespace std;

int cal_a(int x)
{
	int res;
	
	res = (2 * (x*x)) + 3 * x - 1;
	
	return res;
} 
int cal_b(int x)
{
	int res;
	
	res = x*x*x;
	
	return res;
}
int cal_c(int y)
{
	int res;
	
	res = y*y*y;
	
	return res;
}

int main()
{
    
	int a,b,c,x,y;
    
	cin >> x >> y;
	
    
	a = cal_a(x); 
    
	cout << "a = " << a << endl;
    
	b = cal_b(x);
    
	cout << "b = " << b << endl;
    
	c = cal_c(y);
    
	cout << "c = " << c << endl;
    
	return 0;
}