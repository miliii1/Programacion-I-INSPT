#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SumaDigitos(int numero);

int main() {
    int numeroAleatorio;
    int resultadoSuma;

   
    srand(time(NULL));

   
    numeroAleatorio = rand() % 90000 + 10000;

   
    resultadoSuma = SumaDigitos(numeroAleatorio);

    
    printf("El número generado es: %d\n", numeroAleatorio);
    printf("La suma de sus dígitos es: %d\n", resultadoSuma);

    return 0;
}


int SumaDigitos(int numero) {
    int suma = 0;

    
    while (numero > 0) {
        suma += numero % 10;  
        numero = numero / 10; 
    }

    return suma; 
}
