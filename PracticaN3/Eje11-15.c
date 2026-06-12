/// 11. Desarrollar un algoritmo que escriba en pantalla todos los números pares comprendidos entre 1 y 50.

/*
int main() {

    int i;

    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) printf("%d\n", i);
    }

    return 0;
}
*/

/// 12. Desarrollar un algoritmo que ingrese dos números enteros, (primero < segundo), validar y muestre por pantalla los números del primer número al segundo.

/*
int main() {

    int i, num1, num2;

    do {
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("Ingrese el primer numero: ");
        scanf("%d", &num2);

        if(num1 >= num2) printf("Error: El primer numero debe ser menor al segundo numero. ");
    } while(num1 >= num2);

    if(num1 < num2) {
        for(i = num1; i <= num2; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}
*/

/// 13. Desarrollar un algoritmo que pida al usuario dos números y una letra: “I”, “i” ó “p”, “P”, luego mostrar en pantalla los pares (si se pulsó la “p”, “p”) ó impares (si se pulsó
/// la “i”, “I”), comprendidos entre el primer número y el segundo. Tener en cuenta que el primer número debe ser menor al segundo y validar que ingrese las letras correspondientes.

/*
int main()
{

    int i, num1, num2, contImpar = 0, contPar = 0;
    char letra;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese 'I' para impares o 'P' para pares: ");
    scanf(" %c", &letra);

    if(num1 < num2)
    {
        if(letra == 'i' || letra == 'I')
        {
            printf("Los numeros impares entre %d y %d son ", num1, num2);
            for(i = num1; i <= num2; i++)
            {
                if(i % 2 != 0)
                {
                    printf("%d ", i);
                }
                else if (letra != 'i' && letra != 'I' && letra != 'p' && letra != 'P')
                {
                    printf("\nError: La letra ingresada no es valida.");
                }
            }
        }
        if(letra == 'p' || letra == 'P')
        {
            printf("Los numeros pares entre %d y %d son ", num1, num2);
            for(i = num1; i <= num2; i++)
            {
                if(i % 2 == 0)
                {
                    printf("%d ", i);
                }
                else if (letra != 'i' && letra != 'I' && letra != 'p' && letra != 'P')
                {
                    printf("\nError: La letra ingresada no es valida.");
                }
            }
        }
    }
    return 0;
}
*/

/// 14.

/*
int main() {

    int cali1, cali2, cali3;
    float prom;
    char name[25];
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", name);
    printf("Ingrese la primera nota: ");
    scanf("%d", &cali1);
    printf("Ingrese la segunda nota: ");
    scanf("%d", &cali2);
    printf("Ingrese la tercera nota: ");
    scanf("%d", &cali3);


    prom = (cali1 + cali2 + cali3) / 3;

    if(prom >= 6) {

    }
    return 0;
}
*/

/// 15. Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 10 disparos, registrando las coordenadas (x, y) de cada disparo. Indicar
/// cuántos disparos se produjeron en cada cuadrante y cuantos dieron el el blanco.
// que se yo no lo termine y me estoy quedando sin OJOOOS

/*
int main()
{
    int x, y, i, j;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, blanco = 0, p = 1;

    for(i = 1; i <= 5; i ++)
    {
        printf("Participante: %d\n", i);
        for(j = 1; j <= 10; j++)
        {
            printf("Disparo %d (formato: x espacio y): ", p);
            scanf("%d %d", &x, &y);
            p++;

            if(x == 0 && y == 0)
                blanco++;
            else if(x > 0 && y > 0)
                c1++;
            else if(x < 0 && y > 0)
                c2++;
            else if(x < 0 && y < 0)
                c3++;
            else if(x > 0 && y < 0)
                c4++;
        }
    }

    printf("Disparos en Cuadrante 1 (+, +): %d\n", c1);
    printf("Disparos en Cuadrante 2 (-, +): %d\n", c2);
    printf("Disparos en Cuadrante 3 (-, -): %d\n", c3);
    printf("Disparos en Cuadrante 4 (+, -): %d\n", c4);
    printf("Cantidad de disparos que dieron en el blanco (0,0): %d", blanco);
    return 0;
}
*/
