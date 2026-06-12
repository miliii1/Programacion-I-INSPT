#include <stdio.h>
#include <stdlib.h>

// 6. Desarrollar un algoritmo que ingrese números hasta leer un cero, calcular y mostrar por pantalla cuántos de ellos son negativos y cuántos son positivos.

/*
int main() {

    int i = 0, num = 1, contPos=0, contNeg=0;

    while(num != 0) {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if(num > 0) contPos++;
        if(num < 0) contNeg++;
        i++;
    }
    printf("Numeros positivos: %d\n", contPos);
    printf("Numeros Negativos: %d", contNeg);
    return 0;
}
*/

#include <math.h>

// 7. Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20 primera potencias de 2.

/*
int main() {

    int n = 2, i;
    long int result=0;
    for(i = 1; i <= 20; i++) {
        result = pow(n, i);
        printf("%d ^ %d = %d\n", n, i, result);
    }

    return 0;
}
*/

//OTRA FORMA
/*
   int i;
   long int result=1;
    for(i = 1; i <= 20; i++) {
        result = result * 2;
        printf("2^%d = %d\n", i, result);

*/


// 8. Desarrollar un algoritmo que ingrese un número entero positivo y muestre por pantalla todos sus divisores.

/*
int main() {

    int num, i;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);

        for(i = 1; i < 10; i++) {
            if(num % i == 0) printf("%d ", i);
        }
    return 0;
}
*/

//9. Desarrollar un algoritmo que ingrese un entero positivo, y muestre por pantalla la suma de sus cifras.
/*
int main()
{

    int num, i = 1, suma = 0, cifra;


    do
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &num);
        if(num < 0) printf("Error! Ingrese un numero valido. ");
    } while(num < 0);

    while(num > 0)
    {
        cifra = (num % 10);
        num = num / 10;
        suma+=cifra;
        i++;
    }

    printf("La suma de sus cifras es: %d", suma);

    return 0;
}
*/

/// 10. Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar) y luego muestre por pantalla el factorial del mismo
/*
int main() {

    int num, factorial, i;

    do {
        printf("Ingrese un numero entero: ");
        scanf("%d", &num);

        if(num < 0) printf("Error: numero invalido. ");
    } while(num < 0);

    factorial = num;
    for(i = num - 1; i >= 1; i--) {
        factorial = factorial * i;
        printf("%d x ", i + 1);
    }
    printf("1 = %d", factorial);
    return 0;
}
*/

//////
