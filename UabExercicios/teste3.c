#include <stdio.h>

#define MAXVECTOR 1000000

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void MergeSort2(int v[], int a, int meio, int b)
{
    static int aux[MAXVECTOR];
    int i, j, k;
    i = a;
    j = meio;
    k = a;
   
    while(k < b)
    {
        if(i < meio && (j >= b || v[i] <= v[j]))
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    
    }
    for(k = a; k < b; k++)
        v[k] = aux[k];
    
}


void MergeSort1(int v[], int a, int b)
{
    if(b - a < 2)
        return;

    MergeSort1(v, a,(a + b) / 2);
    MergeSort1(v,((a + b) / 2), b);

    MergeSort2(v, a,(a + b) / 2, b);
}


void MergeSort(int v[], int tamanho)
{
    MergeSort1(v, 0, tamanho);
}

int main()
{
    int i, n;
    /* keyword static força a que esta variável seja na realidade global,
    e mantem os valores entre chamadas da função. Neste caso é a função
    main, que não será chamada segunda vez, mas a keyword static permite
    que o compilador utilize outra zona de memória que não o stack. */
    static int v[MAXVECTOR];
    
    scanf("%d",&n);
    n++;

    //Inicializar o vetor com números aleatórios
    for(i = 0; i < MAXVECTOR; i++)
        v[i] = randaux() % n;
    MergeSort(v, MAXVECTOR);

    printf("%d %d %d", v[MAXVECTOR/4], v[MAXVECTOR/2], v[3*MAXVECTOR/4]);
}