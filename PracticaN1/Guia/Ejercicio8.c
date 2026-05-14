// 8. Ingresar un valor en segundo e indicar a cuántos días, horas, minutos y segundos equivale.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int seg;
    float dia, hora, min;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &seg);

    min=seg/60;
    hora=min/60;
    dia=hora/24;

    printf("\n%d segundos equivalen a %.2f minutos", seg, min);
    printf("\n%d segundos equivalen a %.2f horas", seg, hora);
    printf("\n%d segundos equivalen a %.2f dias", seg, dia);
    return 0;
}
