#include <stdio.h>
#include <stdlib.h>

/**6. Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los
dos números es par*/
/*
int main() {
    int a, b, suma;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    suma = a + b;
    suma % 2 == 0 ? printf("La suma de %d y %d es PAR", a, b) : printf("La suma de %d y %d es IMPAR", a, b);
    return 0;
}
*/

/**7. Desarrollar un algoritmo que ingrese un número entero de cuatro dígitos e indique con
un mensaje si es capicua.*/
/*
int main() {
    int num, a, b, c, d;
    printf("Ingrese un n%cmero entero de cuatro digitos: ", 163);
    scanf("%d", &num);

    a = (num/1000);
    b = (num/100)%10;
    c = (num/10)%10;
    d = (num %10);

    a == d && b == c ? printf("El numero %d es CAPICUA", num) : printf("El numero %d NO ES CAPICUA", num);
    return 0;
}
*/
/**8. Una compañía dedicada a servicio de mensajería realiza envios al interior el costo fijo de traslado es de $1500 si es corta distancia y 2000 si es larga distancia, luego dependerá
del peso de la mercadería enviada, los de corta distancia si el peso supera los 20 kilos se le cobran $800 por cada kilo de exceso y los de larga distancia se le cobra $800,cada 5
kilos excedidos. Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el costo del viaje.*/
/*
int main()
{
    int viaje, peso, totalCor, totalLar;
    printf("Ingrese el tipo de viaje (1=corta distancia / 2=larga distancia): ");
    scanf("%d", &viaje);
    printf("Ingrese el peso en kilos: ");
    scanf("%d", &peso);
    totalCor = (1500) + (peso - 20) * 800;
    totalLar = 2000 + ((peso - 20) / 5)*800;
    if(viaje == 1)
    {
        if(peso >= 20)
            printf("Costo de viaje: $%d ", totalCor);
        else
            printf("Costo de viaje: $%d ", 1500);
    }
    else
    {
        if(peso >= 20)
            printf("Costo de viaje: $%d", totalLar);
        else
            printf("Costo de viaje: $%d", 2000);
    }
    return 0;
}
*/
/**9. Desarrollar un algoritmo que ingrese tres caracteres y mostrarlos ordenados según el orden ascendente del alfabeto.*/

/*
int main()
{
    char c1, c2, c3, car;
    printf("Ingrese tres caracteres: ");
    scanf("%c %c %c", &c1, &c2, &c3);

    if(c1 > c2)
    {
        car = c1;
        c1 = c2;
        c2 = car;
    }
    if(c2 > c3)
    {
        car = c2;
        c2 = c3;
        c3 = car;
    }
    printf("\nLetras ordenadas: %c %c %c", c1, c2, c3);
    return 0;
}
*/

/**10. Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una operación (S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación
correspondiente, teniendo en cuenta que no se pueden realizar divisiones por cero.*/

/*
int main() {

    int num, num2, total;
    char letra;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese la operaci%cn: (S=suma, R=Resta, M=multiplicacion, D=Division): ", 162);
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
              printf("\nIngrese una operaci%cn v%clida.", 162, 160);
    }

    printf("\nEl resultado de la operaci%cn: %d", 162, total);
    return 0;
}
*/
