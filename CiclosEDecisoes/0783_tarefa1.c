#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
Exerc�cio 1
Sabendo que o IMC (�ndice de massa corporal) � obtido em fun��o da altura e do peso (imc=peso/(altura*altura)). 
Crie um algoritmo que leia os valores do peso e da altura, apresente o valor do imc e a respetiva situa��o sabendo que:

IMC					Situa��o
Abaixo de 19.99 	Abaixo do peso
Entre 20 e 24.99	Peso Normal
Entre 25 e 29.99	Acima do Peso
Entre 30 e 35		Obesidade
Acima de 35			Grande Obesidade

*/

main() {
	setlocale(LC_ALL,"");
	float peso=0, altura=0,imc=0;
	printf("Digite o seu peso em Kg:");
	scanf("%f",&peso);
	printf("Digite a altura em metros:");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
	printf("O seu valor de IMC � %.2f",imc);
	
	if (imc<20){
		printf("\nAbaixo do peso.");
	}
	else if (imc<25){
		printf("\nPeso normal.");
	}
	else if (imc<30){
	    printf("\nAcima do peso.");	
	}
	else if(imc<=35){
		printf("\nObesidade.");
	} 
	else{
		printf("\nGrande Obesidade.");
	}	
}







