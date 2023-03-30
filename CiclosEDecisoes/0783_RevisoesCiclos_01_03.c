#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 3
Crie um programa em C que gere um número aleatório entre 0 e 1. 
Se sair 0 escrever “Cara”, se 1 escreve “Coroa”. */

	main() {
		setlocale(LC_ALL,"");
		srand(time(NULL));
		int numero, contador=0;
			
		for	(contador=0;contador<6;contador++){
			numero=rand()%2;
			switch(numero){
				case 0:
					printf("Cara\t");
					break;
				case 1:
					printf("Coroa\t");
					break;
			}
		}
	}
