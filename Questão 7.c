#include <stdio.h>
#include <stdlib.h>

int main (){
    char nomeNadador[40];
    int idadeNadador;  
    float precoFabrica, impostos, percentagemRevendedor, precoFinal;
  
    printf ("Insira o nome do Nadador: ");
    fgets(nomeNadador, 40, stdin);
    printf("\n");

    printf ("Insira a idade do Nadador: ");
    scanf ("%d", &idadeNadador);  
    printf("\n");

    printf("O nome do Nadador e: %s\n", nomeNadador);
  
    if(idadeNadador>=5 && idadeNadador<=7){
      printf("A categoria do Nadador e: Infantil A\n");  
    }
    else if(idadeNadador>=8 && idadeNadador<=10){
      printf("A categoria do Nadador e: Infantil B\n"); 
    }
    else if(idadeNadador>=11 && idadeNadador<=13){
      printf("A categoria do Nadador e: Juvenil A\n"); 
    }
    else if(idadeNadador>=14 && idadeNadador<=17){
      printf("A categoria do Nadador e: Juvenil B\n"); 
    }
    else{
      printf("Categoria inexistente\n"); 
    }
}