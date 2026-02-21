
#include <stdio.h>
#define Base 2000
int main()
{
    // Resolver ejercicio 8
int i = 1, j = 2;
int direccion = 2024;

int C = (direccion - Base) / 4;
int NumColmna = C / 2;
printf("El numero de columna es: %d", NumColmna);

int tamañoTotal = NumColmna * sizeof(int) * 4;
printf("\nEl tamaño total de la matriz es: %d bytes", tamañoTotal);
    return 0;
}
