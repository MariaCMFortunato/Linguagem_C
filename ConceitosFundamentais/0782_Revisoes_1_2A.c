#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 2
A import�ncia de 10.000 � ser� dividida entre tr�s vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receber� 46%;
- O segundo receber� 32%;
- O terceiro receber� o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float const PREMIOB=10, PREMIO1=0.46, PREMIO2= 0.32, PREMIO3=0.22;
	printf("O valor do pr�mio a distribuir � de %0.2f euros.", PREMIOB);
	printf("\n\nO valor a atribuir ao primeiro pr�mio �:\t %0.2f euros", PREMIOB*PREMIO1);
	printf("\nO valor a atribuir ao segundo pr�mio �: \t %0.2f euros", PREMIOB*PREMIO2);
	printf("\nO valor a atribuir ao terceiro pr�mio �:\t %0.2f euros", PREMIOB*PREMIO3);	
	
	
}
