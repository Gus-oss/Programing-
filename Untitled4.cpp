#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 
int main()
{
    float A,B,C, H ;
	//A=base mayor,B=base menor,C=altura
	cout << "Introduce la altura  :\n" ; 
	cin >> C ; 
	cout << "Introduce la base mayor :\n" ; 
	cin >> A ;
	cout << "Introduce la base menor :\n" ; 
	cin >> B ;
	H = (A+B)*C/2;
	
	cout << "La area es:  \n " << H; 
	system("PAUSE"); 
	return 0;  	
}
