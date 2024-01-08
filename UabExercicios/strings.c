#include <stdio.h>
 
int main()
{
    char str[10];
    int i;
 
    printf("Introduza uma string: ");
    fgets(str,10,stdin);
    /*Poderia ser gets(str); , mas perdia-se a possibilidade 
    de controlar o número de caracteres introduzidos*/
    
    for(i = 0; str[i] != 0; i++){
        printf("\nCaracter %d: %c", i, str[i]);
    }

}