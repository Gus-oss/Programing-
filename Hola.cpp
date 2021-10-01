//Mi primer programa en C++
/* Este es un comentario sin //
Hola que hace, aprendiendo programacion o que hace
*/
#include <iostream> /*
Las lineas que comienza con un simbolo de sostenido # son directivas para el preprocesador. 
En este caso, la directiva  #include <iostream>le dice al preprocesador que incluya
el iostream estandar de archivo. Este archivo especifico (iostream) incluye las declaraciones
de la norma basica de entrada y salida de la biblioteca de C++
*/
using namespace std; /*
Todos los elementos del modelo de libreria de C++ se declaran dentro de lo que se denomina 
un espacio de nombres. Por lo tanto, para poder acceder a su funcionalidad declaramos
con esta expresion que vamos a utilizar estas entidades. Esta linea es muy frecuente en los
programas que utilizan la biblioteca est´andar, y de hecho ser´a incluido en la mayor´ia de los
codigos
*/
int main() {
 cout << "Hola mundo \n"; // imprime en la pantalla la frase "hola mundo"
 
 return 0; 
}
