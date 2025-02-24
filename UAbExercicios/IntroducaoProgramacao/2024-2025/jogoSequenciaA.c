#include <stdio.h>

#define MAXIMO 100

// Imprimir as diversas sequências
void ImprimirSerie(int serie[], int dimensao)
{
    int i;
    printf("Sequencia: ");
    for (i = 0; i < dimensao; i++)
    {
        printf("%d ", serie[i]);
    }
}

// Gerar a sequência inicial
void serieInicial(int serie[], int jogadas)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        serie[i] = jogadas / 2;
    }
    ImprimirSerie(serie, 2);
}

int main()
{
    int serie[MAXIMO], jogadas = 0;

    printf("Indique K: ");
    scanf("%d", &jogadas);

    if (jogadas < 2 || jogadas > MAXIMO)
    {
        printf("K tem de ser entre 2 e 100.\n");
    }
    else
    {
        serieInicial(serie, jogadas);
    }
}