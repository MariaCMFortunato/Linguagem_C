#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Dados tr�s valores A, B e C, verificar se podem ser comprimentos de lados de um tri�ngulo e, se
formam um tri�ngulo equil�tero, is�sceles ou escaleno. Considere que:

-> O comprimento de um lado do tri�ngulo � menor que a soma dos dois outros lados;
-> Um tri�ngulo equil�tero deve ter os tr�s lados com o mesmo tamanho;
->Um tri�ngulo is�sceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um tri�ngulo escaleno deve ter os tr�s lados com tamanhos diferente; */

main() {
	setlocale(LC_ALL,"");
	float lado1=0, lado2=0, lado3=0;
	printf("Por favor, digite a medida do lado 1 da figura, em cent�metros: \t");
	scanf("%f", &lado1);
	printf("Por favor, digite a medida do lado 2 da figura, em cent�metros: \t");
	scanf("%f", &lado2);
	printf("Por favor, digite a medida do lado 3 da figura, em cent�metros: \t");
	scanf("%f", &lado3);
	


	if(lado1<lado2+lado3&&lado2<lado1+lado3&&lado3<lado1+lado2){
		printf("\nA figura com as medidas %.2f cm, %.2f cm e %.2f cm, � um tri�ngulo",lado1,lado2,lado3);
	}
		if(lado1==lado2&&lado2==lado3){
			printf("\nO tri�ngulo � Equil�tero.\n\n");
		}
		else if(lado1==lado2||lado1==lado3||lado2==lado3){
			printf("\nO tri�ngulo � Is�sceles.\n\n");
		}
		else
			printf("\nO tri�ngulo � Escaleno.\n\n");
			
	if(lado1>lado2+lado3||lado2>lado1+lado3||lado3>lado1+lado2){
	printf("A figura com as medidas %.2f cm, %.2f cm e %.2f cm, n�o � um tri�ngulo.\n\n",lado1, lado2, lado3);	
	}
		

}


	

