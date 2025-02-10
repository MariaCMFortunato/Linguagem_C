#include <stdio.h>

#define MAXVECTOR 1000000

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int main()
{
    int i, n;
    /* keyword static força a que esta variável seja na realidade global,
    e mantem os valores entre chamadas da função. Neste caso é a função
    main, que não será chamada segunda vez, mas a keyword static permite
    que o compilador utilize outra zona de memória que não o stack. */
    static int v[MAXVECTOR];

    scanf("%d", &n);
    n++;

    for (i = 0; i < MAXVECTOR; i++)
    {
        v[i] = randaux() % n;
    }

    MergeSort(v, MAXVECTOR);

    printf("%d %d %d", v[MAXVECTOR / 4], v[MAXVECTOR / 2], v[3 * MAXVECTOR / 4]);
}