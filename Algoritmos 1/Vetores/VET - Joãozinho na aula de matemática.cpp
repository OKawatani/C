#include <iostream>
using namespace std;
int main()
{
	int num;
	
	cin >> num;
	
	for (int i = 0; i < 11; i++)
	{
		cout << num << " X " << i << " = " << num * i << endl;
	}
	
	return 0;
}