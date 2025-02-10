#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

/*Tipo de dados abstrato: TVectorInt*/
typedef struct
{
    int n, alocado;
    int *valor;
} TVectorInt;

TVectorInt VICriar()
{
    TVectorInt vector;
    vector.valor = NULL;
    vector.n = 0;
    vector.alocado = 0;
    return vector;
}

int VITamanho(TVectorInt *vector)
{
    return vector->n;
}

void VIInternoRealocar(TVectorInt *vector, int i)
{
    int k, *vectorAntigo;
    vectorAntigo = vector->valor;
    /*alocar o dobro quando necessário*/
    vector->valor = (int *)malloc(sizeof(int) * (i + 1) * 2);
    if (vector->valor != NULL)
    {
        for (k = 0; k < vector->n; k++)
        {
            vector->valor[k] = vectorAntigo[k];
        }

        vector->alocado = (i + 1) * 2;
        // vector->n = i + 1;
    }

    else
    {
        vector->alocado = 0;
        // vector->n = 0;
    }
    if (vectorAntigo != NULL)
    {
        free(vectorAntigo);
    }
}

void VIValorI(TVectorInt *vector, int i, int valor)
{
    /*acesso fora dos parâmetros realocar*/
    if (i >= vector->alocado)
    {
        VIInternoRealocar(vector, i);
    }

    if (i >= 0 && i < vector->alocado)
    {
        vector->valor[i] = valor;
        /*atualizar a dimensão lógica do vetor*/
        if (i >= vector->n)
        {
            vector->n = i + 1;
        }
    }
}

int VIValorO(TVectorInt *vector, int i)
{
    /*não alocar a realocação aqui, já que esta operação é de leitura
       e não de escrita*/
    if (i >= 0 && i < vector->n)
    {
        return vector->valor[i];
    }
    return 0;
}

void VILibertar(TVectorInt *vector)
{
    if (vector->valor != NULL)
    {
        free(vector->valor);
        vector->valor = NULL;
        vector->alocado = 0;
        vector->n = 0;
    }
}

/* Programa */

TVectorInt
VectorAleatorio(int n, int base)
{
    TVectorInt vector;
    int i;

    vector = VICriar();

    for (i = 0; i < n; i++)
        VIValorI(&vector, i, randaux() % base);

    return vector;
}

void MostraVector(TVectorInt *vector)
{
    int i;
    for (i = 0; i < VITamanho(vector); i++)
        printf("%d ", VIValorO(vector, i));
}

int main()
{
    TVectorInt vector;
    int n, base;
    clock_t instante;

    printf("Dimensao: ");
    scanf("%d", &n);
    printf("Valor maximo: ");
    scanf("%d", &base);

    instante = clock();
    vector = VectorAleatorio(n, base);
    if (n < 100)
        MostraVector(&vector);
    VILibertar(&vector);
    printf("Tempo (s): %.1g", (float)(clock() - instante) / CLOCKS_PER_SEC);
}