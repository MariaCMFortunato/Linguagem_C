#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 1
Crie uma programa em C, que receba 5 n�meros inteiros e os armazene num array. 
Crie um 2� array com os mesmos valores do 1�. Mostre os valores.*/

 main() {
	setlocale(LC_ALL,"Portuguese");
	int numeros[5], tabela[5], posicao=0;
	
	for(posicao=0;posicao<5;posicao++){
		printf("Por favor indique o n�mero para a %i� posicao: ", (posicao+1));
		scanf("%i", &numeros[posicao]);
	}
	posicao=0;	
	for (posicao=0;posicao<5;posicao++){
		tabela[posicao]=numeros[posicao];
		printf("\nO valor da tabela para a %i� posicao, �: %i",(posicao+1), tabela[posicao]);
	}
	
}              
