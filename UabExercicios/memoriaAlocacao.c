#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAXSTR 255
 
char * Concatenar(char *str, char *str2)
{
    char *pt;
    if(str==NULL)
    {
        pt = (char *) malloc(strlen(str2)+1);
        if(pt != NULL)
        {
            strcpy(pt, str2);
        }
    }
    else
    {
        pt=(char *)malloc (strlen(str)+strlen(str2)+1);
        if (pt != NULL)
        {
            strcpy(pt,str);
            strcat(pt, str2);
            free(str);
        }
    }
    return pt;
}

int main()
{
    char *texto=NULL, str[MAXSTR];
    do {
        fgets(str,MAXSTR,stdin);
        str[strlen(str)-1]=0;
        texto=Concatenar(texto,str);
    } while(strlen(str)>0);
    free(texto);
    //texto=NULL;
    printf("%s",texto);
    
}