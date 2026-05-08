// 9. Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de
// horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año
// trabajado. El sueldo básico es de $4500. Se desea ingresar la cantidad de horas
// trabajadas, la antigüedad y obtener el sueldo neto.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int horas, antiguedad;
    float suelneto;
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese la antiguedad: ");
    scanf("%d", &antiguedad);

    suelneto = (4500*horas)+(4500*antiguedad*0.02);
    printf("\nCantidad de horas trabajadas: %dhs", horas);
    printf("\nAntiguedad: %d anios", antiguedad);
    printf("\nSueldo Neto TOTAL: $%.1f", suelneto);
    return 0;
}
