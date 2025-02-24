#include <stdio.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int main()
{
    int jogos = 0, lancamentos = 0, pontos, i, j, dado, anterior, acumulado = 0;

    scanf("%d", &jogos);
    scanf("%d", &lancamentos);

    for (i = 0; i < jogos; i++)
    {
        pontos = 0;
        anterior = -1;

        for (j = 0; j < lancamentos; j++)
        {
            dado = randaux() % 6 + 1;
            printf("%d ", dado);

            if (dado == anterior)
            {
                pontos = -pontos;
                pontos += -dado;
                break;
            }

            pontos += dado;
            anterior = dado;
        }
        printf("Pontos: %d\n", pontos);
        acumulado += pontos;
    }
    printf("%d", acumulado);
}