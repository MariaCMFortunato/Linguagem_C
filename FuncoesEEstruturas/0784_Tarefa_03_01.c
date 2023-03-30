#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 1
Crie uma programa em C, que receba 5 números inteiros e os armazene num array. 
Crie um 2º array com os mesmos valores do 1º. Mostre os valores.*/

 main() {
	setlocale(LC_ALL,"Portuguese");
	int numeros[5], tabela[5], posicao=0;
	
	for(posicao=0;posicao<5;posicao++){
		printf("Por favor indique o número para a %iª posicao: ", (posicao+1));
		scanf("%i", &numeros[posicao]);
	}
	posicao=0;	
	for (posicao=0;posicao<5;posicao++){
		tabela[posicao]=numeros[posicao];
		printf("\nO valor da tabela para a %iª posicao, é: %i",(posicao+1), tabela[posicao]);
	}
	
}              
