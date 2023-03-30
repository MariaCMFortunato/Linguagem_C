#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 4
Crie um programa para calcular a área de um quadrado. O tamanho do lado deve ser
informado pelo utilizador.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float lado=0;
	printf("Por favor, indique a medida do lado do quadrado, em centímetros:\t");
	scanf("%f",&lado);
	
	printf("\nA áerea de um quadrado de lado %0.4f centímetros de lado é: %0.4f Centímetros quadrados.\n\n", lado, lado*lado);
	

}
