#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Crie um programa em C que gere um nº entre 0 e 2. 
Se 0 escrever ?ZERO?, se 1 escreve ?UM?, se 2 escrever ?DOIS?.
(Utilize a estrutura switch) */

int main() {
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int numero = 0;

// NOTA: Introduzi um repetidor com FOR para verificar o comportamento da variável numero
    puts("");
	for(int i = 0;i < 10; i++){
		numero=rand()%3;
			switch(numero){
			case 0:
				printf("\tZERO");
				break;
			case 1:
				printf("\tUM");
				break;				
			case 2:
				printf("\tDOIS");
				break;
			}
		}
        printf("\n\n");
    return 0;
	}
