#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main() {
    char meses[100][30];

    int i = 0;

    while(i < 3) {
        printf("Ingrese el mes: ");
        scanf("%s", meses[i]);
        i++;
    }

    i = 0;

    while(i < 3) {
        printf("%s\n", meses[i]);
        i++;
    }
}

int main() {
    int temp[12];
    int max, i = 0;

    srand(time(NULL));

    while(i < 12) {
        temp[i] = rand() % 100;
        i++;
    }

    i = 0;

    while(i < 12) {
        printf("Temperatura del mes %d: %d\n", i + 1, temp[i]);
        i++;
    }

    max = temp[0];

    for(i = 0; i < 12; i++){
        if(temp[i] > max) {
            max = temp[i];
        }
        i++;
    }
    printf("La temperatura maxima es: %d\n", max);
    return 0;
}

*/

/*
// USAR UN SIZEOF
int main() {
    int Notas[] = {2, 6, 9, 10, 3, 1, 5};
    int i = 0;

    while(Notas[i] != 0) {
        printf("%d\n", Notas[i]);
        i++;
    }
    return 0;
}
*/

#define cant 7

int main() {
    int Legajos[cant] = {1234, 2345, 6789, 2456, 4567, 4569, 2341};
    int Notas[cant] = {2, 6, 9, 10, 3, 1, 5};
    int max, i = 0;

    max = Notas[0];

    for(i = 0; i < cant; i++){
        if(Notas[i] > max) {
            max = Notas[i];
        }
        i++;
    }
    for(i = 0, i < cant; i++) {
        
    }
}
