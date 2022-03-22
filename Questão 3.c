#include <stdio.h>
#include <stdlib.h>

int main (){
    float Fahrenheit, Centigrado;
    printf ("Insira o valor do numero em Fahrenheit: ");
    scanf ("%f", &Fahrenheit);

    Centigrado = (0.55555555555555555555555555555556)*(Fahrenheit-32);
      
    printf("O valor de %f em Centigrado e: %f Fahrenheit\n", Fahrenheit, Centigrado);
}
