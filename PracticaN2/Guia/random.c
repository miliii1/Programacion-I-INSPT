// Ingresar 50 numeros aleatorios de tres digitos. Se pide: Contar cuantos son capicua.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL)); // ??????????
    int cont = 0;
    int a, c;
    for (int i = 0; i < 50; i++)
    {
        int n = (rand() % 900) + 100;
        a = (n / 100);
        c = (n % 10);
        printf("%d\n", n);

        if (a == c)
            cont++;
    }
    printf("Se encuentran %d numeros capicua", cont);
    return 0;
}
// ejercicio 11 de la guia 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) printf("%d\n", i);
    }
    return 0;
}
// eje 12
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, i;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1 < num2) {
        for(i = num1; i < num2+1; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
