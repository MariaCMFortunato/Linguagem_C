#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 3
Criar um programa para receber 3 valores inteiros correspondendo ao lados de tri�ngulo e informar
se o tri�ngulo � equil�tero, is�sceles ou escaleno.
Equil�tero Lados todos iguais
Is�sceles Dois iguais
Escaleno Todos diferentes */

main() {
	setlocale(LC_ALL,"");
	float medidalado1=0, medidalado2=0, medidalado3=0;
	printf("Por favor, digite a medida do lado 1 do tri�ndulo, em cent�metros: \t");
	scanf("%f", &medidalado1);
	printf("Por favor, digite a medida do lado 2 do tri�ndulo, em cent�metros: \t");
	scanf("%f", &medidalado2);
	printf("Por favor, digite a medida do lado 3 do tri�ndulo, em cent�metros: \t");
	scanf("%f", &medidalado3);
	
	if(medidalado1==medidalado2&&medidalado2==medidalado3){
		printf("O tri�ngulo com as medidas %.2f cm, %.2f cm e %.2f cm, � um tri�ngulo Equil�tero.\n\n",medidalado1,medidalado2,medidalado3);
	}
	else if(medidalado1==medidalado2||medidalado1==medidalado3||medidalado2==medidalado3){
		printf("O tri�ngulo com as medidas %.2f cm, %.2f cm e %.2f cm, � um tri�ngulo Is�sceles.\n\n",medidalado1,medidalado2,medidalado3);
	}
	else 
	printf(" o tri�ngulo com as medidas %.2f cm, %.2f cm e %.2f cm, � um tri�ngulo Escaleno.\n\n",medidalado1, medidalado2, medidalado3);
}
