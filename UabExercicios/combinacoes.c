#include <stdio.h>

int main()
{
    int n=0, r=0, i=0, j = 0, arranjo = 0, produto=1, combinacoes = 0;
    printf("\nCalculo das combinacoes de N, R a R:");
    printf("\nIndique N:");
    scanf("%d", &n);

    
    printf("Indique R:");
    scanf("%d", &r);

    if(r >= n || r == 0) {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
        }

    else{
        i = n - r + 1;
        j=1;
        while( i <= n){
            while(j <= r)  {
                arranjo = produto * i;
                combinacoes = arranjo/j;
                printf("\n%d*%d=%d, %d/%d=%d", produto, i, arranjo, arranjo, j, combinacoes);
                i++;
                j++;
                produto = combinacoes;
            } 
             
        }
        printf("\nResultado: %d", combinacoes); 
    }
       
}