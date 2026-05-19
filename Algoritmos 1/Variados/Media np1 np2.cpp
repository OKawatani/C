#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float p1, ex1, pj1, p2, ex2, pj2;
	float parenteses, raiz, np1, parenteses2, raiz2, np2, nf;
	
	cin>> p1 >> ex1 >> pj1 >> p2 >> ex2 >> pj2;
	
	parenteses = ex1 * pj1;
	raiz = sqrt(parenteses);
	np1 = p1 * 0.8 + 0.2 * raiz;
	
	parenteses2 = ex2 * pj2; 
	raiz2 = sqrt(parenteses2);
	np2 = raiz2 * 0.2 + p2 * 0.8;
	
	nf = (np1 + np2) / 2;
	
   if(nf >= 60)
   {
    cout<<"PASSOU CARAI"<< endl;	 
   }
   else 
   {
   	cout<<"NAO PASSOU :)" << endl;
   }
   	 
   
	
	
	
	
	
	
	return 0;
}