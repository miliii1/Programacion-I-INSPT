//########################## FUNCIONES ###############################################################

#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO DE LA FUNCION, SIEMPRE SE AGREGA PRIMERO LA DECLARACION DE LA FUNCION
int sumar(int a, int b);


int main() {

    int num1, num2, result;
    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese un numero: ");
    scanf("%d", &num2);

    result = sumar(num1, num2); // SE LLAMA A LA FUNCION Y SE LO DECLARA EN UNA NUEVA VARIABLE
    printf("El resultado es: %d", result);
    return 0;
}

// LA FUNCION CON PARAMETROS 
int sumar(int a, int b) {
    return a + b;
}