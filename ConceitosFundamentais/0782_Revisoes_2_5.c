#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 5
Elabore um programa que leia tr�s valores e apresente, como resultado fina, a soma dos quadrados dos tr�s valores lidos.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float v1=0, v2=0, v3=0;
	printf("Por favor, indique o primeiro valor:\t");
	scanf("%f" ,&v1);
	printf("Por favor, indique o segundo valor:\t");
	scanf("%f" ,&v2);
	printf("Por favor, indique o terceiro valor:\t");
	scanf("%f" ,&v3);
	
	printf("\n\n A soma dos quadrados dos valores que indicados �:\t %.4f.\n\n" ,((v1*v1)+(v2*v2)+(v3*v3)));


}
