#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 4
Crie um programa para calcular a �rea de um tri�ngulo ret�ngulo. 
O tamanho da base e altura do tri�ngulo devem ser informados pelo utilizador.
A=(base*altura)/2
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float base=0, altura=0;
	printf("Por favor, indique a medida da base do tri�ngulo, em cm: \t");
	scanf ("%f", &base);
	printf("Por favor, indique a medida da altura do tri�ngulo, em cm: \t");
	scanf ("%f", &altura);
	printf("\n\nA �rea do tri�ngulo com %0.3f cm de base e %0.3f cm de altura �: \t %.03f Cent�metros quadrados.\n\n", base,altura,(base*altura)/2);
	
	
	
	
}
