#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 1
Crie um programa que v� solicitando ao utilizador n�meros inteiros. 
O programa termina quando o n�mero inserido for o n�mero �zero�. 
Como sa�da deve apresentar a soma dos n�meros inseridos e quantos n�meros foram inseridos. */

main() {
	setlocale(LC_ALL,"");
	int contador=0, numero=-1, soma=0;
	printf("\t\tO programa soma os n�meros inteiros que for introduzindo. Para terminar insira o n�mero '0'.\n");
	
	while(numero!=0){
		contador++;
		printf("\t\tDigite o %i� n�mero:\t", contador);
		scanf("%i", &numero);
		soma+=numero;
	}
	printf("\n\t\tInseriu %i parcelas, a soma dos n�meros inseridos � %i:\t\n\n", contador-1, soma);
	//tamb�m se pode incicializar o contador em -1, ou seja contador = -1 
}
