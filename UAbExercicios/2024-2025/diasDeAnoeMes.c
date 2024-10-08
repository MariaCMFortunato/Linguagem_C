#include <stdio.h>

int main()
{
    int ano, mes;
    printf("Indique ano: ");
    scanf("%d", &ano);

    printf("Indique mes: ");
    scanf("%d", &mes);

    if (mes == 2)
    {
        /* teste de ano bissexto*/
        if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
            printf("29");
        else
            printf("28");
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
             mes == 8 || mes == 10 || mes == 12)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }
}