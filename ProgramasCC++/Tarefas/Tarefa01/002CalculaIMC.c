#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL,"Portuguese");
     /* Sabendo que o IMC (Índice de massa corporal) é obtido em função da altura e do peso 
     (imc=peso/(altura*altura)). Crie um algoritmo que leia os valores do peso e da altura, 
     apresente o valor do imc e a respetiva situação sabendo que:
          IMC                 Situação
          Abaixo de 20        Abaixo do peso
          >= 20 e <25         Peso Normal
          >= 25 e <30         Acima do Peso
          >= 30 e <=35        Obesidade
          > 35                Grande Obesidade*/
     float peso = 0, altura = 0, imc = 0;

     printf("Digite o valor do peso (em Kg): ");
     scanf("%f", &peso);
     printf("Digite o valor da altura (em metros): ");
     scanf("%f", &altura);

     imc=peso/(altura*altura);
     printf("O valor do IMC é %.2f", imc);

     if (imc<20) {
          printf("\nAbaixo do peso.");
     }
     else if (imc >= 20 && imc < 25) {
          printf("\nPeso normal.");
     }
     else if (imc >= 25 && imc < 30) {
          printf("\nAcima do peso.");
     }
     else if (imc >= 30 && imc <= 35){
          printf("\nObesidade.");
     }
     else {
         printf("\nGrande Obesidade.");
     }
     return 0;
}