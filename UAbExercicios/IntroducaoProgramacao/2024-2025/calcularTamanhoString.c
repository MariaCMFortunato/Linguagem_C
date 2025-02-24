#include <stdio.h>

int strlen1(char str[])
{
    int i;
    for (i = 0; str[i] != 0; i++)
        ;
    return i;
}

int main()
{
    char str[10];
    printf("Introduza uma string: ");
    fgets(str, 10, stdin);
    printf("A string '%s', tem %d caracteres. ", str, strlen1(str));
}