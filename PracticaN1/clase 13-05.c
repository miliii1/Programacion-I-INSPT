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

//Ingresar la edad de una persona, indicar si es menor o mayor, USANDO TRUE FALSE (BOOL) QUE REMPLAZA IF (?, :) CONDICIONAL INLINE
//El ? introduce una condicion. Siempre tiene que haber dos posibilidades, no puede haber mas de una. 


#include <stdio.h>
#include <stdbool.h>

int main(){
    int edad;
    bool mayor,joven;


    printf("Ingrese la edad de la persona:");
    scanf ("%d", &edad);
    (edad>18)?printf("Es mayor"):printf("Es menor"); //edad es mayor a 18? si, true. Sino (:) false.
    



    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main(){
    int a,b,res;

    printf("Ingrese un numero ");
    scanf ("%d", &a);
    printf("Ingrese un numero ");
    scanf ("%d", &b);
    (a>b)?(res=a+b):(res=a-b);
    printf("La respueata es: %d", res);



    return 0;
} 



#include <stdio.h>
#include <stdbool.h>

int main(){
    int a,b,res;

    printf("Ingrese un numero ");
    scanf ("%d", &a);
    printf("Ingrese un numero ");
    scanf ("%d", &b);
    printf("La respuesta es: %d", (a>b)?(res=a+b):(res=a-b));



    return 0;
} 


// Ciclos:
//Sentencia definida (for): Se conocen la cantidad de veces que se va a repetir el ciclo. Sintaxis o forma general de un ciclo for:
//Si el ciclo esta bien definido usar for

#include <stdio.h>
int main (){

        for(int i=1;i<=10;i++)//digo que se va a incrementar uno en cada vuelta.//puedo definir la variable dentro del for.
        {
            printf(" %d",i);//i es la variable que esta en el ciclo for

        }




    return 0;

    //DEsarrollar un algoritmo que ingrese 20 numeros enteros. Y muestre por pantalla un pantalla en for 
//y calcule cantidad de positivos y negativos. 


#include <stdio.h>
#include <stdlib.h>

int main (){
        int num, pos=0, neg=0;
        for(int i=0;i<20;i++) {
            printf("Ingrese 20 numero: ");
            scanf("%d", &num);

              num > 0 ? pos++ : neg++;

        }
      
        printf("Se encuentran %d positivos y %d negativos", pos, neg);
        return 0;
    }

    }
//Ingresar la edad de una persona, indicar si es menor o mayor, 

#include <stdio.h>
#include <stdbool.h>

int main(){
    int a,b,res;

    printf("Ingrese un numero ");
    scanf ("%d", &a);
    printf("Ingrese un numero ");
    scanf ("%d", &b);
    printf("La respuesta es:%d", (a>b)?(res=a+b):(res=a-b));



    return 0;
} 

//Otro ejemplo de ciclos


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int i,j;

    for (i=0, j=10; i<5 && j>5; i++,j--) // 
    {
        printf("i = %d, j = %d\n", i, j);

    }
    return 0;
} 



