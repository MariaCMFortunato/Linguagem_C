#include <stdio.h>
#include <string.h>

#define TAMANHO 1024

int strreplace(char *strBase, char *find, char *replace)
{
    char *ptr;
    int tamFind, tamReplace, i, contagem = 0;

    tamFind= strlen(find);

    if(tamFind== 0)
        return contagem;

    tamReplace = strlen(replace);

    ptr = strBase;
    while((ptr = strstr(ptr, find)) != NULL)//Enquanto houver ocorrências de find em str, continua o loop.
    {
        contagem++;
        /* substituir find por replace */
        if(tamFind>= tamReplace)
        {
            /* há espaço */
            for(i = 0; i < tamReplace; i++)
                ptr[i] = replace[i];
            if(tamFind> tamReplace)
            {
                /* reposicionar o resto da string */
                for(i = tamReplace; ptr[i + tamFind- tamReplace]; i++)
                    ptr[i] = ptr[i + tamFind- tamReplace];
                ptr[i] = 0;
            }
        }
        else
        {
            /* não há espaço, reposicionar o resto da string */
            for(i = strlen(ptr); i > 0; i--)
                ptr[i - tamFind+ tamReplace] = ptr[i];

            /* copiar o replace */
            for(i = 0; i < tamReplace; i++)
                ptr[i] = replace[i];
        }
        /* é importante que ptr avançe o tamanho do replace, para
        não efectuar substituições na própria substituição */
        ptr += tamReplace;
        /* mostrar operação */
        printf("  %s\n", strBase);
    }
    return contagem;
}

int main()
{
    char strBase[TAMANHO], find[TAMANHO], replace[TAMANHO];
    int contagem;
    printf("Substituir num texto, as ocorrencias de uma string A \
    por uma string B.\nTexto: ");
    fgets(strBase,TAMANHO,stdin);
    strBase[strlen(strBase)-1]=0;
    
    printf("String A: ");
    fgets(find,TAMANHO,stdin);
    find[strlen(find)-1]=0;
   
    printf("String B: ");
    fgets(replace,TAMANHO,stdin);
    replace[strlen(replace)-1]=0;

    contagem = strreplace(strBase, find, replace);
    printf("Resultado (%d trocas): %s\n", contagem, strBase);
}