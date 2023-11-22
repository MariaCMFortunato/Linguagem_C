#include <stdio.h>
#include <string.h>

/* definir o tamanho máximo de uma string em macros, para assim ser
fácil de alterar este valor sem ter de ver todo o código */
#define MAXSTR 255

void strinv(char *str)
{
    int i = 0;
    int tamanho = strlen(str);

    for(i = 0; i < tamanho / 2; i++){
           char aux = str[i];
           str[i] = str[tamanho - 1 - i];
           str[tamanho - 1 - i] = aux;
    }
}

int main()
{
    char str[MAXSTR];
    fgets(str,MAXSTR,stdin);
    str[strlen(str)-1]=0;
    strinv(str);
    printf("%s", str);
}
