#include <stdio.h>

int main()
{
    int ano, mes;
    FILE *f, *f2;
    f = stdin;
    f2 = stdout;
    // f = fopen("in.txt", "rt");
    // f2 = fopen("ou.txt", "wt");
    if (f == NULL || f2 == NULL)
    {
        return 0;
    }

    fscanf(f, "%d", &ano);
    fscanf(f, "%d", &mes);
    fclose(f);

    if (mes == 2)
    {
        /*teste de ano bissexto*/
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        {
            fprintf(f2, "29");
        }
        else
        {
            fprintf(f2, "28");
        }
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
             mes == 8 || mes == 10 || mes == 12)
    {
        fprintf(f2, "31");
    }
    else
    {
        fprintf(f2, "30");
    }
    fclose(f2);
}