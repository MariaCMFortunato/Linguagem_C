#include <stdio.h>

int main()
{
    int contador, i;
    for (i = 1; i < 10; i++)
    {
        for ( contador = 1; contador < 10;  contador ++)
        {
            printf("%d X % d =  %d \n", i, contador, i*contador);
        }
        printf("\n");
    }
    return 0;
}