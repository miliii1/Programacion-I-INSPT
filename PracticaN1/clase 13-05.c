//Crear un menu que indique los dias de la semana e indicar si es dia habil o fin de semana.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int dia ;
    printf( "\n1: Lunes, \n2: Martes, \n3: Miercoles, \n4:Jueves, \n5:Viernes, \n6: Sabado, \n7: Domingo: \n\nIngrese un dia de la semana:");
    scanf("%d", &dia); 

    if (dia<6)
    {
        printf( "Corresponde a un dia habil");
        
    } else {

        printf("Corresponde al fin de semana");


    }

    return 0;
    

}

//Ingresar la edad de una persona, indicar si es menor o mayor, 

#include <stdio.h>
int main(){
    int edad,mayor,joven;

    printf("Ingrese la edad de la persona:");
    scanf ("%d", &edad);
    mayor=(edad>18);
    joven=(edad>=15)&&(edad<=18);
    
    if (mayor)//if(mayor!=0)//if (mayor!=false)
        printf("Es adulto");
    else 
        if (joven) 
            printf("Es adolescente");
    else
        printf("Es chiquito");


    return 0;
}
