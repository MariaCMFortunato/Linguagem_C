#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 4
Crie um programa para calcular a �rea de um quadrado. O tamanho do lado deve ser
informado pelo utilizador.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float lado=0;
	printf("Por favor, indique a medida do lado do quadrado, em cent�metros:\t");
	scanf("%f",&lado);
	
	printf("\nA �erea de um quadrado de lado %0.4f cent�metros de lado �: %0.4f Cent�metros quadrados.\n\n", lado, lado*lado);
	

}
