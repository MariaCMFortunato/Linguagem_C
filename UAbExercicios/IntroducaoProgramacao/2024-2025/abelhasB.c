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

    colmeia->favos.celula.mel = malloc(sizeof(int));
    colmeia->favos.celula.pol = malloc(sizeof(int));
    colmeia->favos.celula.nec = malloc(sizeof(int));
    colmeia->favos.celula.cri = malloc(sizeof(int));
    colmeia->favos.celula.zan = malloc(sizeof(int));
    colmeia->favos.celula.rea = malloc(sizeof(int));

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

    if (colmeia->favos.celula.mel)
    {
        *(colmeia->favos.celula.mel) = 0;
    }
    if (colmeia->favos.celula.pol)
    {
        *(colmeia->favos.celula.pol) = 0;
    }
    if (colmeia->favos.celula.nec)
    {
        *(colmeia->favos.celula.nec) = 0;
    }
    if (colmeia->favos.celula.cri)
    {
        *(colmeia->favos.celula.cri) = 0;
    }
    if (colmeia->favos.celula.zan)
    {
        *(colmeia->favos.celula.zan) = 0;
    }
    if (colmeia->favos.celula.rea)
    {
        *(colmeia->favos.celula.rea) = 0;
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

int DistribuirCelulas(TColmeia *colmeia, int n)
{
    if (n > 0)
    {
        int favos, celulasPorFavo, nDist, distribuicao[4] = {0}, i, resto;
        favos = (n + 2999) / 3000;
        celulasPorFavo = n / favos;
        nDist = celulasPorFavo / 4;
        resto = celulasPorFavo % 4;

        for (i = 0; i < 4; i++)
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

        *(colmeia->favos.celula.mel) = distribuicao[0];
        *(colmeia->favos.celula.pol) = distribuicao[1];
        *(colmeia->favos.celula.nec) = distribuicao[2];
        *(colmeia->favos.celula.cri) = distribuicao[3];
        *(colmeia->favos.celula.zan) = 1;
        return favos;
    }
    else
    {
        return 0;
    }
}

void MostrarColmeia(TColmeia *colmeia, int favos)
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
    if (favos <= 0)
    {
        printf("   Favo   0: \t\tcelulas vazias: \n\t\t\t\tusadas:");
    }

    else
    {
        for (int i = 0; i < favos; i++)
        {
            printf("   Favo   %d: ", i);
            printf("\t\tcelulas vazias: \t    %3.d %3.d\n",
                   *(colmeia->favos.celula.cri),
                   *(colmeia->favos.celula.zan));
            printf("   \t\t\t\tusadas: %3.d %3.d %3.d\n",
                   *(colmeia->favos.celula.mel),
                   *(colmeia->favos.celula.pol),
                   *(colmeia->favos.celula.nec));
        }
    }
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

    free(colmeia->favos.celula.mel);
    colmeia->favos.celula.mel = NULL;
    free(colmeia->favos.celula.pol);
    colmeia->favos.celula.pol = NULL;
    free(colmeia->favos.celula.nec);
    colmeia->favos.celula.nec = NULL;
    free(colmeia->favos.celula.cri);
    colmeia->favos.celula.cri = NULL;
    free(colmeia->favos.celula.zan);
    colmeia->favos.celula.zan = NULL;
    free(colmeia->favos.celula.rea);
    colmeia->favos.celula.rea = NULL;
}

int main()
{
    int nAbelhas, nCelulas, minutos, temporadas;
    int favos;
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

    favos = DistribuirCelulas(&colmeia, nCelulas);

    MostrarColmeia(&colmeia, favos);
    LibertarAbelhas(&colmeia);
}