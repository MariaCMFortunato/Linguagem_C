#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Sabendo que o IMC (Índice de massa corporal) é obtido em função da altura e do peso (imc=peso/(altura*altura)). 
Crie um algoritmo que leia os valores do peso e da altura, apresente o valor do imc e a respetiva situação sabendo que:
IMC
Situação
Abaixo de 19.99 - Abaixo do peso
Entre 20 e 24.99 - Peso Normal
Entre 25 e 29.99 - Acima do Peso
Entre 30 e 35 - Obesidade
Acima de 35 Grande Obesidade */

main() {
	setlocale(LC_ALL, "");
	float peso=0, altura=0;
	printf("Por favor, indique o seu peso: ");
	scanf("%f",&peso);
	printf("\nPor favor, indique a sua altura, em metros: ");
	scanf("%f",&altura);
	
	if(peso/(altura*altura)<19.99){
		printf("\n Está abaixo do peso.\n\n");
		}
			else if ((peso/(altura*altura))<24.99){
				printf("\nO seu peso está normal.\n\n");
			}
			else if ((peso/(altura*altura))<29.99){
				printf("\nEstá acima do peso.\n\n");
			}
			else if ((peso/(altura*altura))<35){
				printf("\nEstá com obesidade.\n\n");
			}
			else {
				printf("\nApresenta grande obesidade.\n\n");
			}
}
