#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2
Crie um programa que escreva no ecr� os n�meros de 1 a 100 e os respetivos quadrados. 
O resultado 	do programa deve ser:
	Sa�da:
	1 1
	2 4
	3 9
	4 16
	5 �
	...
	100 10000*/

main() {
	setlocale(LC_ALL,"");
	int contador=0;
	printf("\tO programa informa os quadros dos primeiros 100 numeros inteiros:\n");
	while(contador<100){
		contador++;
		printf("\t\tO quadrado de %i � %i\n", contador, contador*contador);
	}
	
	
}

