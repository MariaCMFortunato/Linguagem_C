#include <stdio.h>

int main()
{
    int k, i, aux, n;
    double e;

    scanf("%d", &k);

    while (n <= k)
    {
        aux = 1;
        i = 1;
        while (i <= n)
        {
            aux *= i;
            i++;
            printf("aux: %d - i: %d ", aux, i);
        }
        aux = 1 / aux;
        e += aux;
        n++;
    }
    printf("%.16g", e);
}