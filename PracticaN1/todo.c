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

 12. Determina la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus 
 dos catetos (tener en cuenta librería math.h). 

