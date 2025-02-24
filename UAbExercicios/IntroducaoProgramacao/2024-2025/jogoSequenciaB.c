#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// Pedir e ler jogadas dos jogadores
void LerEntrada(char entrada[])
{
    printf("Indique uma sequencia de numeros inteiros positivos, terminando com 0: ");
    scanf(" %[^\n]", entrada);
}

// Separar a sequencia em números
void SeparaSerie(char entrada[], int serie[])
{
    int contador = 0;
    char *pt;

    // usar strtok para dividir a stringde entrada em tokens
    pt = strtok(entrada, " ");

    // enquanto houver tokens e o contador for menor que MAXIMO
    while (pt != NULL && contador < MAXIMO)
    {
        // converter token atual para inteiro e armazenar na sequência
        serie[contador] = atoi(pt);
        contador++;

        // obter o próximo token
        pt = strtok(NULL, " ");
    }
}

// Calcular a dimensão da sequência
int Dimensao(int serie[])
{
    int i, dimensao = 0;
    for (i = 0; serie[i] != 0; i++)
    {
        dimensao++;
    }
    return dimensao;
}

// valida cada jogada de acordo com as regras
void ValidaSerie(int serie[], int jogadas, int dimensao)
{
    int i, j, soma = 0, produto = 1, difAbsoluta = 0;

    for (i = 0; i < dimensao; i++)
    {
        soma += serie[i];
        produto *= serie[i];
        for (j = i + 1; j < dimensao; j++)
        {
            difAbsoluta += abs(serie[i] - serie[j]);
        }
    }
    // printf("\nSoma: %d \nProduto: %d \n Diferença Absoluta: %d ", soma, produto, difAbsoluta);
    if (soma > jogadas || produto < jogadas)
    {
        printf("Sequencia invalida");
    }
    else
    {
        if (difAbsoluta == jogadas)
        {
            printf("Sequencia vitoria");
        }
        else
        {
            printf("Sequencia valida");
        }
    }
}

int main()
{
    int serie[MAXIMO] = {0}, jogadas = 0, dimensao;
    char entrada[MAXIMO];

    printf("Indique K: ");
    scanf("%d", &jogadas);

    if (jogadas < 2 || jogadas > MAXIMO)
    {
        printf("K tem de ser entre 2 e 100.\n");
    }
    else
    {
        // serieInicial(serie, jogadas);

        LerEntrada(entrada);
        SeparaSerie(entrada, serie);
        dimensao = Dimensao(serie);
        // printf("\nDimensao: %d\n", dimensao);
        // ImprimirSerie(serie, dimensao);

        ValidaSerie(serie, jogadas, dimensao);
    }
}