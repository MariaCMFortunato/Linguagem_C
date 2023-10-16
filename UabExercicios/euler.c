#include <stdio.h>

int main()
{
    int n = 1, k = 0;
    double euler = 1, fatorial = 1;

    scanf("%d", & k);

    if (k == 0){
        euler = 1;
    }
    else{
        while(n<=k){
            fatorial *= n;
            euler += 1/fatorial;
            n++;
        }
    }
    printf("\n%.16g", euler);
}