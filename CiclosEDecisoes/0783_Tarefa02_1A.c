#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que mostre se um dado ano é bissexto ou comum.
Nota:
Um ano é bissexto quando é divisível por 4 e por 100 ou divisível por 400. */

main() {
	setlocale(LC_ALL, "");
	int ano=0;
	printf("Por favor indique o ano: ");
	scanf("%d", &ano);
	
	if(ano%4==0&&ano%100!=0||ano%400==0){
				printf("\nAno Bissexto!");
			}
		else{
		printf("Ano Comum!");
}
	
}


