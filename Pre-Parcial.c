#include <stdio.h>
#include <stdlib.h>

void maximo(int importe, int caja, int *importeMax, int *cajaMax);
void seccionTotal(int compSec1, int compSec2, int compSec3, int *recMax);



int main() {

    int nCaja, nSeccion, imporVen, cantPro;
    int descuento, contCaja1 = 0, contCaja2 = 0, recaudacionTotal = 0, cantCompro = 0;
    int importeMax = 0, cajaMax = 0, recSec1 = 0, recSec2 = 0, recSec3 = 0, recMax = 0, recCaja1 = 0, recCaja2 = 0;
    float porcen1 = 0, porcen2 = 0;
    char operar;

    do{
        printf("NRO. de CAJA(1 o 2): ");
        scanf("%d", &nCaja);
    } while(nCaja != 1 && nCaja != 2);

    do {
        printf("NRO. de SECCION(1 o 3): ");
        scanf("%d", &nSeccion);
    } while(nSeccion != 1 && nSeccion != 2 && nSeccion != 1);

    do {
        printf("IMPORTE DE VENTA: ");
        scanf("%d", &imporVen);
        printf("CANTIDAD DE PRODUCTOS COMPRADOS: ");
        scanf("%d", &cantPro);
        printf("¿Quiere seguir operando?: ");
        scanf(" %c", &operar);

        if(nCaja == 1) contCaja1++;
        else contCaja2++;

        if(imporVen > 10000 && cantPro > 3) {
            cantCompro++;
        }

        if(imporVen >= 5000){
            descuento = imporVen - ((imporVen / 100) * 10);
            recaudacionTotal+=descuento;
        } else {
            recaudacionTotal+=imporVen;
        }
        maximo(imporVen, nCaja, &importeMax, &cajaMax); // Aca llamo a la funcion para encontrar el maximo importe de las cajas
        if(nSeccion == 1) {
            recSec1+=imporVen;
        } else if(nSeccion == 2) {
            recSec2+=imporVen;
        } else {
            recSec3+=imporVen;
        }
        if(nCaja == 1) recCaja1+=imporVen;
        else recCaja2+=imporVen;


    } while(operar != 'N' && operar != 'n');

    seccionTotal(recSec1, recSec2, recSec3, &recMax);
    porcen1 = ((float)recCaja1 / recaudacionTotal) * 100;
    porcen2 = ((float)recCaja2 / recaudacionTotal) * 100;


    printf("\n====================================================\n");
    printf("CANTIDAD DE COMPROBANTES EMITIDOS EN CADA CAJA:\n Caja 1: %d  -  Caja 2: %d\n", contCaja1, contCaja2);
    printf("RECAUDACION TOTAL: %d\n", recaudacionTotal);
    printf("CAJA QUE REGISTRO LA VENTA DE MAYOR IMPORTE: %d\n", cajaMax);
    printf("SECCION CON MAYOR RECAUDACION: %d\n", recMax);
    printf("PORCENTAJE DE LAS CAJAS:\nCAJA 1: %.2f%%   -   CAJA 2: %.2f%%\n", porcen1, porcen2);
    printf("CANTIDAD DE COMPROBANTES: %d", cantCompro);
    return 0;
}

void maximo(int importe, int caja, int *importeMax, int *cajaMax) {
    if(importe > *importeMax) {
        *importeMax = importe;
        *cajaMax = caja;
    }
}

void seccionTotal(int compSec1, int compSec2, int compSec3, int *recMax) {
    if(compSec1 > compSec2 && compSec1 > compSec3) *recMax = 1;
    else if(compSec2 > compSec1 && compSec2 > compSec3) *recMax = 2;
    else *recMax = 3;
}


