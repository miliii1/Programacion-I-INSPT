// 10. Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, ultimaCifra;
    printf("Ingrese un numero de tres cifras: ");
    scanf("%d", &num);

    ultimaCifra = num%10;
    printf("\nLa ultima cifra de %d es: %d", num, ultimaCifra);
    return 0;
}
