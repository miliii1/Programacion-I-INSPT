4. Ingresar por teclado un valor en Km y mostrarlo expresado en metros. 
#include<stdio.h>

int main()
{
float km, metros;
printf("Ingrese un valor en KM: ");
scanf("%f", &km);

metros = km*1000;

printf("\n%f KM equivale a %.1f metros", km, metros);
return 0;
}




 5. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la 
 división (para esta última suponer divisor distinto de cero). 
#include<stdio.h>
#include<stdlib.h>

int main()
{
float num1, num2;
printf("Ingresa el primer numero: ");
scanf("%f", &num1);
printf("Ingresa el segundo numero: ");
scanf("%f", &num2);

printf("\nLa suma de %.0f y %.0f es: %.0f", num1, num2, num1+num2);
printf("\nLa resta de %.0f y %.0f es: %.0f", num1, num2, num1-num2);
printf("\nLa multiplicación de %.0f y %.0f es: %.0f", num1, num2, num1*num2);
printf("\nLa división de %.0f y %.0f es: %.2f", num1, num2, num1/num2);
return 0;
}

 6. Crear un programa que guarde en a el valor 5 en b el valor 8 y luego muestre por 
 pantalla los valores intercambiados o sea que en a quede 8 y en b quede 5. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=5, b=8;
a=8;
b=5;
printf("\nEl valor a es: %d y el valor b es: %d", a, b);
return 0;
}
 
 7. Ingresar un número que se corresponde con una cantidad de días e indicar a cuántos 
 segundos equivalen. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int dias, seg;
printf("Ingrese los dias: ");
scanf("%d", &dias);

seg=((dias*24)*60)*60;
printf("\n%d dias equivalen %d segundos", dias, seg);
return 0;
}

 8. Ingresar un valor en segundo e indicar a cuántos días, horas, minutos y segundos 
 equivale. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int seg;
float dia, hora, min;
printf("Ingrese la cantidad de segundos: ");
scanf("%d", &seg);

min=seg/60;
hora=min/60;
dia=hora/24;

printf("\n%d segundos equivalen a %.2f minutos", seg, min);
printf("\n%d segundos equivalen a %.2f horas", seg, hora);
printf("\n%d segundos equivalen a %.2f dias", seg, dia);
return 0;
}

 9. Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de 
 horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año 
 trabajado. El sueldo básico es de $4500. Se desea ingresar la cantidad de horas 
 trabajadas, la antigüedad y obtener el sueldo neto. 

 10. Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int num, ultimaCifra;
printf("Ingrese un numero de tres cifras: ");
scanf("%d", &num);

ultimaCifra = num%10;
printf("\nLa ultima cifra de %d es: %d", num, ultimaCifra);
return 0;
}


 11. Dado un número entero de tres cifras mostrar sus cifras por separado. 
#include<stdio.h>
#include<stdlib.h>

int main()
{
int num, decena, centena, unidad;
printf("Ingrese un numero de tres cifras: ");
scanf("%d", &num);

centena=(num/100)%10;
decena=(num/10)%10;
unidad= num%10;
printf("\n%d", centena);
printf("\n%d", decena);
printf("\n%d", unidad);
return 0;
}

 8. 
/*8. Una compañía dedicada a servicio de mensajería realiza envios al interior el costo fijo de traslado es de $1500 si es corta distancia y 2000 si es larga distancia, luego dependerá
del peso de la mercadería enviada, los de corta distancia si el peso supera los 20 kilos se le cobran $800 por cada kilo de exceso y los de larga distancia se le cobra $800,cada 5
kilos excedidos. Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el costo del viaje.*/
#include <stdio.h>
#include <stdlib.h>


int main() {
    int viaje, peso, totalCor, totalLar;
    printf("Ingrese el tipo de viaje (1=corta distancia / 2=larga distancia): ");
    scanf("%d", &viaje);
    printf("Ingrese el peso en kilos: ");
    scanf("%d", &peso);
    totalCor = (1500) + (peso - 20) * 800;
    totalLar = 2000 + ((peso - 20) / 5)*800;
    if(viaje == 1) {
        if(peso >= 20) printf("Costo de viaje: $%d ", totalCor);
        else printf("Costo de viaje: $%d ", 1500);
    } else {
        if(peso >= 20) printf("Costo de viaje: $%d", totalLar);
        else printf("Costo de viaje: $%d", 2000);
    }
    return 0;
}

