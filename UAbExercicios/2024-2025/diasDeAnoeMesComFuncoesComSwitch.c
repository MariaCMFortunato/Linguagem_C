#include <stdio.h>

int Bissexto(int ano)
{
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}

int DiasDoMes(int mes, int ano)
{
    switch (mes)
    {
    case 2:
        /* teste de ano bissexto*/
        if (Bissexto(ano))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    default:
        return 30;
    }
}

int main()
{
    int ano, mes;
    printf("Indique ano: ");
    scanf("%d", &ano);
    printf("Indique mes: ");
    scanf("%d", &mes);

    printf("%d", DiasDoMes(mes, ano));
}