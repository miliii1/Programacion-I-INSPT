#include <stdio.h>
#include <stdlib.h>

void intercambio(int*, int*);
int num1, num2, inter;

int main() {
    printf("Ingrese el primer: ");
    scanf("%d", &num1);
    printf("Ingresado el segundo: ");
    scanf("%d", &num2);

    intercambio(&num1, &num2);
    printf("El primer valor es: %d\n", num1, num2);
    printf("El segundo valor es: %d", num2, num1);
    return 0;
}

void intercambio(int *a, int *b) {
    int aux = 0;
    aux=*b;
    *b =*a;
    *b=aux;
}
