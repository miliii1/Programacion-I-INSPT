#include <stdio.h>
#include <stdlib.h>

// 3. El siguiente programa muestra por pantalla el resultado de la ecuación (a = b 2 + 1) para distintos valores de b a saber (0, 2). ¿Es correcto? Si considera que no lo es, resolverlo correctamente.


int main()
{
    int ecu, valor=0;
    ecu=valor*valor+1;
    printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);
    valor=2;
    ecu=valor*valor+1;
    printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);
    return 0;

}
