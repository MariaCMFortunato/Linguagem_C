#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exerc�cio 3
Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio entre 0 e 50 e devolva a
informa��o se o n�mero � par ou �mpar. */

void par(int numero){
	numero=rand()%51;
	printf("\nnumero = %i", numero);
	if(numero%2==0){
		printf("\tO numero � par!");
	}
	else{
		printf("\tO numero � impar!");
	}
}

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int a;

	par(a);
}

