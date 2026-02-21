
#include <stdio.h>
int main(){
    // Resolver ejercicio 5
    int a[11];
    a[0] = 1000;
for (int i = 1; i <= 10; i++)
{
    a[i] = a[i - 1] + 1;
	printf("a[%d] = %d\n", i, a[i]);
}
    return 0;
}
