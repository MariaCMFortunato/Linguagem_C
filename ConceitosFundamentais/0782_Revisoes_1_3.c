#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 3
Uma empresa contrata um colaborador a 100 � por dia. 
Crie um programa que solicite o n�mero de dias trabalhados e 
imprima a quantia l�quida que dever� ser paga, 
sabendo-se que s�o descontados 8% para pagamento de impostos e taxas devidas.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float diasTrab=0;
	float const SALDIARIO=100, DESC=0.08;
	printf("Por favor, indique quantos dias trabalhou:\t");
	scanf("%f", &diasTrab);
	printf("\nvalor a receber por %0.2f dias trabalhados �:\t %0.2f euros.\n\n", diasTrab, SALDIARIO*diasTrab*(1-DESC));
	
	
}
