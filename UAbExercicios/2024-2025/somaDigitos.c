#include <stdio.h>

int main()
{
    int n, soma = 0, numero;

    printf("Calculo da soma do quadrado dos digitos de um numero: \n");
    printf("Numero: ");
    scanf("%d", &numero);

    while (numero != 0)
    {
        n = numero % 10;
        soma += n * n;
        printf("  n=%d; soma=%d \n", numero, soma);
        numero -= n;
        numero /= 10;
    }
    printf("Resultado: %d", soma);
}