#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2
Fa�a um programa que solicite ao utilizador um valor positivo. 
O programa dever� repetir a solicita��o caso o utilizador forne�a um valor inv�lido (negativo). 
Quando o utilizador fornecer um valor v�lido, mostre uma mensagem de texto confirmando o valor digitado. */

main() {
	setlocale(LC_ALL,"");
	float numero=-1;// uso o float porque � indicado que deve pedir um valor, n�o fala em ser inteiro ou real
		
	while(numero<=0){
	
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);
	}
	printf("\n\t\tO numero que inseriu � %.2f:\t\n\n", numero);

	do{
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);
	}
	while(numero<=0);
	printf("\n\t\tO numero que inseriu � %.2f:\t\n\n", numero);
	
	for(numero=-1;numero<=0;){
		printf("\tPor favor digite um  valor positivo:\t");
		scanf("%f", &numero);		
}
	printf("\n\t\tO numero que inseriu � %.2f:\t\n\n", numero);
}
