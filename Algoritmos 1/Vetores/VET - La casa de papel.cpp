#include<iostream>
using namespace std;
int main()
{
	int likes, dislikes, quant;
	int total[1005];
	
	cin >> quant;
	
	for(int i = 0; i < quant; i++)
	{
		cin >> total[i];
		
		if(total[i] > 0)
		{
			likes++;
		}
		else
		{
			dislikes++;
		}
	}
	
	if(likes > dislikes)
	{
		cout << "A maioria gostou" << endl;
	}
	else if(likes < dislikes)
	{
		cout << "A maioria nao gostou" << endl;
	}
	else
	{
		cout << "Deu empate" << endl;
	}
	
	return 0;
}