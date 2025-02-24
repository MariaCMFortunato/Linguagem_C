#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *faxi, *nutr, *cons, *guar, *forr;
} TOperarias;

typedef struct
{
    int *rain, *zang;
    TOperarias operaria;
} TAbelhas;

typedef struct
{
    int *mel, *pol, *nec, *cri, *zan, *rea;
} TCelulas;

typedef struct
{
    TCelulas celula;
} TFavos;

typedef struct
{
    TFavos favos;
    TAbelhas Abelhas;
} TColmeia;

void CriarColmeia(TColmeia *colmeia)
{
    /*alocar memória a cada elemento da colmeia*/
    colmeia->Abelhas.operaria.faxi = malloc(sizeof(int));
    colmeia->Abelhas.operaria.nutr = malloc(sizeof(int));
    colmeia->Abelhas.operaria.cons = malloc(sizeof(int));
    colmeia->Abelhas.operaria.guar = malloc(sizeof(int));
    colmeia->Abelhas.operaria.forr = malloc(sizeof(int));
    colmeia->Abelhas.zang = malloc(sizeof(int));
    colmeia->Abelhas.rain = malloc(sizeof(int));

    /*inicialização com zero*/

    if (colmeia->Abelhas.operaria.faxi)
    {
        *(colmeia->Abelhas.operaria.faxi) = 0;
    }

    if (colmeia->Abelhas.operaria.nutr)
    {
        *(colmeia->Abelhas.operaria.nutr) = 0;
    }

    if (colmeia->Abelhas.operaria.cons)
    {
        *(colmeia->Abelhas.operaria.cons) = 0;
    }

    if (colmeia->Abelhas.operaria.guar)
    {
        *(colmeia->Abelhas.operaria.guar) = 0;
    }

    if (colmeia->Abelhas.operaria.forr)
    {
        *(colmeia->Abelhas.operaria.forr) = 0;
    }

    if (colmeia->Abelhas.zang)
    {
        *(colmeia->Abelhas.zang) = 0;
    }

    if (colmeia->Abelhas.rain)
    {
        *(colmeia->Abelhas.rain) = 0;
    }
}

void DistribuirAbelhas(TColmeia *colmeia, int n)
{
    int abelhasPorDia, nDist, distribuicao[5] = {0}, i, resto;

    abelhasPorDia = n / 40;
    nDist = abelhasPorDia / 5;
    resto = abelhasPorDia % 5;

    for (i = 0; i < 5; i++)
    {
        distribuicao[i] = nDist;
    }

    if (resto != 0)
    {
        for (i = 0; i < resto; i++)
        {
            distribuicao[i] = nDist + 1;
        }
    }
    *(colmeia->Abelhas.operaria.faxi) = distribuicao[0] * 40;
    *(colmeia->Abelhas.operaria.nutr) = distribuicao[1] * 40;
    *(colmeia->Abelhas.operaria.cons) = distribuicao[2] * 40;
    *(colmeia->Abelhas.operaria.guar) = distribuicao[3] * 40;
    *(colmeia->Abelhas.operaria.forr) = distribuicao[4] * 40;
    *(colmeia->Abelhas.zang) = 40;
    *(colmeia->Abelhas.rain) = 1;
}

void MostrarColmeia(TColmeia *colmeia)
{
    printf("Relatorio colmeia: \n");
    printf("fax nut con gua for zan rai ovo lar pup mel pol nec cri zan rea\n");
    printf("%3.d %3.d %3.d %3.d %3.d %3.d %3.d\n", *(colmeia->Abelhas.operaria.faxi),
           *(colmeia->Abelhas.operaria.nutr),
           *(colmeia->Abelhas.operaria.cons),
           *(colmeia->Abelhas.operaria.guar),
           *(colmeia->Abelhas.operaria.forr),
           *(colmeia->Abelhas.zang),
           *(colmeia->Abelhas.rain));
    printf("   Favo   0: \t\tcelulas vazias: \n\t\t\t\tusadas:");
}

void LibertarAbelhas(TColmeia *colmeia)
{
    /*libertar memória alocada*/
    free(colmeia->Abelhas.operaria.faxi);
    colmeia->Abelhas.operaria.faxi = NULL;
    free(colmeia->Abelhas.operaria.nutr);
    colmeia->Abelhas.operaria.nutr = NULL;
    free(colmeia->Abelhas.operaria.cons);
    colmeia->Abelhas.operaria.cons = NULL;
    free(colmeia->Abelhas.operaria.guar);
    colmeia->Abelhas.operaria.guar = NULL;
    free(colmeia->Abelhas.operaria.forr);
    colmeia->Abelhas.operaria.forr = NULL;
    free(colmeia->Abelhas.zang);
    colmeia->Abelhas.zang = NULL;
    free(colmeia->Abelhas.rain);
    colmeia->Abelhas.rain = NULL;
}

int main()
{
    int nAbelhas, nCelulas, minutos, temporadas;
    TColmeia colmeia;

    printf("Quantidade de abelhas: ");
    scanf("%d", &nAbelhas);
    printf("Quantidade de celulas: ");
    scanf("%d", &nCelulas);
    printf("Minutos por temporada: ");
    scanf("%d", &minutos);
    printf("Temporadas: ");
    scanf("%d", &temporadas);

    CriarColmeia(&colmeia);
    if (nAbelhas >= 200)
    {
        DistribuirAbelhas(&colmeia, nAbelhas);
    }
    MostrarColmeia(&colmeia);
    LibertarAbelhas(&colmeia);
}