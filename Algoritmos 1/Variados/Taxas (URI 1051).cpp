#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float valor, juros, taxa;
   
	cin >> valor;
    cout << fixed << setprecision(2);	
	
	if(valor <= 2000)
	{
		cout << "Isento" << endl; 
	}
    else if(valor <= 3000)
	{
		taxa = 8.0/100 ;
		juros = (valor - 2000) * taxa;
		cout << "R$ "  << juros << endl;
	}
	else if(valor <= 4500)
	{
		taxa = 18.0/100;
		juros = (valor - 3000) * taxa;
		cout << "R$ " << juros + 80 << endl; 
	}
	else if(valor > 4500)
	{
		taxa = 28.0/100;
		juros = (valor - 4500) * taxa;
		cout << "R$ " << juros + 350 << endl; 
	}
		
		
	return 0;
}