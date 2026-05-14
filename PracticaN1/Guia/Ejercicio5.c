// 5. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la división (para esta última suponer divisor distinto de cero).

#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    printf("\nLa suma de %.0f y %.0f: %.0f", num1, num2, num1+num2);
    printf("\nLa resta de %.0f y %.0f: %.0f", num1, num2, num1-num2);
    printf("\nLa multiplicacion de %.0f y %.0f: %.0f", num1, num2, num1*num2);
    printf("\nLa division de %.0f y %.0f: %.2f", num1, num2, num1/num2);
    fflush(stdin);
}
