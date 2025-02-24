#include <stdio.h>

int main()
{
    int moedas1E = 0, moedas2E = 0, moedas50C = 0, moedas20C = 0;
    int moedas10C = 0, moedas5C = 0, moedas2C = 0, moedas1C = 0;
    float valor = 0;

    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", &valor);

    valor = (int)( valor * 100 + 0.5);

    while (valor > 0){
        if (valor >= 200){
            moedas2E++;
            valor -= 200;
        }
        else if (valor >= 100){
            moedas1E++;
            valor -= 100;
        }
        else if (valor >= 50){
            moedas50C++;
            valor -= 50;
        }
        else if (valor >= 20){
            moedas20C++;
            valor -= 20;
        }
        else if (valor >= 10){
            moedas10C++;
            valor -= 10;
        }
        else if (valor >= 5){
            moedas5C++;
            valor -= 5;
        }
        else if (valor >= 2){
            moedas2C++;
            valor -= 2;
        }
        else if (valor >= 1){
            moedas1C++;
            valor -= 1;
        }
    }
    if (moedas2E != 0){
        printf("\n2 euros: %d", moedas2E);
    }
    if (moedas1E != 0){
        printf("\n1 euro: %d", moedas1E);
    }
    if (moedas50C != 0){
        printf("\n50 centimos: %d", moedas50C);
    }
    if (moedas20C != 0){
        printf("\n20 centimos: %d", moedas20C);
    }
    if (moedas10C != 0){
        printf("\n10 centimos: %d", moedas10C);
    }
    if (moedas5C != 0){
        printf("\n5 centimos: %d", moedas5C);
    }
    if (moedas2C != 0){
        printf("\n2 centimos: %d", moedas2C);
    }
    if (moedas1C != 0){
        printf("\n1 centimo: %d", moedas1C);
    }
}