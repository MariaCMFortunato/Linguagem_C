#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 3
Crie uma função em C, do tipo void, que gere um número aleatório entre 0 e 50 e devolva a
informação se o número é par ou ímpar. */

void par(int numero){
	numero=rand()%51;
	printf("\nnumero = %i", numero);
	if(numero%2==0){
		printf("\tO numero é par!");
	}
	else{
		printf("\tO numero é impar!");
	}
}

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int a;

	par(a);
}

