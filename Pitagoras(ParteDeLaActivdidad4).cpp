#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std; 
int main()
{
	float CO, CA, H ; 
	cout << "Introduzca el valor del cateto opuesto  :\n" ; 
	cin >> CO ; 
	cout << "Introduzca el valor del cateto adyacente :\n" ; 
	cin >> CA ;
	H = sqrt(pow(CO,2)+pow(CA,2));
	// pow(numero,potencia) eleva el cuadradodo CO  y sqrt(argumento) obtiene la raiz cuadrada del argumento.
	cout << "La hipotenusa es :  \n " << H; 
	system("PAUSE"); 
	return 0;  	
}
