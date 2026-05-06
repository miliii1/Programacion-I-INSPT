#include<stdio.h>
#include<stdlib.h>
#include <string.h>

// Nombre y el promedio ed sus notas

int main(){

    char name[10];
    float num1 = 0, num2 = 0, num3 = 0;
    float prom;
    puts("Ingrese su nombre: ");
    gets(name);

    printf("Ingrese la primera nota: ");
    scanf("%f", &num1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &num2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &num3);

    prom = (num1+num2+num3) / 3;
    //printf("\nEl promedio de %s es: %.2f", name, prom);

    if (prom>=6)
    
        printf("\n %s Aprobo la materia :)", name);// Si quiero que aparezca el promedio de aprobado tambien 
        //("\nEl promedio de %s es: %.2f Aprobado!!!!! :)", name, prom); 

    else 

        printf("\nEl promedio de %s es: %.2f Desaprobado ;(", name, prom);
    

    return 0;

}
