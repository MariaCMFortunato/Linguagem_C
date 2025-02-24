#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Media(int n)
{
    float *valor;
    float media = 0, variancia = 0;
    int i;
    valor = (float *)malloc(sizeof(float) * n);

    if (valor != NULL)
    {
        /*introdução de valores*/
        for (i = 0; i < n; i++)
        {
            printf("Valor %d: ", i);
            scanf("%f", &valor[i]);
        }

        /* calculos */
        for (i = 0; i < n; i++)
            media += valor[i];
        media /= n;
        for (i = 0; i < n; i++)
            variancia += (media - valor[i]) * (media - valor[i]);
        variancia /= n;
        printf("Media: %g\n", media);
        printf("Desvio padrao: %g\n", sqrt(variancia));
        free(valor);
    }
    else
        printf("Memoria insuficiente para alocar %d elementos.\n",
               n);
}

int main()
{
    int n;

    printf("Quantos valores tem o vector: ");
    scanf("%d", &n);

    Media(n);
}