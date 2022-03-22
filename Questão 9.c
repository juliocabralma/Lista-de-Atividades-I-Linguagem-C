#include <stdio.h>
#include <stdlib.h>

int main (){
    char nomeFuncionario[40];
    int quantDependentes;
    float salario, reajuste, salarioReajustado;
  
    printf ("Insira o nome do Funcionario: ");
    fgets(nomeFuncionario, 40, stdin);
    printf("\n");

    printf ("Insira o salario do Funcionario: ");
    scanf ("%f", &salario);  
    printf("\n");

    printf ("Insira a quantidade de dependentes do Funcionario: ");
    scanf ("%d", &quantDependentes);  
    printf("\n");

    printf("O nome do Funcionario e: %s\n", nomeFuncionario);

    printf("A quantidade de dependentes do Funcionario e: %d\n", quantDependentes);
  
    if(salario<2000 && quantDependentes>2){
      reajuste = 0.255*salario;
      salarioReajustado = salario+reajuste;
       printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else if(salario>2000 && quantDependentes==1){
      reajuste = 0.15*salario;
      salarioReajustado = salario+reajuste;
       printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else if(salario>2000 && quantDependentes==0){
      reajuste = 0.075*salario;
      salarioReajustado = salario+reajuste;
       printf("O salario reajustado do Funcionario e: %f\n", salarioReajustado);
    }
    else{
      printf("Sem reajuste salarial \n");
    }
}
