// 2.Desarrollar un algoritmo que escriba por pantalla los primeros 100 números naturales.

#include <stdio.h>
#include <stdlib.h>

/*
int main() {

    int i;
    for(i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    return 0;
}
*/

// 3. Desarrollar un algoritmo que ingrese 10 números enteros y muestre por pantalla un mensaje únicamente cuando son positivos.

/*
int main() {

    int num, i=0;

    while(i <= 10) {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if(num > 0) printf("El numero %d es positivo.\n", num);
        i++;
    }
    return 0;
}
*/

//4. Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) y muestre por pantalla la tabla de multiplicar del número ingresado.

/*
int main() {

    int num, i, j;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 10) {
        for(i = 0; i < 10; i++) {
                printf("%d x %d = %d\n", num, i, i*num);
        }
    } else {
        printf("Ingrese un numero valido. ");
}
    return 0;
}
*/

// 5. Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo, se pide mostrar por pantalla el promedio.

/*
int main() {

    int num=0, i=0;
    float prom=0, cont=0;


    while(num >= 0) {
    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);

        if(num > 0) {
           prom += num;
           cont++;
        }

        i++;
    }
    printf("Promedio: %.2f\n", prom / cont);
    return 0;
}
*/
//




















