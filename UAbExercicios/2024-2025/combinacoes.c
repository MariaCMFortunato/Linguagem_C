#include <stdio.h>

int main()
{
    int N, R, i, j = 1, denominador = 1, numerador = 1, combinacao = 1;

    printf("Calculo das combinacoes de N, R a R: \n");
    printf("Indique N: ");
    scanf("%d", &N);
    printf("Indique R: ");
    scanf("%d", &R);

    i = N - R + 1;
    while (i <= N)
    {
        while (j <= R)
        {
            combinacao = numerador * i;
            denominador = combinacao;
            denominador /= j;
            printf("  %d*%d=%d, %d/%d=%d \n", numerador, i, combinacao, combinacao, j, denominador);
            numerador = denominador;
            j++;
            i++;
        }
    }
    printf("Resultado: %d", denominador);
}