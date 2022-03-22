#include <stdio.h>
#include <stdlib.h>

int main (){
    char nomeFuncionario[40];
    char categoria;
    float salario, reajuste, salarioReajustado;
  
    printf ("Insira o nome do Funcionario: ");
    fgets(nomeFuncionario, 40, stdin);
    printf("\n");

    printf ("Insira a categoria do Funcionario: ");
    scanf ("%c", &categoria);  
    printf("\n");

    printf ("Insira o salario do Funcionario: ");
    scanf ("%f", &salario);  
    printf("\n");

    printf("O nome do Funcionario e: %s\n", nomeFuncionario);
  
    if(categoria=='A' || categoria=='C' || categoria=='F' || categoria=='H'){
      reajuste = 0.1*salario;
      salarioReajustado = salario+reajuste;
      printf("A categoria do Funcionario e: %c\n", categoria);  
      printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);  
    }
    else if(categoria=='B' || categoria=='D' || categoria=='E' || categoria=='I' || categoria=='J' || categoria=='T'){
      reajuste = 0.15*salario;
      salarioReajustado = salario+reajuste;
      printf("A categoria do Funcionario e: %c\n", categoria);  
      printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else if(categoria=='K' || categoria=='R'){
      reajuste = 0.25*salario;
      salarioReajustado = salario+reajuste;
      printf("A categoria do Funcionario e: %c\n", categoria);  
      printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else if(categoria=='L' || categoria=='M' || categoria=='N' || categoria=='O' || categoria=='P' || categoria=='Q' || categoria=='S'){
      reajuste = 0.35*salario;
      salarioReajustado = salario+reajuste;
      printf("A categoria do Funcionario e: %c\n", categoria);  
      printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else if(categoria=='U' || categoria=='V' || categoria=='X' || categoria=='Y' || categoria=='W' || categoria=='Z'){
      reajuste = 0.5*salario;
      salarioReajustado = salario+reajuste;
      printf("A categoria do Funcionario e: %c\n", categoria);  
      printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else{
      printf("Categoria inexistente\n"); 
    }
}