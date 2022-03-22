#include <stdio.h>
#include <stdlib.h>

int main (){
    float lado1, lado2, area, perimetro;
    printf ("Insira o Lado 1 do Retangulo: ");
    scanf ("%f", &lado1);
    printf("\n");

    printf ("Insira o Lado 2 do Retangulo: ");
    scanf ("%f", &lado2);
    printf("\n");

    perimetro = lado1+lado2+lado1+lado2;
    area = lado1*lado2;

    printf("O Perimetro do Retangulo e: %.1f\n", perimetro);
    printf("A Area do Retangulo e: %.1f\n", area);
}