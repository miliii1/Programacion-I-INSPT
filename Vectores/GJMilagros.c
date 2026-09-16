#include <stdio.h>
#include <stdlib.h>

int totales(int);

int main() {
    int cajas[5], cajeras[3];
    int cont = 0, i;
    char operar;


    while(operar != 'N'){
        int caja, cajero;
        printf("Ingrese el numero de caja: ");
        scanf("%d", &caja);

        printf("Ingrese el numero de cajero(1-3): ");
        scanf("%d", &cajero);

        printf("¿Desea seguir operando?: ");
        scanf(" %s", operar);

    }
    return 0;
}


