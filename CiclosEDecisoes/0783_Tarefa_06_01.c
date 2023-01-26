#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Crie um programa que vá solicitando ao utilizador números inteiros. 
O programa termina quando o número inserido for o número “zero”. 
Como saída deve apresentar a soma dos números inseridos e quantos números foram inseridos. */

main() {
	setlocale(LC_ALL,"");
	int contador=0, numero=-1, soma=0;
	printf("\t\tO programa soma os números inteiros que for introduzindo. Para terminar insira o número '0'.\n");
	
	while(numero!=0){
		contador++;
		printf("\t\tDigite o %iº número:\t", contador);
		scanf("%i", &numero);
		soma+=numero;
	}
	printf("\n\t\tInseriu %i parcelas, a soma dos números inseridos é %i:\t\n\n", contador-1, soma);
	//também se pode incicializar o contador em -1, ou seja contador = -1 
}
