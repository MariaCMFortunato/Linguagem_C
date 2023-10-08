#include <stdio.h>

int main()
{
    int n, i = 3, fib = 0, fib1 = 1, fib2 = 2;

    printf("Calculo do valor da funcao Fibonacci:\n Indique N: ");
    scanf("%d", &n);

    while(i <= n){
        fib= fib1 + fib2;
        printf("\nFib(%d)=%d", i, fib);

        fib1 = fib2;
        fib2 = fib;
        i++;
    }
    printf("\nResultado: %d", fib);
}