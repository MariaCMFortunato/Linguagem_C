#include <stdio.h>

void troco(int nmoedas[], float valor)
{
    int centavos = valor * 100 + 0.5;
    while (centavos > 0)
    {
        if (centavos >= 200)
        {
            nmoedas[0]++;
            centavos -= 200;
        }
        else if (centavos >= 100)
        {
            nmoedas[1]++;
            centavos -= 100;
        }
        else if (centavos >= 50)
        {
            nmoedas[2]++;
            centavos -= 50;
        }
        else if (centavos >= 20)
        {
            nmoedas[3]++;
            centavos -= 20;
        }
        else if (centavos >= 10)
        {
            nmoedas[4]++;
            centavos -= 10;
        }
        else if (centavos >= 5)
        {
            nmoedas[5]++;
            centavos -= 5;
        }
        else if (centavos >= 2)
        {
            nmoedas[6]++;
            centavos -= 2;
        }
        else if (centavos >= 1)
        {
            nmoedas[7]++;
            centavos -= 1;
        }
    }
}

int main()
{
    char *moedas[] = {"2 euros", "1 euro", "50 centimos", "20 centimos", "10 centimos", "5 centimos", "2 centimos", "1 centimo"};
    int nmoedas[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    float montante;

    printf("Indique o Montante a devolver em moedas: ");
    scanf("%f", &montante);

    troco(nmoedas, montante);

    for (int i = 0; i < 8; i++)
    {
        if (nmoedas[i] != 0)
        {
            printf("%s: %d\n", moedas[i], nmoedas[i]);
        }
    }
}