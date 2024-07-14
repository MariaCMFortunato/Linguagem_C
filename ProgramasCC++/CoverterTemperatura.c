#include <stdio.h>
#include <locale.h>
//Programa para converter fahrenheit em graus centigrados

int main(){
     setlocale(LC_ALL, "Portuguese");
     float  fahrenheit = 0;
     printf("Digite a temperatura em graus fahrenheit: ");
     scanf("%f", &fahrenheit);
     printf("O valor da temperatura em graus Celsius é %5.2f: ", (5 * (fahrenheit - 32) / 9));

     return 0;
}