#include <stdio.h>

int Bissexto(int ano)
{
    return ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0;
}

int main()
{
    int ano;
    printf("Indique ano: ");
    scanf("%d", &ano);

    /* teste de ano bissexto */
    if (Bissexto(ano))
    {
        printf("Bissexto");
    }
    else
    {
        printf("Normal");
    }
}