#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 4
Faça um programa que gere e exiba, por extenso, números aleatórios entre 0 (zero)
e 5. O programa deve gerar os números até que o número 3 seja sorteado.*/

main() {
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int numero;
		
	
	while(numero!=3) {
		numero=rand()%6;
			switch(numero){
			case 0:
				printf("Zero\t");
				break;
			case 1:
				printf("Um\t", numero);
				break;				
			case 2:
				printf("Dois\t", numero);
				break;
			case 4:
				printf("Quatro\t", numero);
				break;
			case 5:
				printf("Cinco\t", numero);
				break;				
			default:
				printf("\nSaiu o Três (%i)! Até logo!\n\n", numero);
				break;
			}	
	}	
}

