#include <stdio.h>

#define RAND_A 231533
#define RAND_B 82571
#define RAND_M 428573

int main()
{
    unsigned int semente, maximo, aleatorio;
    // printf("Indique por favor o número semente: ");
    scanf("%u", &semente);

    // printf("Indique por favor o número máximo: ");
    scanf("%u", &maximo);

    for (int i = 0; i < 10; i++)
    {
        semente = (RAND_A * semente + RAND_B) % RAND_M;
        aleatorio = semente % (maximo + 1);
        printf("%u ", aleatorio);
    }
}