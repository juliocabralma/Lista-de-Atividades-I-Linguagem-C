#include <stdio.h>
#include <stdlib.h>

int main (){
    float N1, N2, N3, N4, EX, mediaPonderada, novaMedia;
  
   
    printf ("Insira a Nota 1: ");
    scanf ("%f", &N1);  
    printf("\n");

    printf ("Insira a Nota 2: ");
    scanf ("%f", &N2);  
    printf("\n");

    printf ("Insira a Nota 3: ");
    scanf ("%f", &N3);  
    printf("\n");

    printf ("Insira a Nota 4: ");
    scanf ("%f", &N4);  
    printf("\n");

    mediaPonderada = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    if(mediaPonderada>=7){
      printf("Aluno foi aprovado!\n");
    }
    else if(mediaPonderada<5){
      printf("Aluno foi reprovado!\n");
    }
    else if(mediaPonderada>=5 && mediaPonderada<7){
      printf ("Insira a nota do Exame EX: ");
      scanf ("%f", &EX);  
      novaMedia = (mediaPonderada+EX)/2;
      if(novaMedia>=7){
        printf("Aluno foi aprovado!\n");
      }
      else{
        printf("Aluno foi reprovado!\n");
      }
    }
}
