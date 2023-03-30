#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 3
Criar um programa para receber 3 valores inteiros correspondendo ao lados de triângulo e informar
se o triângulo é equilátero, isósceles ou escaleno.
Equilátero Lados todos iguais
Isósceles Dois iguais
Escaleno Todos diferentes */

main() {
	setlocale(LC_ALL,"");
	float medidalado1=0, medidalado2=0, medidalado3=0;
	printf("Por favor, digite a medida do lado 1 do triândulo, em centímetros: \t");
	scanf("%f", &medidalado1);
	printf("Por favor, digite a medida do lado 2 do triândulo, em centímetros: \t");
	scanf("%f", &medidalado2);
	printf("Por favor, digite a medida do lado 3 do triândulo, em centímetros: \t");
	scanf("%f", &medidalado3);
	
	if(medidalado1==medidalado2&&medidalado2==medidalado3){
		printf("O triãngulo com as medidas %.2f cm, %.2f cm e %.2f cm, é um triângulo Equilátero.\n\n",medidalado1,medidalado2,medidalado3);
	}
	else if(medidalado1==medidalado2||medidalado1==medidalado3||medidalado2==medidalado3){
		printf("O triãngulo com as medidas %.2f cm, %.2f cm e %.2f cm, é um triângulo Isósceles.\n\n",medidalado1,medidalado2,medidalado3);
	}
	else 
	printf(" o triãngulo com as medidas %.2f cm, %.2f cm e %.2f cm, é um triângulo Escaleno.\n\n",medidalado1, medidalado2, medidalado3);
}
