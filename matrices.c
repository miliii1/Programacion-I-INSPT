#include <stdio.h>
#include <stdlib.h>

int main() {
    int tabla [2][3] = {{1, 2, 3}, {4, 5, 6}};
    int sumFilas[2] = {0}, sumColum[3] = {0};

    for(int i = 0; i < 2; i++) {
       for(int j = 0; j < 3; j++) {
            sumFilas+=tabla[i][j];
            printf("%d", sumFilas);
        }
    }
    
}



/*
int main() {
    int tabla [2][3] = {{1, 2, 3}, {4, 5, 6}};

    printf("Matriz por fila: ");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d-", tabla[i][j]);
        }
    }

    printf("\nMatriz por columna: ");
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 2; i++) {
            printf("%d-", tabla[i][j]);
        }
    }
}
*/
/*
int main() {
    int tabla [2][3] = {{1, 2, 3}, {4, 5, 6}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }
    for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 2; i++) {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }
}
*/
