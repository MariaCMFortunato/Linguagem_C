#include <stdio.h>

#define TAMANHO 6

int Ganhou(char mapa[TAMANHO][TAMANHO])
{
    int i, j;
    for (i = 0; i < TAMANHO; i++)
    {
        for (j = 0; j < TAMANHO; j++)
        {
            if (mapa[i][j] = 'a' && (j + 1) % 6 == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void MoverBloco(char mapa[TAMANHO][TAMANHO], char jogada, char bloco, int *linha, int *coluna, int *vertical, int *tamanho)
{
    int i, j;
    if (isupper(jogada) && LocalizarBloco(mapa, bloco, &linha, &coluna, &vertical, &tamanho))
    {
    }
}
