// 11. Dado un número entero de tres cifras mostrar sus cifras por separado.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, decena, centena, unidad;
    printf("Ingrese un numero de tres cifras: ");
    scanf("%d", &num);

    centena=(num/100)%10;
    decena=(num/10)%10;
    unidad= num%10;
    printf("%d", centena);
    printf("\n%d", decena);
    printf("\n%d", unidad);
    return 0;
}
