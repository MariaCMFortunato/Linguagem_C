#include <stdio.h>
#include <stdlib.h>
 
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

typedef struct
{
   int n;
   int *valor;
}TVectorInt;

TVectorInt VectorAleatorio(int n, int base)
{
    TVectorInt vector;
    int i;
    vector.valor = (int*)malloc(sizeof(int)*n);
    if(vector.valor != NULL)
    {
        vector.n = n;
        for(i = 0; i < n; i++)
            vector.valor[i] = randaux() % base; 
    }
    else
    {
        vector.n = 0;
    }
    return vector;
}

void MostraVector(TVectorInt vector) 
{
    int i;
    for(i = 0; i < vector.n;i++)
    printf("%d ", vector.valor[i]);
}

int main()
{
    TVectorInt vector;
    int n,base;

    printf("Dimensao: ");
    scanf("%d",&n);
    
    printf("Valor maximo: ");
    scanf("%d",&base);
 
    vector=VectorAleatorio(n,base);
    if(vector.valor!=NULL)
    {
        MostraVector(vector);
        free(vector.valor);
    }
}