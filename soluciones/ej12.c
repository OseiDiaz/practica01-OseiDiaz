
#include <stdio.h>
int main(){
    // Resolver ejercicio 12
    	int m[3][5];
	int base = 4000;
	
	// deseamos obtener la dirrecion de memoria de m[2][4] 

	int direccion0 = (2 * 5 + 4);

	printf("La direccion de memoria de m[2][4] es: %d\n", base + direccion0 * sizeof(int));


	// deseamos obtener la dirrecion de memoria de m[1][3]

	int direccion1 = (1 * 5 + 3);
	printf("La direccion de memoria de m[1][3] es: %d\n", base + direccion1 * sizeof(int));

	//diferencia entre las dos dirreciones de memoria

	int diferencia = (direccion0 - direccion1) * sizeof(int);
	printf("La diferencia entre las dos direcciones de memoria es: %d bytes\n", diferencia);

    return 0;
}
