#include <stdio.h>
#include <locale.h>
//Programa para troca de vari√°veis

int main(){
     setlocale(LC_ALL, "Portuguese");
     int a = 0, b = 0;
     printf("Qual o valor de a?");
     scanf("%d", &a);
     printf("Qual o valor de b?");
     scanf("%d", &b);

     a = a + b;
     b = a - b;
     a = a - b; 

     printf("\nO novo valor de a È %d", a);
     printf("\nO novo valor de b È %d", b);

     return 0;
}