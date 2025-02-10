#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 255

int main()
{
    char entrada[MAXIMO];
    char *pt;
    char *tokens[MAXIMO];
    int contador = 0, i;
    double soma = 0.0;

    // printf("Introduza os números a somar, separados por espaços:  ");

    fgets(entrada, MAXIMO, stdin);

    pt = (char *)strtok(entrada, " ");

    while (pt != NULL && contador < MAXIMO)
    {
        tokens[contador] = pt;
        contador++;

        pt = (char *)strtok(NULL, " ");
    }

    for (i = 0; i < contador; i++)
    {
        // printf("Token %d: %s\n", i, tokens[i]);
        soma += atof(tokens[i]);
    }
    printf("%.15g", soma);
}