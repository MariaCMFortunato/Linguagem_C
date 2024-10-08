#include <stdio.h>

int main() {
    int numero, i = 0, a = 0, b = 0, c = 0;

    printf("Escreva um numero para decompor em somas de tres parcelas.\nNumero: ");
    scanf("%d", &numero);

    a = numero - 2;
    while(a >= 1){
        for(b = 1; b < numero - 2; b++) {
               c = numero - a - b;
            if (c <= b && c > 0 && a >= b) {
                printf("  %d+%d+%d\n", a, b, c);
                i++;
            }
         
        }
        a--;
    }
    printf("Numero de somas: %d\n", i);
    return 0;
}





