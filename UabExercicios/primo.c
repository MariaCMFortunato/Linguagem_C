#include <stdio.h>
#include <math.h>

void main()
{
    int n = 0, i = 2, primo = 0;
    
    printf("Funcao que verifica se um numero N e' primo: ");
    printf("\nIndique N: ");
    scanf("%d", &n);

    while (i <= sqrt(n)){
        if(n % i == 0){
            primo = 1;
            printf("%d ", i);
            break;
        }
        else{
            i++;
        }

    }
    if (primo ==0){

        printf("0\nNumero primo!");
    }

}