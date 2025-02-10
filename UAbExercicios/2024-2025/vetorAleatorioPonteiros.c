#include <stdio.h>
#include <stdlib.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int *VectorAleatorio(int n, int base)
{
    int *vector = NULL, i = 0;
    vector = (int *)malloc(sizeof(int) * n);
    if (vector != NULL)
    {
        for (i = 0; i < n; i++)
            vector[i] = randaux() % base;
    }
    return vector;
}

void MostraVector(int *vector, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
}

int main()
{
    int *vector = NULL, n = 0, base = 0;

    printf("Dimensao: ");
    scanf("%d", &n);
    printf("Valor maximo: ");
    scanf("%d", &base);

    vector = VectorAleatorio(n, base);
    if (vector != NULL)
    {
        MostraVector(vector, n);
        free(vector);
    }
}