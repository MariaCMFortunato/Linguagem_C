#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5. Escreva um programa completo que, dados dois n�meros inteiros, mostre o maior deles, assim,
como a diferen�a existente entre ambos */

main() {
	setlocale(LC_ALL,"");
	int n1=0, n2=0;
	printf("Indique o primeiro n�mero inteiro: \t");
	scanf("%i", &n1);
	printf("Indique o primeiro n�mero inteiro: \t");
	scanf("%i", &n2);	
	if(n1>n2){
		printf("\nEntre o n�mero %i, e o n�mero %i, o maior �: %i", n1, n2, n1);
	}	
	else if(n2>n1){
		printf("\nEntre o n�mero %i, e o n�mero %i, o maior �: %i", n1, n2, n2);
	}
	else{
		printf("\nO n�mero %i � igual ao n�mero %i.", n1, n2);
	}
	printf("\nA diferen�a entre os dois n�meros �: %i", n2-n1);
}
