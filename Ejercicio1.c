#include <stdio.h>
#include <stdlib.h>
#define valor 6

int main()
{
    int var1, var2=1;
    float var3;
    var1=3/2+10-3;
    var3=3.0/2.0+10-3;
    printf ("%d -- %.2f\n", var1, var3); // 8 -- 8.50
    printf ("%d\n", valor*3+1/2); // 18
    printf ("%d\n", 5+2-1>5); // 1
    printf ("%d\n", 3>1 || valor*2<1); // 1
    printf ("%d\n", 5!=1 && valor>2); // 1
    printf ("%d\n", var1+var2<=var3); // 0
    
    return 0;
}


