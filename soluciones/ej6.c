
#include <stdio.h>
int main(){
    // Resolver ejercicio 6
    int m[2][4]; 
for (int i = 0; i < 2; i++)
{
	for (int j = 0; j < 4; j++)
	{
		printf("%p \n", &m[i][j]);
		
	}
}
//el primer termino de la matris representa las filas y el segundo las columnas.
//la formula es: 
//				direccion = base + (i * numero de columnas + j) * tamaño del tipo de dato
    return 0;
}
