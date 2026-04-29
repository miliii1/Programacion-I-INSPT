#include<stdio.h>

int main(){
    
    int num;
    printf ("Ingresar un numero:\n");
    scanf ("%d", &num);

    printf ("%d\n",num/100);
    printf ("%d\n",(num/10)%10);
    printf ("%d",num%10);

    return 0;

}