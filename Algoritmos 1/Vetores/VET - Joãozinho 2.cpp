#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x[100],y[100],quant;
	char op[5];
	
	cin >> quant;
	
	for(int i = 0; i < quant; i++)
	{
		cin >> x[i];	
	}
	
	for(int i = 0; i < quant; i++)
	{
		cin >> y[i];
	}
	
	for(int i = 0; i < 4; i++)
	{
		cin >> op[i];
	}
	
	for(int i = 0; i < quant; i++)
	{
		
		if(op[i] == '+')
		{
			cout << x[i] << " + " <<  y[i] << " = " << x[i] + y[i] << endl;
		}
		if(op[i] == '-')
		{
			cout << x[i] << " - " <<  y[i] << " = " << x[i] - y[i] << endl;
		}
		if(op[i] == '*')
		{
			cout << x[i] << " * " <<  y[i] << " = " << x[i] * y[i] << endl;
		}
		if(op[i] == '/')
		{
			cout << x[i] << " / " <<  y[i] << " = " << fixed << setprecision(2) << x[i] / y[i] << endl;
		}
	}
	
	return 0;
}