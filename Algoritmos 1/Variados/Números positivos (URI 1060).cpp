#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0,num;
	
	cin>>n;
	for(i = 1; i<=n;i++){
		cin>>num;
		if(num>0){
			c++;
		}
	}
			cout<<c<< " "<< "numeros positivos";
			
	

	
	return 0;
}