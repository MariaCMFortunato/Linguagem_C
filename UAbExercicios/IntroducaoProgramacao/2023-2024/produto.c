#include <stdio.h>

int main()
{
    int n, i, produto;

    printf("Calculo do produto dos primeiros N numeros.\nIndique N:");
    scanf("%d", & n);

    i = 1;
    produto = 1;
    while( i <= n){

        produto *= i; 
        
        printf("\nFactorial(%d) = %d", i, produto);
        i++;
    }
    printf("\nResultado: %d", produto);
}