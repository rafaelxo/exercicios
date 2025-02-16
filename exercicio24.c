#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float hora, conversao;
    int h, min;
    printf("Insira um horario formado por horas e minutos:\n");
    scanf("%f", &hora);
    h = (int) hora;
    min = (hora - h)*100;
    conversao = h*60 + min;
    printf("\nA conversao desse horario em minutos seria de:\n%f\n", conversao);
}
