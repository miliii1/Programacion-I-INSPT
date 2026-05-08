#include<stdio.h>
#include<stdlib.h>

// 4. Ingresar por teclado un valor en Km y mostrarlo expresado en metros.


int main()
{
    int km, metros;
    printf("Ingrese un numero: ");
    scanf("%d", &km);

    metros=km*1000;
    printf("\n%d km = %d metros", km, metros);

    return 0;
}
