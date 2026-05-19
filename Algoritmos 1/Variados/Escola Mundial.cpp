#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, acima = 0, abaixo = 0, notas[1000];
	float media = 0.0, total = 0.0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> notas[i];
		total += notas[i]; 
	}
	
	media = total / n;
	
	for(int i = 0; i < n; i++)
	{
		if(notas[i] >= media)
		{
			acima++;
		}
		else
		{
			abaixo++;
		}
	}
	
	cout << fixed << setprecision(2);
	cout << "Media: " << media << endl;
	cout << "Alunos com nota acima da media: " << acima << endl;
	cout << "Alunos com nota abaixo da media: " << abaixo << endl;
	return 0;
	
}