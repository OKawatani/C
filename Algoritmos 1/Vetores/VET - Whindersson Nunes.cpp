#include<iostream>
using namespace std;
int main()
{
	
	int videos;
	int quant[1005];
	int min = 0;
	int max = 0; 
	
	cin >> videos;
	
	for(int i = 0; i < videos; i++)
	{
		cin >> quant[i];
		
		if(quant[i] > 10000000)
		{
			max++;
		}
		else
		{
			min++;
		}
	}
	
	cout << max << " video(s) com mais de 10M views" << endl;
	cout << min << " video(s) com mais de 10M views" << endl;
	
	
	return 0;
}