#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5. Escreva um programa completo que, dados dois números inteiros, mostre o maior deles, assim,
como a diferença existente entre ambos */

main() {
	setlocale(LC_ALL,"");
	int n1=0, n2=0;
	printf("Indique o primeiro número inteiro: \t");
	scanf("%i", &n1);
	printf("Indique o primeiro número inteiro: \t");
	scanf("%i", &n2);	
	if(n1>n2){
		printf("\nEntre o número %i, e o número %i, o maior é: %i", n1, n2, n1);
	}	
	else if(n2>n1){
		printf("\nEntre o número %i, e o número %i, o maior é: %i", n1, n2, n2);
	}
	else{
		printf("\nO número %i é igual ao número %i.", n1, n2);
	}
	printf("\nA diferença entre os dois números é: %i", n2-n1);
}
