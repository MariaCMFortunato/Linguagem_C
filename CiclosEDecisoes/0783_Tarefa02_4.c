#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 4
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a média */

main() {
	setlocale(LC_ALL,"");
	int num1=0, num2=0, num3=0;
	float media=0;
	printf("Por favor, indique o primeiro número: \t");
	scanf("%i", &num1);
	printf("Por favor, indique o segundo número: \t");
	scanf("%i", &num2);
	printf("Por favor, indique o terceiro número: \t");
	scanf("%i", &num3);
	
	media=(num1+num2+num3)/3;
	
	if(num1>num2&&num1>num3){
		printf("\nEntre os números %i, %i e %i, o múmero maior é o número %i.",num1, num2, num3, num1);
	}
	else if(num2>num1&&num2>num3){
		printf("\nEntre os números %i, %i e %i, o múmero maior é o número %i.",num1, num2, num3, num2);
	}
	else if(num3>num1&&num3>num2){
		printf("\nEntre os números %i, %i e %i, o múmero maior é o número %i.",num1, num2, num3, num3);
	}
		
	if(num1<num2&&num1<num3){
		printf("\n\t\t\t E o múmero menor é o número %i.",num1, num2, num3, num1);
	}
	else if(num2<num1&&num2<num3){
		printf("\n\t\t\t E o múmero menor é o número %i.",num1, num2, num3, num2);
	}
	else if(num3<num1&&num3<num2){
		printf("\n\t\t\t E o múmero menor é o número %i.",num1, num2, num3, num3);
	}
	else 
		printf("\nOs números indicados são iguais");
	if(num1!=num2&&num1!=num3&&num2!=num3){
		printf("\n\nA média dos números %i, %i e %i é %.2f: \t .\n\n",num1, num2, num3,media);
	}
	
}
