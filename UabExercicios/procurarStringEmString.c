#include <stdio.h>
#include <string.h>
 
char *strstr1(char *find, char *str)
{
   int i;
   while(*str != 0){
       for(i = 0; str[i] != 0 && find[i] != 0 && find[i] == str[i]; i++);
       if (find[i] == 0)
            return str;
        str++;
   }
    return NULL;
}
 
int main()
{
    char str[]="percorrer toda a string str";
    char find[10];
    char *resultado;
 
    printf("Introduza a string de procura: ");
    fgets(find,10,stdin);
    find[strlen(find)-1]=0; /* remoção do caracter da mudança de linha */
    resultado=strstr1(find,str);
    printf("Resultado: %s\n",resultado);
}