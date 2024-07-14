#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[20];

    printf("\n");
    for(int i = 0; i < 20; i++){
        vet[i] = i+1;
        printf(" %d - ",vet[i]);
    }
    printf("\n");
    printf("\n");
    return 0;
}