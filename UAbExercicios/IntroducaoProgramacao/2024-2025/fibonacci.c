#include <stdio.h>

int main()
{
    int i, n, f1, f2, f3;
    printf("Calculo do valor da funcao Fibonacci: \n");
    printf("Indique N: ");
    scanf("%d", &n);

    if (n == 1 || n == 2)
    {
        f3 = 1;
        printf("  Fib(%d)=%d\n", n, f3);
    }
    else
    {
        f1 = 1;
        f2 = 2;
        i = 3;
        while (i <= n)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;

            printf("  Fib(%d)=%d\n", i, f3);
            i++;
        }
    }

    printf("Resultado: %d", f3);
}
