
#include <stdio.h>
int main(){
    // Resolver ejercicio 10
    int gigante[10000000];

/*
el por que falla. es un error de segmentacion
el programa esta tratando de acceder a una parte de la memoria que no le pertenece
esto se debe a que el arreglo gigante es demasiado grande para ser almacenado en la pila, 
lo que causa un desbordamiento de pila. para solucionar este problema, 
se puede declarar el arreglo como una variable global
*/
    return 0;
}
