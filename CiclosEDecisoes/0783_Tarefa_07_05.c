#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 5
Fa�a um programa que permita ao utilizador fornecer diversos valores positivos. 
O programa dever� parar de solicitar valores quando o utilizador fornecer um valor negativo.
No final, o programa dever� informar a soma dos valores lidos.
Obs.: o valor negativo (�ltimo valor entrado) n�o deve entrar na conta da soma. */

main() {
	setlocale(LC_ALL,"");
	int contador=0, numero=0, soma=0;
	printf("\t\tO programa soma os n�meros inteiros que for introduzindo. Para terminar insira um n�mero negativo.\n");
	
	do{
		printf("\t\tDigite o %i� n�mero:\t", contador+1);
		scanf("%i", &numero);
		if(numero>=0){
			soma+=numero;
		}
		contador++;
	}
	while(numero>=0);
	
	printf("\n\t\tInseriu %i parcelas, a soma dos n�meros inseridos � %i:\t\n\n", contador-1, soma);

}

