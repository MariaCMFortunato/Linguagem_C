#include <stdio.h>

int main()
{
    int contador, i;
    for (i = 1; i < 10; i++)
    {
        printf("Tabuada do %d", i);
        printf("\n");
        for ( contador = 1; contador < 10;  contador ++)
        {
            printf("%d X % d =  %d \n", i, contador, i*contador);
        }
        printf("\n");
    }
    return 0;
}