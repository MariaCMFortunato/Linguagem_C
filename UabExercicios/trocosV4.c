#include <stdio.h>

int trocos(float montante, int mostrar)
{
    int count, i, total;
    /* vectores com informação estática */
    float moedas[] =
    {
        2, 1, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01, 0
    };
    char *smoedas[] =
    {
        "2 euros",
        "1 euro",
        "50 centimos",
        "20 centimos",
        "10 centimos",
        "5 centimos",
        "2 centimos",
        "1 centimo"
    };
    total = 0;
    montante += 0.005;
    /* arrendondar para o cêntimo mais próximo */
    /* processar a informação estática, em vez de duplicar o código
    utilizando constantes para cada possível valor do vector. */
    for(i = 0; moedas[i] > 0; i++)
    {
        count = (int)(montante / moedas[i]);
        montante -= moedas[i] *count;
        if(count > 0 && mostrar)
            printf("%s: %d\n", smoedas[i], count);
        total += count;
    }
    return total;
}

int main()
{
    float montante;
    int total = 0;
    //printf("Introduza um montante em euros, podendo ter centimos: ");
    scanf("%f", & montante);
    trocos(montante, 1);
    /* resposta à pergunta */
    for(montante = 0.01; montante < 20; montante = montante *2 + 0.01)
        total += trocos(montante, 0);
    //printf("\nTotal moedas: %d", total);
}