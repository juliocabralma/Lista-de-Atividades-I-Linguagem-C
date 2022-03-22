#include <stdio.h>
#include <stdlib.h>

int main (){
    char nomeAutomovel[40];
    float precoFabrica, impostos, percentagemRevendedor, precoFinal;
  
    printf ("Insira o nome do Automovel: ");
    fgets(nomeAutomovel, 40, stdin);
    printf("\n");

    printf ("Insira o preco de Fabrica do Automovel: ");
    scanf ("%f", &precoFabrica);  
    printf("\n");


    impostos = 0.45*precoFabrica;
    percentagemRevendedor = 0.28*precoFabrica;
    precoFinal = precoFabrica+impostos+percentagemRevendedor;
  
    printf("O nome do Automovel e: %s\n", nomeAutomovel);
    printf("O preco final do %s e: %.2f\n", nomeAutomovel, precoFinal);
}