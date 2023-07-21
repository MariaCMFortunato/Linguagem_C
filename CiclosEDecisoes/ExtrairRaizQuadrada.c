##include <stdio.h>

int main()
{
    double operando, valor;
    printf("Por favor indique o valor para calcular a raiz: ");
    scanf("%lf", &valor);
    for (operando = 1; operando * operando < valor; operando = operando + 0.001)
    {
        //printf("%.3f\n", operando);
        
    }
    printf("\nA raiz quadrada é %.3lf", operando );
    return 0;
}