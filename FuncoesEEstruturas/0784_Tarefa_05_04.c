#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* 4. Escrever um programa em C que:
		a) Gere todo o conjunto A de 5 elementos inteiros entre 100 e 200;
		b) Verificar se a soma dos elementos � um valor par ou �mpar.
		c) Criar um 2� vetor obtido a partir do anterior que resulte no dobro dos valores
		do 1�. */

main() {
	setlocale(LC_ALL,"Portuguese");
	int A[5], i=0, soma=0, B[5];
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		A[i]=rand()%101+100;
		printf("%i\t", A[i]);
		soma=soma+A[i];
		}
	if (soma%2==0){
		printf("\nA soma dos elementos de A � par e o valor: %i\n", soma);
	}
	else {
		printf("\nA soma dos elementos de A � impar e o valor: %i\n", soma);
	}
	for(i=0;i<5;i++){
		B[i]=A[i]*2;
		printf("%i\t", B[i]);
	}
}

