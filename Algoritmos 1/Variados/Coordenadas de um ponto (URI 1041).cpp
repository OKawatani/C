#include<iostream>
using namespace std;
int main()
{
	float x,y;
	
	cin >> x >> y;
	
	if(x > 0 && y > 0)
	{
		cout << "Quadrante 1" << endl;
	}
	else if(x < 0 && y >0)
	{
		cout << "Quadrante 2" << endl;
	}
	else if(x < 0 && y < 0)
	{
		cout << "Quadrante 3" << endl;
	}
	else if(x >0 && y < 0)
	{
        cout << "Quadrante 4" << endl;	   
	}
	else 
	{
		cout << "Ponto de origem" << endl;
	}
	return 0;
}