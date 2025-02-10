#include <stdio.h>

#define MAX_SIZE 100

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void GerarMundo(int mundo[MAX_SIZE][MAX_SIZE], int L, int C)
{
    int i, j;
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++)
            mundo[i][j] = randaux() % 5 - 2;
}

void NovoMundo(int novo[MAX_SIZE][MAX_SIZE], int antigo[MAX_SIZE][MAX_SIZE], int L, int C)
{
    int i, j;
    for (i = 0; i < L; i++)
        for (j = 0; j < C; j++)
            novo[i][j] = Saude(antigo, L, C, i, j);
}
