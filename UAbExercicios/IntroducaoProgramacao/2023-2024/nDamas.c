#include <stdio.h>

#define MAXDAMAS 16

int total;

void MostraDamas(int linhasDamas[MAXDAMAS], int n)
{
    int i, j;
    static int mostrar = 1;
    /* contar as posições e mostrar apenas a primeira vez */
    total++;
    if(mostrar == 0)
        return;
    
    mostrar = 0;
    
    printf("\n+");
    for(i = 0; i < n; i++)
        printf("---");

    printf("+");
    for(i = 0; i < n; i++)
    {
        printf("\n|");
        
        for(j = 0; j < linhasDamas[i]; j++)
            printf(" . ");
        
        printf(" # ");
        /* casas vazias à direita da dama desta linha */
        for(j = linhasDamas[i] + 1; j < n; j++)
            printf(" . ");
        /* barra vertical direita */
        printf("|");
    }
    /*barra horizontal inferior */
    printf("\n+");
    for(i = 0; i < n; i++)
        printf("---");
    printf("+");
}

void ColocarDamcolocara(int linhasDamas[MAXDAMAS], int coluna, int n)
{
    int i, j;
    /* percorrer todas as linhas para tentar colocar a dama */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < coluna; j++)
            if(linhasDamas[j] == i ||
                /* mesma linha */
                linhasDamas[j] + coluna - j == i ||
                /* mesma diagonal */
                linhasDamas[j] + j - coluna == i)
                break;
        /* se não houve uma parágem é porque esta linha i é possível */
        if(j == coluna)
        {
            linhasDamas[coluna] = i;
            /* mostrar as damas se esta é a última coluna,
            c.c. chamar recursivamente esta função para a coluna seguinte */
            if(coluna + 1 == n)
                MostraDamas(linhasDamas, n);
            else
                ColocarDama(linhasDamas, coluna + 1, n);
        }
        /* notar que mesmo após ter colocado uma dama na linha i,
        o algoritmo continua a explorar o i+1, e prossegue até n-1,
        explorando todas as hipótese possíveis. */
    }
}

int main()
{
    int n;
    int linhasDamas[MAXDAMAS];
    //printf("Conta quantas posicoes existem, num tabuleiro de NxN, ");
    //printf("para colocacao de N damas sem que estas se ataquem mutuamente.");
    printf("\nIndique N (maximo %d): ", MAXDAMAS);
    scanf("%d", & n);
    total = 0;
    ColocarDama(linhasDamas, 0, n);
    printf("\nTotal: %d\n", total);
}