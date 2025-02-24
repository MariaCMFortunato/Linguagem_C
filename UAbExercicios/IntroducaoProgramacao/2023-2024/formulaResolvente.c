#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;
    int a1=0, b1=0, c1=0, k=0, i=0, delta1;

    printf("Equacao do segundo grau a * x^2 + b * x + c = 0.\nIndique a b c: ");
    scanf("%f %f %f", &a, &b,&c);
    
    delta = sqrt(pow(b,2)- 4 * a * c );
    x1 = (- b + delta) / 2 * a;
    x2 = (- b - delta) / 2 * a;

    if(delta < 0)
        printf("A equação não tem raizes reais.");
    else if (delta == 0)
        printf("\nA equação tem uma raiz unica, X = %f", - b / (2 * a));
    else
        printf("O valor de pode ser %f ou %f", x1, x2);
    
    printf("\n2Calculo de coeficientes entre -K e K inteiros nao nulos, com raízes inteiras.\nIntroduza K: ");
    scanf("%d", &k);

    printf("Coeficientes de %d a %d inteiros nao nulos, com raízes inteiras: ", -k, k);
    for ( a1 = - k; a1 <= k;a1++){
        for (b1 = - k; b1 <= k; b1++){
            for (c1 = - k;c1 <= k; c1++){
                
                if(a1 != 0 || b1 != 0 || c1 != 0){
                    delta1 = sqrt(pow(b1,2)- 4 * a1 * c1 );
                
                    if (delta1 == 0 && a1 != 0 && b1 % ( 2 * a1) == 0 ){
                        i++;
                        printf("[%d %d %d]", a1, b1, c1);
                    }
                    else if (delta1 >= 0){
                        if (sqrt(delta) == floor(sqrt(delta))){
                            i++;
                             printf("%d %d %d", a1, b1, c1);
                        }
                    }
                }
            }
        }
    }
    printf("\nTotal: %d", i);

    return 0;
}