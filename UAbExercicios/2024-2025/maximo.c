#include <stdio.h>
#include <math.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int main()
{
    float v[1000], maximo;
    int n;

    printf("Indique o tamanho do vetor: ");
    scanf("%d", &n);
    n++;

    for (int i = 0; i < n; i++)
    {
        v[i] = -log((randaux() % 10000 + 1) / 10000.00);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%0.2f ", v[i]);
    }

    maximo = v[1];

    for (int i = 0; i < n; i++)
    {
        if (v[i] > maximo)
            maximo = v[i];
    }
    printf("\n%0.2f ", maximo);
}