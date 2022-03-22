#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[40];
    char cargo[40];
    int idade;
    float reajuste, gratificacao, desconto, salarioBruto, salarioLiquido;
  
    printf ("Insira o nome do Funcionario: ");
    fgets(nome, 40, stdin);
    printf("\n");

    printf ("Insira o cargo do Funcionario: ");
    fgets(cargo, 40, stdin);
    printf("\n");

    printf ("Insira a idade do Funcionario: ");
    scanf ("%d", &idade);
    printf("\n");

    printf ("Insira o salario bruto do Funcionario: ");
    scanf ("%f", &salarioBruto);
    printf("\n");

    reajuste = salarioBruto*0.15;
    salarioBruto = salarioBruto+reajuste;

    gratificacao = salarioBruto*0.1;
    salarioBruto = salarioBruto+gratificacao;

    desconto = salarioBruto*0.08;
    salarioLiquido = salarioBruto-desconto;
  
    printf("O nome do Funcionario e: %s\n", nome);
    printf("A idade do Funcionario e: %d\n", idade);
    printf("O cargo do Funcionario e: %s\n", cargo);
    printf("O salario bruto do Funcionario e: %f\n", salarioBruto);
    printf("O salario liquido do Funcionario e: %f\n", salarioLiquido);    
}
