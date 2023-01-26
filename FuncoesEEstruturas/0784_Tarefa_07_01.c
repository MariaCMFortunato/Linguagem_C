#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 1
Crie um programa em C que preencha uma matriz 10x10, de forma aleatória com números entre 0 e 20, 
e mostre os elementos da diagonal esquerda, 
os elementos da diagonal direita, 
a soma dos elementos da diagonal esquerda e 
a soma dos elementos da diagonal direita. */

main(){
	setlocale(LC_ALL,"Portuguese");
	int matriz [10][10], linha=0, coluna=0, soma=0, soma1=0;
	srand(time(NULL));
	
	// preenchiamento da matriz
	printf("\n\n");
	printf("\t   |\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9   |\n");
	printf("\t-------------------------------------------------------------------------------------\n");
	for (linha=0;linha<10; linha++){
		printf("\t%i  |", linha);
		for(coluna=0;coluna<10;coluna++){
			matriz[linha][coluna]=rand()%21;
			printf("\t%2i",matriz[linha][coluna]);
		}
	printf("  |\n");
	}
	printf("\t-------------------------------------------------------------------------------------\n");
	
	printf("\n\n\tValores da diagonal esquerda: \n");
	for(linha=0;linha<10; linha++){
		printf("\t%i", matriz[linha][linha]);
		soma+=matriz[linha][linha];
	}
	printf("\n\tSoma dos elementos da diagonal esquerda: %i", soma);

	printf("\n\n\tValores da diagonal direita: \n");
	for(linha=0;linha<10; linha++){
		printf("\t%i", matriz[linha][9-linha]);
		soma1+=matriz[linha][9-linha];
	}
	printf("\n\tSoma dos elementos da diagonal direita: %i\n\n", soma1);

}




