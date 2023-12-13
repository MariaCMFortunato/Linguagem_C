# include <stdio.h>
# include <string.h>

#define TAMANHO 1024

int strReplace( char *strBase, char *find, char * replace)
{
    char *ptr;
    int tamFind, tamReplace, i, contagem = 0;

    tamFind = strlen(find);
    if(tamFind == 0)
    {
        return contagem;
    }

    tamReplace = strlen(replace);

    ptr = strBase;
    while((ptr = strstr(ptr, find)) != NULL)
    {
        contagem++;

        if (tamFind >= tamReplace)
        {
            for(i = 0; i < tamReplace; i++)
            {
                ptr[i] = replace[i];
            }

            if(tamFind > tamReplace)
            {
                for (i = tamReplace; ptr[i + tamFind - tamReplace]; i++ )
                {
                    ptr[i] = ptr[i+ tamFind -tamReplace];
                }
                ptr[i] = 0;
            }
        }

        else
        {
            for(i = strlen(ptr); i > 0; i-- )
            {
                ptr[i - tamFind+ tamReplace] = ptr[i];
            }

            for(i = 0; i < tamReplace; i++)
            {
                ptr[i] = replace[i];
            }
        }
        ptr += tamReplace;

        printf(" %s\n", strBase);
    }
    return contagem;

}

int main()
{
    char strBase[TAMANHO], find[TAMANHO], replace[TAMANHO];

    printf("Substituir num texto, as ocorrencias de uma string A \
    por uma string B.\nTexto: ");
    fgets(strBase,TAMANHO,stdin);
    strBase[strlen(strBase) - 1] = 0;
    
    printf("String A: ");
    fgets(find, TAMANHO, stdin);
    find [strlen(find)-1] = 0;

    printf("String A: ");
    fgets(replace, TAMANHO, stdin);
    replace [strlen(replace)-1] = 0;

    printf("Resultado(%d trocas): %s \n", strReplace(strBase, find, replace), strBase);
}
