#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*Exerc�cio 5
Crie um programa em C que gere um n�mero aleat�rio entre 0 e 2. 
Se sair 0 escrever �Derrota�, se 1 escreve �Empate�, se 2 �Vit�ria�. */

	main() {
		setlocale(LC_ALL,"");
		srand(time(NULL));
		int numero, contador=0;
			
		for	(contador=0;contador<6;contador++){
			numero=rand()%3;
			switch(numero){
				case 0:
					printf("Derrota!\t");
					break;
				case 1:
					printf("Empate!\t");
					break;
				default:
					printf("Vit�ria!\t");
					
			}
		}
	}

