#include <stdio.h>

void troca (float montante)
{
    int num, i;
    float moedas[] = {2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01, 0};
    char *smoedas[] = {"2 euros","1 euro","50 centimos","20 centimos","10 centimos","5 centimos","2 centimos","1 centimo"};
    montante += 0.005;
    
    for(i = 0; moedas[i] > 0; i++)
    {
        num = (int)(montante / moedas[i]);
        montante -= moedas[i] * num;
        if(num > 0)
            printf("%s: %d\n", smoedas[i], num);
    }
}

int main()
{
    float montante;
    printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", & montante);
    troca(montante);
}