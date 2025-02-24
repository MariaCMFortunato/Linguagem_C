#include <stdio.h>
#include <math.h>
 
#define MAXVECTOR 10
 
int main()
{
    float valor[MAXVECTOR];
    float media=0,variancia=0;
    int i,n;
 
    printf("Quantos valores tem o vector: ");
    scanf("%d",&n);
    if(n<=0 || n>MAXVECTOR)
    {
        printf("Programa compilado para permitir no maximo %d elementos.\n", MAXVECTOR);
        return 0;
    }
 
    /* introdução de valores */
    /* calculos */
    for(i = 0; i < n; i++)
    {
        printf("Valor %d: ", i);
        scanf("%f", &valor[i]);
        media += valor[i];
    }
    media /= n;
    
    for(i = 0; i < n; i++)
    {
        variancia += (media - valor[i])*(media - valor[i]);
    }
    variancia /= n;
    
    printf("Media: %g\n",media);
    printf("Desvio padrao: %g\n",sqrt(variancia));
}