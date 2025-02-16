#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, salario_novo, gratificacao, imposto;
    printf("Digite o salario atual do funcionario:\n");
    scanf("%f", &salario);
    gratificacao = salario*5/100.0;
    imposto = salario*7/100.0;
    salario_novo = salario + gratificacao - imposto;
    printf("\nO novo salario deste funcionario sera de:\n%f\n", salario_novo);
}
