#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 2
A importância de 10.000 € será dividida entre três vencedores de um concurso.
Sendo que da quantia total:
- O primeiro vencedor receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante.
Calcule e imprima a quantia ganha por cada um dos vencedores.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float const PREMIOB=10, PREMIO1=0.46, PREMIO2= 0.32, PREMIO3=0.22;
	printf("O valor do prémio a distribuir é de %0.2f euros.", PREMIOB);
	printf("\n\nO valor a atribuir ao primeiro prémio é:\t %0.2f euros", PREMIOB*PREMIO1);
	printf("\nO valor a atribuir ao segundo prémio é: \t %0.2f euros", PREMIOB*PREMIO2);
	printf("\nO valor a atribuir ao terceiro prémio é:\t %0.2f euros", PREMIOB*PREMIO3);	
	
	
}
