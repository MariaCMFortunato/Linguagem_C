#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Crie um programa em C que gere um nº entre 0 e 2. 
Se 0 escrever “ZERO”, se 1 escreve “UM”, se 2 escrever “DOIS”.
(Utilize a estrutura switch) */

main() {
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int numero=0, contador;
// NOTA: Introduzi um repetidor com FOR para verificar o comportadomento da variável numero

	for(contador=0;contador<6;contador++){
		numero=rand()%3;
			switch(numero){
			case 0:
				printf("\tZero",numero);
				break;
			case 1:
				printf("\tUm", numero);
				break;				
			case 2:
				printf("\tDois", numero);
				break;
			}
		}
	}

