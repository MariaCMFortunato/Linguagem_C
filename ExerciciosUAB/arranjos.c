#include <stdio.h>

int main()
{
    int n=0, r=0, i=0, arranjos=1;
    printf("\nCalculo dos arranjos de N, R a R:");
    printf("\nIndique N:");
    scanf("%d", &n);

    
    printf("Indique R:");
    scanf("%d", &r);

    if(r >= n || r == 0) {
        printf("Erro: N tem de ser maior que R e este maior que 0.\n");
        }

    else{
        i = n - r + 1;
        while( i <= n){
            arranjos *= i;
            printf(" \ni=%d; arranjos=%d", i, arranjos);
            i++;
        }
        printf("\nResultado: %d", arranjos); 
    }
       
}