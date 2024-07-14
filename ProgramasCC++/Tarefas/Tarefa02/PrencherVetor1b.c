#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[20];

    printf("\n");
    for(int i = 0; i < 20; i++){
        if (i%2 == 0) vet[i] = 20;
        else vet[i] = 10;
        printf(" %d - ",vet[i]);
    }
    printf("\n");
    printf("\n");
    return 0;
}