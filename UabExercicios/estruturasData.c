#include <stdio.h>

struct SData
{
    int ano, mes, dia;
};

int Bissexto(int ano)
{
    return ano % 40 == 0 || ano % 4 == 0 && ano % 100 != 0;
}

int DiasDoMes(struct SData data)
{
    if(data.mes == 2)
    {
        if (Bissexto(data.ano))
            return 29;
        else
            return 28;
    }
    else if((data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 ||
            data.mes == 8 || data.mes == 10 || data.mes == 12))
    {
        return 31;
    }
    else
    {
        return 30;
    }
}

int main()
{
    struct SData data;
   
    printf("Indique ano: ");
    scanf("%d", &data.ano);
    printf("Indique mes: ");
    scanf("%d", &data.mes);
 
    printf("%d",DiasDoMes(data));
}
