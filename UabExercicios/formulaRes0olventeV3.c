#include <stdio.h>
#include <math.h>

int main() {
  // Declara��o das vari�veis
  int a, b, c, k;
  double delta, x1, x2;

  // Leitura do valor de k
  printf("Introduza k: ");
  scanf("%d", &k);

  // Loop externo para variar o coeficiente a
  for (a = -k; a <= k; a++) {
    // Loop intermedi�rio para variar o coeficiente b
    for (b = -k; b <= k; b++) {
      // Loop interno para variar o coeficiente c
      for (c = -k; c <= k; c++) {
        // Verifica��o se os coeficientes s�o n�o nulos
        if (a != 0 && b != 0 && c != 0) {
          // C�lculo do delta
          delta = b * b - 4 * a * c;

          // Verifica��o se o delta � n�o negativo
          if (delta >= 0) {
            // C�lculo das ra�zes
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            // Verifica��o se as ra�zes s�o inteiras
            if (is_integer(x1) && is_integer(x2)) {
              // Impress�o dos coeficientes
              printf("[%d %d %d]\n", a, b, c);
            }
          }
        }
      }
    }
  }

  return 0;
}

// Fun��o para verificar se um n�mero � inteiro
int is_integer(double x) {
  return (x == floor(x));
}