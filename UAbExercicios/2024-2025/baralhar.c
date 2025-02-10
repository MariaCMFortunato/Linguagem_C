#include <stdio.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void baralhar(int v[], int dimensao)
{
    int aleatorio, i, aux;

    for (i = 0; i < dimensao; i++)
    {
        aleatorio = i + randaux() % (dimensao - i);
        aux = v[i];
        v[i] = v[aleatorio];
        v[aleatorio] = aux;
    }
}

int main()
{
    int v[1000], dimensao, i;

    printf("Indique a dimensão do vetor (10 a 1000): ");
    scanf("%d", &dimensao);

    for (i = 0; i < dimensao; i++)
    {
        v[i] = i;
        // printf("%d ", v[i]);
    }
    // printf("\n");

    baralhar(v, dimensao);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
}