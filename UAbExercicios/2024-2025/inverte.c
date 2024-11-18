#include <stdio.h>
#include <string.h>
#define MAXIMO 255

void InverteCadeia(char *cadeia)
{
    int tamanho = 0, i;
    char aux;
    tamanho = strlen(cadeia) - 1;
    for (i = 0; i <= (tamanho / 2); i++)
    {
        aux = cadeia[i];
        cadeia[i] = cadeia[tamanho - i];
        cadeia[tamanho - i] = aux;
    }
}

int main()
{
    char cadeia[MAXIMO];

    // printf("Indique a cadeia de carcateres a inverter: ");
    fgets(cadeia, MAXIMO, stdin);
    cadeia[strlen(cadeia) - 1] = 0;
    InverteCadeia(cadeia);
    printf("%s", cadeia);
}