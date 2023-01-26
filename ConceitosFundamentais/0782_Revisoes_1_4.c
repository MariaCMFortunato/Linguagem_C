#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 4
Crie um programa para calcular a área de um triângulo retângulo. 
O tamanho da base e altura do triângulo devem ser informados pelo utilizador.
A=(base*altura)/2
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float base=0, altura=0;
	printf("Por favor, indique a medida da base do triângulo, em cm: \t");
	scanf ("%f", &base);
	printf("Por favor, indique a medida da altura do triângulo, em cm: \t");
	scanf ("%f", &altura);
	printf("\n\nA área do triângulo com %0.3f cm de base e %0.3f cm de altura é: \t %.03f Centímetros quadrados.\n\n", base,altura,(base*altura)/2);
	
	
	
	
}
