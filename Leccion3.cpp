//************************************************************************
#include <iostream>
#include <cstdlib> //cstdlb contiene funciones de entrada y salida
//************************************************************************
using namespace std;
float radio, altura;
//************************************************************************
/* Declaracion de variables globales: 
s indican al usuario que las constantes o variables así declaradas son comunes 
en el  programa. Siempre se situan antes del main() */
#define pi 3.14 15  //Se declara el valor de Pi
/* Siempre va primero el "#define" y despues lo vamos a declarar, en este 
ejemplo estamos declarando el valor de pi como 3.1415 */
int Suma = 10.5;
int A = 2, B=5;
//************************************************************************
//Funciones: Las funciones son subprogramas que hacen cosas muy especificas
void prueba( ); //Ejemplo de una funcion llamada "prueba"
//************************************************************************
int main(int argc, char *argv[])
{
prueba( ); //Asi se llama la funcion prueba 
system("PAUSE"); //Esta linea dice al programa que haga una pausa
return EXIT_SUCCESS;
}
/*************************************************************************
Es una muy buena practica de programacion declarar las funciones antes del 
main, pero se suele colocar lo que hace la funcion despues del main.*/
void prueba( )
{
cout << "Mis primeros pasos en C++ \n";
}
/* La funcion "prueba" lo que hace es mandar un mensaje en pantalla*/
//************************************************************************
/*                             Identificadores
Los identificadores son palabras que nosotros le damos a las secuencias, a
los nombres de las funciones, a las variables, a los contadores, etc.
Algunos ejemplos son: 
-nombre_Alumno
-Fecha_Compra
-alfa
- j
-i 
*/
//************************************************************************
