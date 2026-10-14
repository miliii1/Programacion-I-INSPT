#include <stdio.h>
#include <stdlib.h>

void modificarValor(int *);

int main() {
    int num = 10;
    //int *p=&num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("El numero es: %d\n", num);
    modificarValor(&num);
    printf("El nuevo valor es: %d\n", num);
}
void modificarValor(int *numero) {
    *numero = 10;
}

/*
void modificarValor(int *);

int main() {

    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    system("cls");
    printf("El numero es: %d\n", num);

    modificarValor(&num);
    printf("El nuevo valor es: %d\n", num);
    return 0;
}
void modificarValor(int *numero) {
    *numero = 10;
}

*/
