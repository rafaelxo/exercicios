#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, quadrado, cubo;
    float r2, r3;
    printf("Digite um numero inteiro e positivo para realizar os calculos:\n");
    scanf("%d", &numero);
    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    r2 = pow(numero, 1.0/2.0);
    r3 = pow (numero, 1.0/3.0);
    printf("\nOs resultados do quadrado, cubo, raiz quadrada e raiz cubica do valor inserido e:\n%d\n%d\n%f\n%f\n", quadrado, cubo, r2, r3);

}
