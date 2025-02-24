#include <stdio.h>
#include <math.h>

int main() {
    int K;

    // Obter o valor de K do usu�rio
    printf("Introduza K: ");
    scanf("%d", &K);

    printf("\nCalculo de coeficientes entre -%d e %d inteiros nao nulos, com ra�zes inteiras:\n", K, K);

    // Loop para o coeficiente 'a'
    for (int a = -K; a <= K; a++) {
        // Loop para o coeficiente 'b'
        for (int b = -K; b <= K; b++) {
            // Loop para o coeficiente 'c'
            for (int c = -K; c <= K; c++) {
                // Verificar se nenhum coeficiente � nulo
                if (a != 0 && b != 0 && c != 0) {
                    // Calcular o delta
                    double delta = b * b - 4 * a * c;

                    // Verificar se as ra�zes s�o reais
                    if (delta >= 0) {
                        // Verificar se as ra�zes s�o inteiras
                        if (sqrt(delta) == floor(sqrt(delta))) {
                            // Imprimir os coeficientes
                            printf("[%d %d %d] ", a, b, c);
                        }
                    }
                }
            }
        }
    }

    printf("\n");
    return 0;
}
