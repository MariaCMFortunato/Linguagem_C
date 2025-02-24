#include <stdio.h>

int main()
{
    puts("");
    printf("sizeof(int): %d\n", (int)sizeof(int));
    printf("sizeof(short): %d\n", (int)sizeof(short));
    printf("sizeof(long): %d\n", (int)sizeof(long));
    printf("sizeof(char): %d\n", (int)sizeof(char));
    printf("sizeof(float): %d\n", (int)sizeof(float));
    printf("sizeof(double): %d\n", (int)sizeof(double));
    puts("");

    char c = 'a';
    float x = 12354234.2346;
    double y = 12354234.2346;
        
    printf("c: %c (%d), x: %f, y %g\n", c, c, x, y);
    puts("");

    char a;
    int z;
    double d;
    
    printf("Introduza um caracter: ");
    scanf("%c",&a);
    printf("Introduza um inteiro: ");
    scanf("%d",&z);
    printf("Introduza um real: ");
    scanf("%lf",&d);
    printf("Valores introduzidos: %c %d %f\n", a, z, d);
    puts("");
    
}