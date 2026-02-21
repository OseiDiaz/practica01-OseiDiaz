
#include <stdio.h>
int main(){
    // Resolver ejercicio 9
    int a[5];
printf("%p\n", &a[-1]);
printf("%p\n", &a[5]);

/*
¿Por qué compila?

	El compilador de C no suele realizar verificación de límites

¿Por qué es peligroso?

Porque se pueden acceder a posiciones de memoria que no pertenecen al arreglo
lo que puede causar errores de ejecución o vulnerabilidades de seguridad.

¿Qué revela sobre la memoria?

Revela que la memoria se trata como un espacio contiguo y lineal
*/
    return 0;
}
