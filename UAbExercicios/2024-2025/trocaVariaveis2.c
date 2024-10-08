#include <stdio.h>

int main()
{
    /*Declaração de duas variáveis inteiras*/
    int x = 3, y = 7;

    /*troca o valor de x com y */
    x = x + y;
    y = x - y;
    x = x - y;

    /*mostrar os valores em x e em y*/
    printf("x: %d, y: %d", x, y);
}
