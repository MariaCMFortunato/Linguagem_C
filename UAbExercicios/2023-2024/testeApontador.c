#include <stdio.h>

int main() {
    int numero = 42;
    int *apontador_numero;  // Declaração de um apontador para int

    apontador_numero = &numero;  // Atribui o endereço de 'numero' ao apontador

    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", (void*)&numero);
    printf("Valor apontado por apontador_numero: %d\n", *apontador_numero);

    int numeros[] = {10, 20, 30, 40, 50};
    int *apontador_numeros = numeros;  // O nome do array é um apontador para o primeiro elemento

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(apontador_numeros + i));
    }

    int *dinamico = (int *)malloc(sizeof(int));  // Alocação dinâmica de memória
    *dinamico = 100;

    printf("Valor armazenado dinamicamente: %d\n", *dinamico);

    free(dinamico);  // Libertar memória alocada dinamicamente


    return 0;
}