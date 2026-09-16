#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));

    // Definición de vectores
    float total_cajas[5] = {0.0};     // 5 cajas (índices 0 a 4)
    int personas_cajas[5] = {0};       // Cantidad de personas por caja
    float total_cajeros[3] = {0.0};    // 3 cajeros (índices 0 a 2)

    char operar;
    int nro_caja, nro_cajero;
    float importe;

    printf("--- SIMULACION DE SUPERMERCADO ---\n");
    printf("¿Desea registrar una operacion? (S/N): ");
    scanf(" %c", &operar);

    // Ciclo principal de operación
    while (operar == 'S' || operar == 's') {
        // Generar aleatoriamente caja (1 a 5) y cajero (1 a 3)
        nro_caja = (rand() % 5) + 1;
        nro_cajero = (rand() % 3) + 1;

        printf("Caja asignada: %d | Cajero asignado: %d\n", nro_caja, nro_cajero);
        printf("Ingrese el importe de la venta: $");
        scanf("%f", &importe);

        // Actualizar vectores (restando 1 porque los arrays en C van de 0 a N-1)
        total_cajas[nro_caja - 1] += importe;
        personas_cajas[nro_caja - 1] += 1;
        total_cajeros[nro_cajero - 1] += importe;

        printf("----------------------------------------\n");
        printf("¿Desea registrar otra operacion? (S/N): ");
        scanf(" %c", &operar);
    }

    printf("\n========================================\n");
    printf("INFORME FINAL DE LA JORNADA\n");
    printf("========================================\n");

    // 1. Total facturado por cada caja
    printf("\n--- Total facturado por cada caja ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Caja %d: $%.2f\n", i + 1, total_cajas[i]);
    }

    // 2. Total facturado por cada cajer@
    printf("\n--- Total facturado por cada cajer@ ---\n");
    for (int j = 0; j < 3; j++) {
        printf("Cajer@ %d: $%.2f\n", j + 1, total_cajeros[j]);
    }

    // 3. Máxima recaudación y nro. de cajer@ que lo hizo
    float max_recaudacion = total_cajeros[0];
    int mejor_cajero = 1;
    for (int j = 1; j < 3; j++) {
        if (total_cajeros[j] > max_recaudacion) {
            max_recaudacion = total_cajeros[j];
            mejor_cajero = j + 1;
        }
    }
    printf("\n--- Maxima recaudacion de cajer@s ---\n");
    printf("El/la cajer@ #%d obtuvo la maxima recaudacion con: $%.2f\n", mejor_cajero, max_recaudacion);

    // 4. Cantidad de personas atendidas en cada caja
    printf("\n--- Cantidad de personas atendidas por caja ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Caja %d: %d personas\n", i + 1, personas_cajas[i]);
    }

    // 5. Consultar una caja específica
    int consulta_caja;
    printf("\n--- Consulta de Caja Especifica ---\n");
    printf("Ingrese el Nro. de caja a consultar (1 al 5): ");
    scanf("%d", &consulta_caja);

    if (consulta_caja >= 1 && consulta_caja <= 5) {
        printf("\nNro de caja\t\tRecaudacion\n");
        printf("%d\t\t\t$%.2f\n", consulta_caja, total_cajas[consulta_caja - 1]);
    } else {
        printf("Numero de caja invalido.\n");
    }

    return 0;
}
