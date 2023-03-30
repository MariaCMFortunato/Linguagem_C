#include <stdio.h>


main() {
	/*Programa para calcular a area de um triangulo*/
	float altura=0, base=0, area=0;
	printf("Este programa calcula a area de um triangulo.\n\nPor favor digite a medida da altura do triangulo em cm:");
	scanf("%f", &altura);
	printf("Por favor digite a medida da base do triangulo em cm:");
	scanf("%f", &base);
	area=((altura*base)/2);
	printf("\nA area do triangulo e: %.3f cm quadrados" ,area);
	
	
	
}
