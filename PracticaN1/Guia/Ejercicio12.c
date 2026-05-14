// 12. Determina la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos (tener en cuenta librería math.h).
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int cat1, cat2;
    float hipo;
    printf("Ingrese el cateto 1: ");
    scanf("%d", &cat1);
    printf("Ingrese el cateto 2: ");
    scanf("%d", &cat2);

    hipo = sqrt((cat1*cat1) + (cat2*cat2));
    printf("\nLa hipotenusa es: %.2f", hipo);
    return 0;
}

