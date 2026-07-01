#include <stdio.h>
#include <stdlib.h>

/* 1) Cree y desarrolle una función “Potencia” que reciba por parámetros dos enteros X
(base) e Y (potencia); y devuelve por pantalla el resultado de dicha operación.
Nota: No utilizar la función pow(). */

/*
void Potencia(int x, int y);

int main() {

    int potencia, base, respuesta;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese la potencia: ");
    scanf("%d", &potencia);

    Potencia(base, potencia);
    return 0;
}

void Potencia(int x, int y) {
    int resultado = 1, i;
    for(i = 0; i < y; i++) {
        resultado*= x;
    }
    printf("El resultado de %d elevado a %d es: %d", x, y, resultado);
}
*/
/*** 2. Desarrollar una función que dado un número entero devuelva “true” si es primo de lo contrario que devuelva “false”.**/

/*
int esPrimo(int num);
int main() {
    int n, resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    resultado = esPrimo(n);
    if(resultado) {
        printf("Es PRIMO");
    } else {
        printf("NO es PRIMO");
    }
}

int esPrimo(int num) {
    if(num % 2 != 0) return 1;
}
*/
/*** 5.**/


void Opciones(int, int, int);

int main() {

    int num1, num2, opcion;
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    do {
    printf("\nMenu de Opciones:\n");
    printf("-----------------------------\n");
    printf("1) Sumar.\n2) Restar. \n3) Multiplicar. \n4) Dividir. \n5) Ingresar Nuevos numeros. \n6) Salir. \n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    Opciones(num1, num2, opcion);

    if(opcion == 5) {
        printf("Ingrese el primer numero entero: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero entero: ");
        scanf("%d", &num2);
    }
 } while(opcion != 6);
   return 0;
}

void Opciones(int n1, int n2, int opci) {
        switch(opci) {
        case 1:
            printf("La suma es: %d", n1 + n2);
            break;
        case 2:
            printf("La resta es: %d", n1 - n2);
            break;
        case 3:
            printf("La multiplicacion es: %d", n1 * n2);
            break;
        case 4:
            if(n2 != 0) {
                printf("La division es: %d", n1 / n2);
            } else {
                printf("No se puede dividir por cero.\n");
            }
            break;
        case 6:
            printf("Saliendo...");
            break;
    }
}

























