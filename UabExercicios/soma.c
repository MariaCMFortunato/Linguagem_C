#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("\nCalculo da soma dos primeiros N numeros.");

    printf("\nIndique N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma += i;
        printf("\nadicionar %d, parcial %d", i, soma);
    }
    
    printf("\nTotal: %d", soma);
}