#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 5
Escreva um programa para determinar o tipo de bilhete que cada visitante de um parque de divers�es deve
comprar. 
O tipo de bilhete � determinado em fun��o da idade, de acordo com a seguinte tabela:
Idade 				Bilhete
<6 				Isento de Pagamento
Entre 6 e 12 	Bilhete de Crian�a
Entre 13 e 65 	Bilhete Normal
>65 Bilhete de 	3� Idade */

main() {
	setlocale(LC_ALL,"");
	int idade=0;
	printf("Por favor, indique a idade do aquirente do bilhete: \t ");
	scanf("%i", &idade);
	
	if (idade<6){
		printf("\nIsento de pagamento.\n");
			}
	else if (idade<13){
		printf("\nBilhete de crian�a.\n");
	}
	else if (idade<=65){
		printf("\nBilhete Normal.\n");
	}
	else{
		printf("\nBilhete de 3� idade.\n");
	}
	
	
}
