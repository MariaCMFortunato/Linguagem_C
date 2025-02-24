#include <stdio.h>

int main()
{
    int k, i = 1, n = 1;
    double aux = 1, e = 0.0;

    scanf("%d", &k);

    if (k != 0)
    {
        e = 1;
        while (n <= k)
        {
            i = 1;
            while (i <= n)
            {
                aux *= i;
                i++;
            }
            aux = 1 / aux;
            e += aux;
            aux = 1;
            n++;
        }
    }
    else
    {
        e = 1;
    }

    printf("%.16g", e);
}