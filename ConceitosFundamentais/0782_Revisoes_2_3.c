#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 3
Crie um programa que converta euros em libras � taxa de c�mbio do dia de 28-04-2022.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float euros=0;
	float const TXCAMB=0.84215;
	printf("Por favor, indique qual o valor, em Euros, que pretende converter:\t");
	scanf("%f", &euros);
	
	printf("\n\nO valor de %0.2f Euros convertido em Libras �:\t%.2f Libras.\n\n", euros, euros*TXCAMB);


}
