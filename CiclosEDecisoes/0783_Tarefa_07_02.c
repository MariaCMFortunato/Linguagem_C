#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Faça um programa que solicite ao utilizador um valor positivo. 
O programa deverá repetir a solicitação caso o utilizador forneça um valor inválido (negativo). 
Quando o utilizador fornecer um valor válido, mostre uma mensagem de texto confirmando o valor digitado. */

main() {
	setlocale(LC_ALL,"");
	float numero=-1;// uso o float porque é indicado que deve pedir um valor, não fala em ser inteiro ou real
		
	while(numero<=0){
	
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);
	}
	printf("\n\t\tO numero que inseriu é %.2f:\t\n\n", numero);

	do{
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);
	}
	while(numero<=0);
	printf("\n\t\tO numero que inseriu é %.2f:\t\n\n", numero);
	
	for(numero=-1;numero<=0;){
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);		
}
	printf("\n\t\tO numero que inseriu é %.2f:\t\n\n", numero);
}
