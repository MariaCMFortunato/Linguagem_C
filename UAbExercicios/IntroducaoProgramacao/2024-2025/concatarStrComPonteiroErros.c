#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 255

char *Concatenar(char *str, char *str2)
{
    char *strConcatenada;
    /* duplicar str2 se str é nulo */
    if (str == NULL)
    {
        strConcatenada = (char *)malloc(strlen(str2) + 1);
        if (strConcatenada != NULL)
        {
            strcpy(strConcatenada, str2);
        }
    }
    else
    {
        strConcatenada = (char *)malloc(strlen(str) + strlen(str2) + 1);
        if (strConcatenada != NULL)
        {
            strcpy(strConcatenada, str);
            strcat(strConcatenada, str2);
            free(str);
        }
    }
    return strConcatenada;
}

int main()
{
    char *texto = NULL, str[MAXSTR];

    do
    {
        fgets(str, MAXSTR, stdin);
        str[strlen(str) - 1] = 0;
        texto = Concatenar(texto, str);
    } while (strlen(str) > 0);

    // printf("%s", texto);
    // string libertadfa
    free(texto);
    // atribuído valor NULL
    texto = NULL;
    // acede a uma posição de memória não alocada -- ERRO
    printf("%s", texto);
}