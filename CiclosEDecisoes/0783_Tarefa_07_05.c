#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 5
Faça um programa que permita ao utilizador fornecer diversos valores positivos. 
O programa deverá parar de solicitar valores quando o utilizador fornecer um valor negativo.
No final, o programa deverá informar a soma dos valores lidos.
Obs.: o valor negativo (último valor entrado) não deve entrar na conta da soma. */

main() {
	setlocale(LC_ALL,"");
	int contador=0, numero=0, soma=0;
	printf("\t\tO programa soma os números inteiros que for introduzindo. Para terminar insira um número negativo.\n");
	
	do{
		printf("\t\tDigite o %iº número:\t", contador+1);
		scanf("%i", &numero);
		if(numero>=0){
			soma+=numero;
		}
		contador++;
	}
	while(numero>=0);
	
	printf("\n\t\tInseriu %i parcelas, a soma dos números inseridos é %i:\t\n\n", contador-1, soma);

}

