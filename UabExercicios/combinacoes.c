#include <stdio.h>

int main()
{
    int n=0, r=0, i=0, j = 1, produto=1;
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
        while( i <= n && j <= r){
            produto *= i;
            

            printf("\n%d * %d = %d / %d = %d", );
            i++;
        }
        printf("\nResultado: %d", arranjos); 
    }
       
}