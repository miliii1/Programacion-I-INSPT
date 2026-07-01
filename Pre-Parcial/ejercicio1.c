#include <stdio.h>
#include <stdlib.h>

void maximo(float importe, int cajaNum, int *importeMax, int *cajaMax);

int numCaja, numSeccion, importe, cantProdu, max;
int descuento, descuentoTotal = 0, contComprobante = 0, recaudacionTotal = 0;
char operar;

int main()
{

    do
    {
        printf("Ingrese NRO. de CAJA(1 o 2): ");
        scanf("%d", &numCaja);
        printf("Ingrese NRO. de SECCION(1 a 3): ");
        scanf("%d", &numSeccion);
        printf("Ingrese IMPORTE DE LA VENTA: ");
        scanf("%d", &importe);
        printf("Ingrese CANTIDAD DE PRODUCTOS COMPRADOS: ");
        scanf("%d", &cantProdu);


        if (importe >= 5000)
        {
            descuento = importe - ((importe / 100) * 10);
            printf("El importe total es: %d\n", descuento);
        }
        
        printf("¿Desea seguir operando?(S o N): ");
        scanf(" %c", &operar);

        contComprobante++;
        if(descuento >= 5000) {
            recaudacionTotal+=descuento;
        } else {
            recaudacionTotal+=importe;
        }


    } while (operar != 'N' && operar != 'n');

    maximo(importe, numCaja);
    
    printf("Cantidad de comprobantes emitidos en cada caja: %d\n", contComprobante);
    printf("Recaudacion total: $%d", recaudacionTotal);
    printf("La caja con mayor importe es: ", maximo);
    return 0;
}

void maximo(float importe, int cajaNum, int *importeMax, int *cajaMax) {
    int importeMax = importe;
    if(*importeMax > importe) {
        
    }
    
}
