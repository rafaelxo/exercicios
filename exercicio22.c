#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float s_minimo, q_kwt, v_kwt, conta, desconto, conta_desconto;
    printf("Insira o salario minimo e a quantidade de killowatts consumidos na sua residencia:\n");
    scanf("%f%f", &s_minimo, &q_kwt);
    v_kwt = s_minimo / 5;
    conta = v_kwt*q_kwt;
    desconto = conta*15/100.0;
    conta_desconto = conta - desconto;
    printf("\nO valor do killowatts, do desconto e da sua conta com e sem desconto sao, respectivamente:\n%f\n%f\n%f\n%f\n", v_kwt, desconto, conta, conta_desconto);
}
