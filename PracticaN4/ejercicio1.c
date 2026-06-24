#include <stdio.h>
#include <stdlib.h>

/** 
 * a. Desarrollar una función void EsPar(int unNumero).
b. Desarrollar una función int EsPar(int unNumero) que devuelve 1 (uno) si es par y
0 (cero) si es impar.
c. Desarrollar una función char EsPar(int unNumero) que devuelve “V” si es par y
“F” si es impar.*/

//void EsPar(int unNumero);
int EsPar(int unNumero);
//char EsPar(int unNumero);


int main(){
    int numero, res;
    printf("Ingrese un n%cmero: ", 163);
    scanf("%d", &numero);

    //CON VOID
    //EsPar(numero);

    // CON INT
    
    res = EsPar(numero);
    if (res)
        printf("Es un n%cmero par", 163);
    else
        printf("Es un n%cmero impar", 163);
    

    // CON CHAR
    //res = EsPar(numero);
    //printf("El resultado es: %c", res);

    return 0;
}

// CON INT

int EsPar(int unNumero) {
    if(unNumero % 2 == 0) return 1;
    else return 0;
}


// CON CHAR

/*
char EsPar(int unNumero) {
    if(unNumero % 2 == 0) return 'V';
    else return 'F';
}
*/

// CON VOID
/*
void EsPar(int unNumero) {
    if(unNumero % 2 == 0) {
        printf("El numero es PAR. ");
    } else {
        printf("El numero es IMPAR. ");
    }
} 
*/
