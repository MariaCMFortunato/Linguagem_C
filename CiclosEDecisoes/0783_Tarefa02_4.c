#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 4
Elaborar um programa que recebe 3 valores inteiros. Mostra o maior, o menor e a m�dia */

main() {
	setlocale(LC_ALL,"");
	int num1=0, num2=0, num3=0;
	float media=0;
	printf("Por favor, indique o primeiro n�mero: \t");
	scanf("%i", &num1);
	printf("Por favor, indique o segundo n�mero: \t");
	scanf("%i", &num2);
	printf("Por favor, indique o terceiro n�mero: \t");
	scanf("%i", &num3);
	
	media=(num1+num2+num3)/3;
	
	if(num1>num2&&num1>num3){
		printf("\nEntre os n�meros %i, %i e %i, o m�mero maior � o n�mero %i.",num1, num2, num3, num1);
	}
	else if(num2>num1&&num2>num3){
		printf("\nEntre os n�meros %i, %i e %i, o m�mero maior � o n�mero %i.",num1, num2, num3, num2);
	}
	else if(num3>num1&&num3>num2){
		printf("\nEntre os n�meros %i, %i e %i, o m�mero maior � o n�mero %i.",num1, num2, num3, num3);
	}
		
	if(num1<num2&&num1<num3){
		printf("\n\t\t\t E o m�mero menor � o n�mero %i.",num1, num2, num3, num1);
	}
	else if(num2<num1&&num2<num3){
		printf("\n\t\t\t E o m�mero menor � o n�mero %i.",num1, num2, num3, num2);
	}
	else if(num3<num1&&num3<num2){
		printf("\n\t\t\t E o m�mero menor � o n�mero %i.",num1, num2, num3, num3);
	}
	else 
		printf("\nOs n�meros indicados s�o iguais");
	if(num1!=num2&&num1!=num3&&num2!=num3){
		printf("\n\nA m�dia dos n�meros %i, %i e %i � %.2f: \t .\n\n",num1, num2, num3,media);
	}
	
}
