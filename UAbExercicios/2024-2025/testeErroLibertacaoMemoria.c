#include <stdio.h>
#include <stdlib.h>

int main()
{
    // free(NULL);
    printf("Libertacao ok");
    int vector[10];
    free(vector);
    printf("Libertacao ok");
}