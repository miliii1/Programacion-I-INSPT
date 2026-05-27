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
