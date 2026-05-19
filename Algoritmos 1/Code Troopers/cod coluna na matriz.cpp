#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a = 0.0, M[12][12];
    char t[2];
    int c,x,y;
    cin >> c;
    cin >> t;
    
	for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
        {
         cin >> M[x][y];
        if(y == c)
            a += M[x][y];
        }
    }
    if(t[0]=='S')
	{
		cout << fixed << setprecision(1) << a << endl;
	}
    else if(t[0] == 'M')
    {
            a = a/12.0;
        cout << fixed << setprecision(1) << a << endl;
    } 
    return 0;
}