#include <stdio.h>
#include <stdlib.h>
/**1. Escribir un programa que pregunte entre estas figuras geométricas: cuadrado, rectángulo y círculo; luego pedir los datos necesarios para mostrar el área y perímetro de la figura elegida.*/
/*
int main()
{

    float area, per;
    int fig, base, alt, lad, rad;
    printf("Elija una figura (1=Cuadrado, 2=Rectangulo, 3=Circulo): ");
    scanf("%d", &fig);

    switch(fig)
    {
    case 1:
        printf("Ingrese el lado: ");
        scanf("%d", &lad);

        area = lad*lad;
        per = 4 * lad;
        printf("Area: %.0f", area);
        printf("\nPerimetro: %.0f", per);
        break;
    case 2:
        printf("Ingrese la base: ");
        scanf("%d", &base);
        printf("Ingrese la altura: ");
        scanf("%d", &alt);

        area = base * alt;
        per = 2*(base + alt);
        printf("Area: %.0f", area);
        printf("\nPerimetro: %.0f", per);
        break;
    case 3:
        printf("Ingrese el radio: ");
        scanf("%d", &rad);

        area = 3.14 * rad*rad;
        per = 2* 3.14 * rad;
        printf("Area: %.2f", area);
        printf("\nPerimetro: %.2f", per);
        break;
    }
    return 0;
}
*/
/**2. En una sala de juegos existen 4 salas: Consolas, Juegos 2D, Juegos 3D y Realidad Virtual. Si un usuario paga 4 créditos o más puede acceder a todas, si paga 3 solo podrá acceder a las tres primeras, si paga 2 a las dos
primeras y si paga 1 solo a la primera sala. Ingresar por teclado los créditos y mostrar a qué juegos puede acceder.
*/
/*
int main()
{

    int cred;
    printf("Ingrese sus creditos: ");
    scanf("%d", &cred);

    /*if(cred >= 4) printf("Puede acceder a: \n - Consolas\n - Juegos 2D\n - Juegos 3D\n - Realidad Virtual");  // ESTA FORMA ES CON IF
    else if(cred >= 3) printf("Puede acceder a: \n - Consolas\n - Juegos 2D\n - Juegos 3D\n");
    else if(cred >= 2) printf("Puede acceder a: \n - Consolas\n - Juegos 2D\n");
    else printf("Puede acceder a: \n - Consolas\n");

    switch(cred)
    {
    default:
        printf(" - Realidad Virtual");
    case 3:
        printf("\n - Juegos 3D");
    case 2:
        printf("\n - Juegos 2D");
    case 1:
        printf("\n - Consolas");
    }

    return 0;
}
*/
/**3. Ingresar un número por teclado entre 1 y 12, mostrar a que mes pertenece.*/
/**4. A partir del número de mes ingresado por teclado, el programa debe indicar la estación del año: Las estaciones serán : Verano(12-1-2), otoño(3-4-5), invierno(6-7-8) y primavera(9-10-11).**/
/*
int main() {
    int mes;
    printf("Ingrese un mes entre (1 y 12): ");
    scanf("%d", &mes);

    switch(mes) {
    case 1:
        printf("%d pertenece al mes de: ENERO", mes);
        printf("\nEstacion: VERANO");
    break;
    case 2:
        printf("%d pertenece al mes de: FEBRERO", mes);
        printf("\nEstacion: VERANO");
    break;
    case 3:
        printf("%d pertenece al mes de: MARZO", mes);
        printf("\nEstacion: OTO%cO", 165);
    break;
    case 4:
        printf("%d pertenece al mes de: ABRIL", mes);
        printf("\nEstacion: OTO%cO", 165);
    break;
    case 5:
        printf("%d pertenece al mes de: MAYO", mes);
        printf("\nEstacion: OTO%cO", 165);
    break;
    case 6:
        printf("%d pertenece al mes de: JUNIO", mes);
        printf("\nEstacion: INVIERNO");
    break;
    case 7:
        printf("%d pertenece al mes de: JULIO", mes);
        printf("\nEstacion: INVIERNO");
    break;
    case 8:
        printf("%d pertenece al mes de: AGOSTO", mes);
        printf("\nEstacion: INVIERNO");
    break;
    case 9:
        printf("%d pertenece al mes de: SEPTIEMBRE", mes);
        printf("\nEstacion: PRIMAVERA");
    break;
    case 10:
        printf("%d pertenece al mes de: OCTUBRE", mes);
        printf("\nEstacion: PRIMAVERA");
    break;
    case 11:
        printf("%d pertenece al mes de: NOVIEMBRE", mes);
        printf("\nEstacion: PRIMAVERA");
    break;
    case 12:
        printf("%d pertenece al mes de: DICIEMBRE", mes);
        printf("\nEstacion: VERANO");
    break;
    default:
        printf("No corresponde a ningun mes.");
    }
    return 0;
}
*/

/**5. En una tienda coches se quiere redirigir a un cliente hacia una sección de acuerdo al tipo de coche que elija. Si elige tipo gasolina (opción 1) se le enviará a la oficina numero 100.
Si elije el tipo diesel (opción 2) irá a la oficina 200 y si elige eléctrico (opción 3) se le enviaráa la oficina 300.
*/






























