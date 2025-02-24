#include <stdio.h>
#include <stdlib.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}
/*Tipo de dados abstrato: TVectorInt*/
typedef struct
{
    int n;
    int *valor;
} TVectorInt;

TVectorInt VICriar(int n)
{
    TVectorInt vector;
    vector.valor = (int *)malloc(sizeof(int) * n);
    if (vector.valor != NULL)
    {
        vector.n = n;
    }
    else
    {
        vector.n = 0;
    }

    return vector;
}

int VITamanho(TVectorInt vector)
{
    return vector.n;
}

void VIValorI(TVectorInt vector, int i, int valor)
{
    if (i >= 0 && i < vector.n)
    {
        vector.valor[i] = valor;
    }
}

int VIValorO(TVectorInt vector, int i)
{
    if (i >= 0 && i < vector.n)
    {
        return vector.valor[i];
    }
    return 0;
}

void VILibertar(TVectorInt *vector)
{
    if (vector->valor != NULL)
    {
        free(vector->valor);
        vector->valor = NULL;
        vector->n = 0;
    }
}

/* Programa */

TVectorInt VectorAleatorio(int n, int base)
{
    TVectorInt vector;
    int i;

    vector = VICriar(n);

    for (i = 0; i < VITamanho(vector); i++)
        VIValorI(vector, i, randaux() % base);

    return vector;
}

void MostraVector(TVectorInt vector)
{
    int i;
    for (i = 0; i < VITamanho(vector); i++)
        printf("%d ", VIValorO(vector, i));
}

int main()
{
    TVectorInt vector;
    int n, base;

    // printf("Dimensao: ");
    scanf("%d", &n);
    // printf("Valor maximo: ");
    scanf("%d", &base);
    vector = VectorAleatorio(n, base);
    MostraVector(vector);
    VILibertar(&vector);
}