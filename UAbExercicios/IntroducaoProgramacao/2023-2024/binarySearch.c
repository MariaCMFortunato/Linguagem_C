#include <stdio.h>

#define MAXVECTOR 1000000

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

/* função auxiliar, procura num intervalo de a a b (inclusivé) */
int BinarySearch1(int v[], int limiteInf, int limiteSup, int elemento)
{
    if(limiteInf > limiteSup)
        return - 1;
    
    // testa o elemento do meio, e se for igual, retornar esta posição
    if(v[(limiteInf + limiteSup) / 2] == elemento)
        return(limiteInf + limiteSup) / 2;
    
    /* caso seja menor, chamar recursivamente esta função para o segmento
    da esquerda, c.c. chamar para o segmento da direita. */
    if(v[(limiteInf + limiteSup) / 2] < elemento)
        return BinarySearch1(v,(limiteInf + limiteSup) / 2 + 1, limiteSup, elemento);
    
    /* notar que não há necessidade de else nos ifs, dado que se está
    a retornar logo da função dentro dos ifs*/
    return BinarySearch1(v, limiteInf,(limiteInf + limiteSup) / 2 - 1, elemento);
}

int BinarySearch(int v[], int tamanho, int elemento)
{
    return BinarySearch1(v, 0, tamanho - 1, elemento);
}

void MergeSort2(int v[], int limiteInf, int meio, int limiteSup)
{
    static int aux[MAXVECTOR];
    int i, j, k;
    i = limiteInf;
    j = meio;
    k = limiteInf;
   
    while(k < limiteSup)
    {
        if(i < meio && (j >= limiteSup || v[i] <= v[j]))
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    
    }
    for(k = limiteInf; k < limiteSup; k++)
        v[k] = aux[k];
    
}


void MergeSort1(int v[], int limiteInf, int limiteSup)
{
    if(limiteSup - limiteInf < 2)
        return;

    MergeSort1(v, limiteInf,(limiteInf + limiteSup) / 2);
    MergeSort1(v,((limiteInf + limiteSup) / 2), limiteSup);

    MergeSort2(v, limiteInf,(limiteInf + limiteSup) / 2, limiteSup);
}


void MergeSort(int v[], int tamanho)
{
    MergeSort1(v, 0, tamanho);
}

int main()
{
    int i, n, k;
    static int v[MAXVECTOR];
    
    scanf("%d %d",&n, &k);
    n++;

    for(i = 0; i < MAXVECTOR; i++)
        v[i] = randaux() % n;

    MergeSort(v, MAXVECTOR);

    printf("%d", BinarySearch(v, MAXVECTOR, k));
}