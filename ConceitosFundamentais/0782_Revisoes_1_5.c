#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 5
Crie um programa que converta euros em d�lares � taxa de c�mbio do dia de 28-04-2022.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float vdolar=0;
	float const TXCAMBIO=0.94491;

	printf("\nPor favor, indique qual a valor em dol�res:\t");
	scanf("%f", &vdolar);	
	
	printf("\nO valor em euros �: \t%0.2f euros.\n\n", vdolar*TXCAMBIO);
	

}
