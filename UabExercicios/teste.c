#include <stdio.h>
#include <math.h>

int main() {
    int K;
    double precision = 1e-17;  // Precis�o desejada
    double sum = 0.0;
    double pi_estimate;
    int k = 0;
    double factorial = 1.0;

    printf("Entre com o valor de K: ");
    scanf("%d", &K);

    while (1) {
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
/*Este programa calcula o valor de PI com base na f�rmula de Ramanujan. Ele solicita ao usu�rio um valor inteiro K, calcula a soma dos termos da s�rie at� que a precis�o desejada seja alcan�ada e, em seguida, exibe o valor estimado de PI com a precis�o cient�fica de 17 d�gitos. O programa utiliza um loop "while" para calcular a soma dos termos e controla a precis�o usando a vari�vel "precision".*/