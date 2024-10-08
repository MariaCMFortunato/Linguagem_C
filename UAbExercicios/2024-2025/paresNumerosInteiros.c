#include <stdio.h>

int main()
{
    int A, B, K, contagem;
    printf("Indique K: ");
    scanf("%d", &K);
    contagem = 0;
    A = 1;
    while (A <= K)
    {
        B = 1;
        while (B <= K)
        {
            if (A + B <= K && A * B <= K)
            {
                contagem++;
            }
            B++;
        }
        A++;
    }
    printf("Total : %d", contagem);
}