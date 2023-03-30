#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Dados três valores A, B e C, verificar se podem ser comprimentos de lados de um triângulo e, se
formam um triângulo equilátero, isósceles ou escaleno. Considere que:

-> O comprimento de um lado do triângulo é menor que a soma dos dois outros lados;
-> Um triângulo equilátero deve ter os três lados com o mesmo tamanho;
->Um triângulo isósceles deve ter pelo menos dois lados com o mesmo tamanho;
-> Um triângulo escaleno deve ter os três lados com tamanhos diferente; */

main() {
	setlocale(LC_ALL,"");
	float lado1=0, lado2=0, lado3=0;
	printf("Por favor, digite a medida do lado 1 da figura, em centímetros: \t");
	scanf("%f", &lado1);
	printf("Por favor, digite a medida do lado 2 da figura, em centímetros: \t");
	scanf("%f", &lado2);
	printf("Por favor, digite a medida do lado 3 da figura, em centímetros: \t");
	scanf("%f", &lado3);
	


	if(lado1<lado2+lado3&&lado2<lado1+lado3&&lado3<lado1+lado2){
		printf("\nA figura com as medidas %.2f cm, %.2f cm e %.2f cm, é um triângulo",lado1,lado2,lado3);
	}
		if(lado1==lado2&&lado2==lado3){
			printf("\nO triãngulo é Equilátero.\n\n");
		}
		else if(lado1==lado2||lado1==lado3||lado2==lado3){
			printf("\nO triãngulo é Isósceles.\n\n");
		}
		else
			printf("\nO triãngulo é Escaleno.\n\n");
			
	if(lado1>lado2+lado3||lado2>lado1+lado3||lado3>lado1+lado2){
	printf("A figura com as medidas %.2f cm, %.2f cm e %.2f cm, não é um triângulo.\n\n",lado1, lado2, lado3);	
	}
		

}


	

