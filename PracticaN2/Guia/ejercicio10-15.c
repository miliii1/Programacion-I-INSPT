#include <stdio.h>
#include <stdlib.h>

/*11. Desarrollar un algoritmo que ingrese nombre y nota entera (entre 1 y 10) de un alumno correspondiente al promedio obtenido, se pide mostrar el siguiente mensaje: "Juan
obtuve un sobresaliente", según el promedio: 10-Sobresaliente, 8 y 9-Distinguido, 6 y 7-Bueno, 4 y 5-Aprobado, 1,2,3-Reprobado.*/
/*
int main()
{
    int nota;
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su nota: ");
    scanf("%d", &nota);

    switch(nota)
    {
    case 10:
        printf("%s obtuvo un Sobresaliente", nombre);
        break;
    case 9:
    case 8:
        printf("%s obtuvo un Distingido", nombre);
        break;
    case 7:
    case 6:
        printf("%s obtuvo una Buena nota", nombre);
        break;
    case 5:
    case 4:
        printf("%s Aprob%c", nombre, 162);
        break;
    default:
        printf("%s Reprob%c", nombre, 162);
        break;
    }
    return 0;
}
*/
/*12. Desarrollar un algoritmo que ingrese nombre y fecha de nacimiento como tres enteros
(DD, MM, AAAA), de una persona y mostrar por pantalla su nombre y su fecha de
nacimiento , de la siguiente forma "Carlos nació el 5 de marzo de 1973".*/

/*
int main()
{
    char nombre[20];
    int dia, mes, anio;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese dia de nacimiento: ");
    scanf("%d", &dia);
    printf("Ingrese mes de nacimiento: ");
    scanf("%d", &mes);
    printf("Ingrese año de nacimiento: ");
    scanf("%d", &anio);

    if ((mes < 1 || mes > 12) || (dia < 1 || dia > 31))
    {
        printf("Error: La fecha %d/%d no es valida.\n", dia, mes);
        return 1;
    }

    printf("%s nació el %d de ", nombre, dia);

    switch (mes)
    {
    case 1:
        printf("enero");
        break;
    case 2:
        printf("febrero");
        break;
    case 3:
        printf("marzo");
        break;
    case 4:
        printf("abril");
        break;
    case 5:
        printf("mayo");
        break;
    case 6:
        printf("junio");
        break;
    case 7:
        printf("julio");
        break;
    case 8:
        printf("agosto");
        break;
    case 9:
        printf("septiembre");
        break;
    case 10:
        printf("octubre");
        break;
    case 11:
        printf("noviembre");
        break;
    case 12:
        printf("diciembre");
        break;
    }

    printf(" del año %d", anio);
    return 0;
}
*/

/*13. Desarrolle un algoritmo que ingrese los valores de los lados de un triángulo. Valide si
las medidas pueden formar un triángulo y luego indique a través de un mensaje que
tipo de triángulo es (EQUILÁTERO, ISÓSCELES, O ESCALENO).
*/
/*
int main()
{
    int ladoA, ladoB, ladoC;
    printf("Ingrese lado A: ");
    scanf("%d", &ladoA);
    printf("Ingrese lado B: ");
    scanf("%d", &ladoB);
    printf("Ingrese lado C: ");
    scanf("%d", &ladoC);

    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
    {
        if(ladoA == ladoB && ladoB == ladoC)
            printf("Los lados forman un EQUILATERO. ");
        else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC)
            printf("Los lados forman un ISOSCELES.  ");
        else
            printf("ESCALENO. ");
    }
    else
    {
        printf("Error debe ingresar numeros válido. ");
    }
    return 0;
}
*/
// 14.

#include <math.h>

/*
int main()
{
    int x;
    float num;
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    printf("(1) EL TRIPLE\n");
    printf("(2) EL CUADRADO\n");
    printf("(3) LOGARITMO NATURAL\n");
    printf("(4) LOGARITMO DECIMAL\n");
    printf(" Escribe el número de la opción que desees: \n");
    scanf("%d",&x);


    switch(x)
    {
    case 1:
        printf("El triple es: %.0f", num*num*num);
        break;
    case 2:
        printf("El cuadrado es: %.0f", num*num);
        break;
    case 3:
        double result = log(num);
        printf("El LOGARITMO NATURAL es %.2f", result);
        break;
    case 4:
        double resultado = log10(num);
        printf("El LOGARITMO DECIMAL es %.2f", resultado);
        break;
    default:
        printf("Ingrese numeros válidos. ");
        break;
    }

    return 0;
}*/

/*15. Construir un programa que ingrese un carácter y determine si es una vocal.*/
/*
int main()
{
    char letra;
    printf("Ingrese un caracter: ");
    scanf("%c", &letra);

    switch(letra)
    {
    case 'A':
    case 'a':
        printf("Es una Vocal. ");
        break;
    case 'E':
    case 'e':
        printf("Es una Vocal. ");
        break;
    case 'I':
    case 'i':
        printf("Es una Vocal. ");
        break;
    case 'O':
    case 'o':
        printf("Es una Vocal. ");
        break;
    case 'U':
    case 'u':
        printf("Es una Vocal. ");
        break;
    default:
        printf("Es una consonante. ");
        break;
    }
    return 0;
}*/
