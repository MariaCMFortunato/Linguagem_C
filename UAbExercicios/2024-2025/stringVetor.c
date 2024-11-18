#include <stdio.h>

int main()
{
    char str[10];
    int i;
    printf("Introduza uma string: ");
    fgets(str, 10, stdin);
    for (i = 0; str[i] != 0; i++)
    {
        printf("\nCaracter %d: %c", i, str[i]);
    }
}