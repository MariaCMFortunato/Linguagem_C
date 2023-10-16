#include <stdio.h>
#include <math.h>

int main() {
    int K;
    double precision = 1e-17;  // Precisão desejada
    double sum = 0.0;
    double pi_estimate = 0.0;
    int k = 0;
    double factorial = 1.0;

    printf("Entre com o valor de K: ");
    scanf("%d", &K);

    while (k <= K) {
        double numerator = (double)(4 * k) * (1103 + 26390 * k);
        double denominator = pow(factorial, 4) * pow(396, 4 * k);
        double term = numerator / denominator;

        if (term < precision) {
            break;
        }

        sum += term;
        factorial *= (k + 1);
        k++;
    }

    pi_estimate = 1.0 / (2.0 * sqrt(2.0) / 9801 * sum);

    printf("%.17lf\n", pi_estimate);

    return 0;
}
/*Este programa funciona da mesma forma que o programa anterior, calculando o valor de PI com base na fórmula de Ramanujan, usando um loop "while" para calcular a soma dos termos até que a precisão desejada seja alcançada. Ele exibe o valor estimado de PI com precisão científica de 17 dígitos.*/