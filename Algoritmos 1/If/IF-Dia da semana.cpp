#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
float g, f, delta, frac; 
int d, m, a, ds, n;

cin >> d >> m >> a;

if(m <= 2)
{
    g = a - 1; 
    f = m + 13;

}
else
{
	g = a;
	f = m + 1;
}

 n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

if(n < 36523)
{
	delta = 2;
}
else if(n < 73048)
{
	delta = 1;

}
else
{
    delta = 0;
	
}
frac = (n/7.0) - (n/7);

ds = round(frac * 7) + delta + 1;

switch(ds)
{
	case 1:
	    cout <<"Domingo" << endl;
	    break;

    case 2:
        cout << "Segunda" << endl;
        break;

	case 3:
        cout << "Terca" << endl;
        break;

    case 4:
    	cout << "Quarta" << endl;
    	break;
	case 5:
		cout << "Quinta" << endl;
		break;
	case 6:
		cout << "Sexta" << endl;
		break;
	case 7:
		cout << "Sabado" << endl;
		break;
}


	return 0;
}