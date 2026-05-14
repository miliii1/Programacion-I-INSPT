// Una compañía de gaseosas comercializa tres productos: Cola, Naranja y limonada. Realizar un programa que ingrese por teclado las ventas realizadas de cada producto y su precio correspondiente
#include <stdio.h>
#include <stdlib.h>

int main() {

    int ventaCoca, ventaNar, ventaLim, precioCoca, precioNar, precioLim;
    printf("Ingrese la cantidad de ventas realizada de la Coca: "); // precio y venta de la COCA
    scanf("%d", &ventaCoca);
    printf("Ingrese el precio de la Coca: ");
    scanf("%d", &precioCoca);
    printf("Ingrese la cantidad de ventas realizada de la Naranja: ");// precio y venta naranja
    scanf("%d", &ventaNar);
    printf("Ingrese el precio de la Naranja: ");
    scanf("%d", &precioNar);
    printf("Ingrese la cantidad de ventas realizada de la Limonada: "); // precio y venta limonada
    scanf("%d", &ventaLim);
    printf("Ingrese el precio de la Limonada: ");
    scanf("%d", &precioLim);

    printf("%-12s %-8s %-8s %-8s\n", "PRODUCTO", "VENTAS", "PRECIO", "TOTAL");
    printf("%-12s %-8d %-8d %-8d\n", "COLA", ventaCoca, precioCoca, ventaCoca*precioCoca);
    printf("%-12s %-8d %-8d %-8d\n", "NARANJA", ventaNar, precioNar, ventaNar*precioNar);
    printf("%-12s %-8d %-8d %-8d\n", "LIMONADA", ventaLim, precioLim, ventaLim*precioLim);
    printf("%-30s %-15d\n", "TOTAL", (ventaCoca*precioCoca)+(ventaNar*precioNar)+(ventaLim*precioLim));

    return 0;
}
