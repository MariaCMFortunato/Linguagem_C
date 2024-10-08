#include <stdio.h>
#include <math.h>

int main() {
  // Declaração das variáveis
  int a, b, c, k;
  double delta, x1, x2;

  // Leitura do valor de k
  printf("Introduza k: ");
  scanf("%d", &k);

  // Loop externo para variar o coeficiente a
  for (a = -k; a <= k; a++) {
    // Loop intermediário para variar o coeficiente b
    for (b = -k; b <= k; b++) {
      // Loop interno para variar o coeficiente c
      for (c = -k; c <= k; c++) {
        // Verificação se os coeficientes são não nulos
        if (a != 0 && b != 0 && c != 0) {
          // Cálculo do delta
          delta = b * b - 4 * a * c;

          // Verificação se o delta é não negativo
          if (delta >= 0) {
            // Cálculo das raízes
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            // Verificação se as raízes são inteiras
            if (is_integer(x1) && is_integer(x2)) {
              // Impressão dos coeficientes
              printf("[%d %d %d]\n", a, b, c);
            }
          }
        }
      }
    }
  }

  return 0;
}

// Função para verificar se um número é inteiro
int is_integer(double x) {
  return (x == floor(x));
}