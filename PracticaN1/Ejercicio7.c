#include<stdio.h>
//

int main(){
    
    int dias;
    float seg;
    printf ("Ingresar un numero: ");
    scanf ("%d", &dias);

    seg=((dias*24)*60)*60;
    printf("%d dia/s equivalen a %.2f segundos", dias, seg);

    return 0;

}