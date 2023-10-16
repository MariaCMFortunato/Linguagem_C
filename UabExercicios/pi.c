#include <stdio.h>
#include <math.h>

int main() {
    int K, n = 0, n2, produto = 1;
    double numerador = 0, denominador = 0, termo = 0, soma = 0;
    double estiamtivaPI = 0, fatorial = 1;

    printf("Indique o valor de K: ");
    scanf("%d", &K);

            while (n <= K) {
            n2 = 4 * n;
        
            while (n2 > 0){
                produto *= n2;
                n2--;
            }
            
            numerador = produto * (1103 + 26390 * n);
            
            while (n > 0){
                fatorial *= n;
                n--;
            }
            
            denominador = pow(fatorial, 4) * pow(396, 4 * n);
            
            termo = numerador / denominador;
            
            soma += termo;
            n++;
        } 

    estiamtivaPI = 1.0 / (2.0 * sqrt(2.0) / 9801 * soma);

    printf("\n%.16lf\n", estiamtivaPI);

    return 0;
}