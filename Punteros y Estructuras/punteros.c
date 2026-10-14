#include <stdio.h>
#include <stdlib.h>

void modificarValor(int *, int *);

int main() {
    //int a = 10;
    //int b = 8;
    int a, b;
    printf("Ingrese el valor a: ");
    scanf("%d", &a);
    printf("Ingrese el valor b: ");
    scanf("%d", &b);
    printf("El valor de a es: %d\n El valor de b es: %d\n", a, b);
    modificarValor(&a, &b);
    printf("El nuevo valor de a es: %d\n El nuevo valor de b es: %d\n", a, b);
}

void modificarValor(int *x, int *y) {
    int varia = *x;
    *x=*y;
    *y=varia;
}