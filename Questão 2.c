#include <stdio.h>
#include <stdlib.h>

int main (){
    float x, y, funcao;
    printf ("Insira o valor de x: ");
    scanf ("%f", &x);
    printf("\n");

    printf ("Insira o valor de y: ");
    scanf ("%f", &y);
    printf("\n");

    funcao = 3*x+(4*(y*y));
    
   printf("O valor da funcao e: %.1f\n", funcao);
}