#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4
#define SIZE2 SIZE * SIZE * SIZE

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

// Função Baralhar da resolução de referência
void Baralhar(int v[], int n) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++) {
        j = i + randaux() % (n - i);
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}

int main() {
    int desperdicio, i = 0, j = 0, k = 0, l = 0, posicoes[64];
    char operacao[SIZE] = {'+', '-', '*', '/'};
    char numero[SIZE] = {'1', '2', '3', '4'};
    char letra[SIZE] = {'A', 'B', 'C', 'D'};
    char carta[SIZE2][SIZE];

    scanf("%d", &desperdicio);

    char entrada[12];
    scanf("%s", entrada);

    // Extrair os quatro números de dois dígitos da string de entrada
    int numeros[4];
    sscanf(entrada, "%2d %2d %2d %2d", &numeros[0], &numeros[1], &numeros[2], &numeros[3]);

    for (i = 0; i < desperdicio; i++) {
        randaux();
    }

    // Criação do baralho
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            for (k = 0; k < SIZE; k++) {
                carta[l][0] = operacao[i];
                carta[l][1] = numero[j];
                carta[l][2] = letra[k];
                carta[l][3] = '\0';
                l++;
            }
        }
    }

    // Criação da matriz de posições
    for (i = 0; i < SIZE2; i++)
        posicoes[i] = i;

    Baralhar(posicoes, SIZE2);

    // Impressão da matriz com os quatro números fornecidos
    printf("    [1] [2] [3] [4] [5] [6] [7] [8] \n");
    for (i = 0; i < 8; i++) {
        printf("[%d] ", (i + 1));
        k = i;
        while (k < SIZE2) {
            int linha = k / 8;
            int coluna = k % 8;

            // Verificar se a posição é uma das fornecidas pelos quatro números
            int numeroEncontrado = 0;
            for (int idx = 0; idx < 4; idx++) {
                if (posicoes[k] == numeros[idx]) {
                    numeroEncontrado = 1;
                    break;
                }
            }

            // Imprimir o caractere correspondente à posição
            if (numeroEncontrado) {
                printf("%s ", carta[posicoes[k]]);
            } else {
                printf("### ");
            }

            k += 8;
        }
        printf("\n");
    }

    return 0;
}