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
