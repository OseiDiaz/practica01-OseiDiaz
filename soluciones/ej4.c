
#include <stdio.h>
int main(){
    // Resolver ejercicio 4
    // Resolver ejercicio 2
    /*
	Salida:
	&a[0] = 5000
	&a[3] = 5012

	el tamaño del tipo de dato es 4 bytes, por lo tanto, cada elemento del arreglo ocupa 4 bytes de memoria.
	
	la dirrecion de memoria de a[5] usando la formula: 
*/
	int a[5];
	int direcion = 5000 + (4 * 5);
	printf("la dirrecion de memoria de a[5] es: %d", direcion);

	//la formula utilizada fue: 5000 + (4 * 5) = 5000 + 20 = 5020
    return 0;
}
