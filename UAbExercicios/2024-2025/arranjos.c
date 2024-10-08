#include <stdio.h>

int main()
{
    int N, R, i, arranjos;
    printf("Calculo dos arranjos de N, R a R: \n");

    printf("Indique N: ");
    scanf("%d", &N);

    printf("Indique R: ");
    scanf("%d", &R);

    if (N <= R || R == 0)
    {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
    }

    else
    {
        i = N - R + 1;
        arranjos = 1;

        while (i <= N)
        {
            arranjos *= i;
            printf("  i=%d; arranjos=%d\n", i, arranjos);
            i++;
        }
        printf("Resultado: %d", arranjos);
    }
}