9.
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    char c1, c2, c3, car;
    printf("Ingrese tres caracteres: ");
    scanf("%c %c %c", &c1, &c2, &c3);
    
    if(c1 > c2) {
     car = c1;
     c1 = c2;
     c2 = car;
    }
    if(c2 > c3) {
      car = c2;
      c2 = c3;
      c3 = car;
    }
    printf("\nLetras ordenadas: %c %c %c", c1, c2, c3);
    return 0;
}

/* 10. Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una
operación (S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación
correspondiente, teniendo en cuenta que no se pueden realizar divisiones por cero.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, num2, total;
    char letra;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese la operación: (S=suma, R=Resta, M=multiplicacion, D=Division): ");
    scanf(" %c", &letra);
    
    switch(letra) {
          case 'S':
          case 's':
              total = num + num2;
          break;
          case 'R':
          case 'r':
              total = num - num2;
          break;
          case 'M':
          case 'm':
              total = num*num2;
          break;
          case 'D':
          case 'd':
          if(num2 == 0) printf("No se puede realizar la division por 0.");
          else total = num/num2;
          break;
          default:
              printf("\nIngrese una operación válida.");
    }
          
    printf("\nEl resultado de la operaciónes: %d", total);
    return 0;
}

/*11. Desarrollar un algoritmo que ingrese nombre y nota entera (entre 1 y 10) de un alumno
correspondiente al promedio obtenido, se pide mostrar el siguiente mensaje: "Juan
obtuve un sobresaliente", según el promedio: 10-Sobresaliente, 8 y 9-Distinguido, 6 y
7-Bueno, 4 y 5-Aprobado, 1,2,3-Reprobado.*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nota;
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su nota: ");
    scanf("%d", &nota);
    
    switch(nota) {
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
          printf("%s Aprobó",  nombre);
          break;          
          default:
          printf("%s Reprobó", nombre);
          break;
    }
    return 0;
}

/*12. Desarrollar un algoritmo que ingrese nombre y fecha de nacimiento como tres enteros
(DD, MM, AAAA), de una persona y mostrar por pantalla su nombre y su fecha de
nacimiento , de la siguiente forma "Carlos nació el 5 de marzo de 1973".*/

#include<stdio.h>
#include<stdlib.h>

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
    
    if ((mes < 1 || mes > 12) || (dia < 1 || dia > 31)) {
        printf("Error: La fecha %d/%d no es valida.\n", dia, mes);
        return 1;
    }
    
    printf("%s nació el %d de ", nombre, dia);
    
    switch (mes) {
        case 1:  printf("enero"); break;
        case 2:  printf("febrero"); break;
        case 3:  printf("marzo"); break;
        case 4:  printf("abril"); break;
        case 5:  printf("mayo"); break;
        case 6:  printf("junio"); break;
        case 7:  printf("julio"); break;
        case 8:  printf("agosto"); break;
        case 9:  printf("septiembre"); break;
        case 10: printf("octubre"); break;
        case 11: printf("noviembre"); break;
        case 12: printf("diciembre"); break;
    }
    
    printf(" del año %d", anio);
    return 0;
}

/*13. Desarrolle un algoritmo que ingrese los valores de los lados de un triángulo. Valide si
las medidas pueden formar un triángulo y luego indique a través de un mensaje que
tipo de triángulo es (EQUILÁTERO, ISÓSCELES, O ESCALENO).
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ladoA, ladoB, ladoC;
    printf("Ingrese lado A: ");
    scanf("%d", &ladoA);
    printf("Ingrese lado B: ");
    scanf("%d", &ladoB);
    printf("Ingrese lado C: ");
    scanf("%d", &ladoC);
    
    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) {
    if(ladoA == ladoB && ladoB == ladoC) printf("Los lados forman un EQUILATERO. ");
    else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC) printf("Los lados forman un ISOSCELES.  ");
    else printf("ESCALENO. ");
    } else {
          printf("Error debe ingresar numeros válido. ");
    }
    return 0;
}

14. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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


    switch(x) {
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
}

/*15. Construir un programa que ingrese un carácter y determine si es una vocal.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char letra;
    printf("Ingrese un caracter: ");
    scanf("%c", &letra);

    switch(letra) {
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
}
