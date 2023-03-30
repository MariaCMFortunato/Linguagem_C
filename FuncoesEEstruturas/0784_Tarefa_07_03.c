#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 3
Crie um programa em C que preencha uma matriz 5x5, de forma aleatória 
com os valores “1”, “X” ou “2”. 

Sabendo que o “1” corresponde a vitória, o “X” a empate e o “2” a derrota, 
apresentar uma contagem final das vitórias, empates e derrotas. */

main() {
	setlocale(LC_ALL,"Portuguese");
	char matriz [5][5];
	int linha=0, coluna=0, aux=0, contador1=0, contadorX=0, contador2=0;
	srand(time(NULL));
	
	// preenchiamento da matriz
	printf("\n");
	printf("\t   |\t0\t1\t2\t3\t4  | \n");
	printf("\t--------------------------------------------\n");
	
	for (linha=0;linha<5; linha++){
		printf("\t%i  |", linha);
		for(coluna=0;coluna<5;coluna++){
			aux=rand()%3;
			switch(aux){
				case 0:
					matriz[linha][coluna]='X';
					contadorX++;
					break;	
				case 1:
					matriz[linha][coluna]='1';
					contador1++;
					break;		
				case 2:
					matriz[linha][coluna]='2';
					contador2++;
					break;							
			}
			printf("\t%c",matriz[linha][coluna]);
		}
	printf("  |\n");
	}
	printf("\t--------------------------------------------\n\n");
		
	printf("\tNúmero total de vitórias:\t%2i\n", contador1++);
	printf("\tNúmero total de empates:\t%2i\n", contadorX++);
	printf("\tNúmero total de derrotas:\t%2i\n", contador2++);
}

