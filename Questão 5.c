#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[40];
    int horasTrabalhadas, numeroDependentes;
    float descontoInss, descontoIR, salarioBruto, salarioLiquido;
  
    printf ("Insira o nome do Funcionario: ");
    fgets(nome, 40, stdin);
    printf("\n");

    printf ("Insira o numero de horas trabalhadas do Funcionario: ");
    scanf ("%d", &horasTrabalhadas);
    printf("\n");

    printf ("Insira o numero de dependentes do Funcionario: ");
    scanf ("%d", &numeroDependentes);
    printf("\n");

    salarioBruto = 25*horasTrabalhadas;
    salarioBruto = salarioBruto+(40*numeroDependentes);

    descontoInss = 0.065*salarioBruto;
    descontoIR = 0.1*salarioBruto;

    salarioLiquido = salarioBruto-descontoInss-descontoIR;
  
    printf("O nome do Funcionario e: %s\n", nome);
    printf("O salario bruto do Funcionario e: %f\n", salarioBruto);
    printf("O desconto do INSS do Funcionario foi: %f\n", descontoInss);
  printf("O desconto do IR do Funcionario foi: %f\n", descontoIR);
    printf("O salario liquido do Funcionario e: %f\n", salarioLiquido);    
}
