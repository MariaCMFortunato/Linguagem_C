#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 4
Fa�a um programa que gere e exiba, por extenso, n�meros aleat�rios entre 0 (zero) e 15. 
O programa deve gerar os n�meros at� que o n�mero 15 seja sorteado. 
O programa deve mostrar tamb�m, no final, a quantidade de n�meros gerados. */

main() {
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int numero, contador=0;
		
	
	while(numero>=0&&numero<15) {
		numero=rand()%16;
			switch(numero){
			case 0:
				printf("\n\t%i Zero",numero);
				break;
			case 1:
				printf("\n\t%i Um", numero);
				break;				
			case 2:
				printf("\n\t%i Dois", numero);
				break;
			case 3:
				printf("\n\t%i Tr�s", numero);
				break;
			case 4:
				printf("\n\t%i Quatro", numero);
				break;
			case 5:
				printf("\n\t%i Cinco", numero);
				break;				
			case 6:
				printf("\n\t%i Seis", numero);
				break;
			case 7:
				printf("\n\t%i Sete", numero);
				break;
			case 8:
				printf("\n\t%i Oito", numero);
				break;
			case 9:
				printf("\n\t%i Nove", numero);
				break;				
			case 10:
				printf("\n\t%i Dez", numero);
				break;
			case 11:
				printf("\n\t%i Onze", numero);
				break;
			case 12:
				printf("\n\t%i Doze", numero);
				break;
			case 13:
				printf("\n\t%i Treze", numero);
				break;				
			case 14:
				printf("\n\t%i Quatorze", numero);
				break;
			}
	contador++;	
		sleep(1);	
	}	
	printf("\n\tForam gerados %i n�meros aleat�rios.", contador);

}
