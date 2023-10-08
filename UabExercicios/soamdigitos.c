#include <stdio.h>

int main()
{
    int n = 0, modulo = 0, soma = 0;

    printf("Calculo da soma do quadrado dos digitos de um numero:\nNumero: ");
    scanf("%d", &n);


    while (n != 0){
        modulo = n % 10;
        soma += modulo * modulo;
        printf("\n n=%d; soma=%d", n, soma);
        n /= 10;
    }

    printf("\nResultado: %d", soma);

}