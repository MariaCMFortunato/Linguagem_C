#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 1
Fa�a um programa que mostre no ecr� os n�meros naturais entre 0 (zero) e 100. 
Crie tr�s vers�es desse programa, cada uma usando uma estrutura de repeti��o
diferente. */

main() {
	setlocale(LC_ALL,"");
	int numero=0;
	
	while(numero<101){	
		printf("%i\n", numero);
		numero++;
}
    numero=0;
	do{
		printf("\t%i\n", numero);	
		numero++;	
	}	
	while(numero<=100);
		
	for(numero=0;numero<=100;numero++){
			printf("\t\t%i\n", numero);
	}
}
