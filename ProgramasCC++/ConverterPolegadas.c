#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     float polegadas = 0;
     const float PM = 25.4;
     printf("Digite o valor em polegadas: ");
     scanf("%f", &polegadas);

     printf("%.2f polegadas, s�o %.2f mil�metros.", polegadas, polegadas*PM);
     return 0;
}