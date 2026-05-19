#include<iostream>
using namespace std;
int main()
{
	int op;
	int n1,n2;
	while(op != 3)
	{
    cout << "1- SOMA\n2- multiplicacao\n3- sair" << endl;
	cin >> op;
	 
	switch(op)
	{
		case 1:
			cin >> n1 >> n2;
			cout << "Soma: " << n1+n2 << endl;
			
		case 2:
			cin >> n1 >> n2;
			cout << "Multiplicacao: " << n1*n2 << endl;
			break;	
	}
	}
	return 0;
}