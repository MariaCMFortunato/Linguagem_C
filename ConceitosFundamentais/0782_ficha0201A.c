#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 1
Crie um programa em C que leia dois valores para as vari�veis A e B. 
Efetue a troca dos valores, para que a vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B 
passe a ter o valor da vari�vel A. Apresente os valores trocados. */

main() {
	int a=0, b=0;
	printf("Programa para trocar os valores de duas variaveis.\n\nPor favor digite o valor da variavel A:");
	scanf("%d", &a);
	printf("\nPor favor digite o valor da variavel B:");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nO novo valor de A e %d, e o novo valor de B e %d.\n\n\n",a,b);
	
}
