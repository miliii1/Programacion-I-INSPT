// 7. Ingresar un número que se corresponde con una cantidad de días e indicar a cuántos segundos equivalen.

#include<stdio.h>
#include <stdlib.h>

int main(){

    int dias, seg;
    printf ("Ingresar un numero de dias: ");
    scanf ("%d", &dias);

    seg=((dias*24)*60)*60;
    printf("%d dia/s equivalen a %d segundos", dias, seg);

    return 0;

}
