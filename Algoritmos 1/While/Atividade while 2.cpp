#include<iostream>
using namespace std;
int main()
{
	int idade,somaid = 0;
	
	while(idade >= 0)
	{
		cin >> idade;
		
		if(idade<7)
		{
			somaid = somaid + 1;
		}
		if(idade < 0)
		{
			somaid = somaid - 1;
		}
		
		
		
	}
        cout << somaid << endl;


	
	return 0;
}