#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 5
Crie um programa que converta euros em dólares à taxa de câmbio do dia de 28-04-2022.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float vdolar=0;
	float const TXCAMBIO=0.94491;

	printf("\nPor favor, indique qual a valor em doláres:\t");
	scanf("%f", &vdolar);	
	
	printf("\nO valor em euros é: \t%0.2f euros.\n\n", vdolar*TXCAMBIO);
	

}
