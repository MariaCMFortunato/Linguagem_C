#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercício 3
Crie uma programa em C, que gere 20 números aleatórios (entre 0 e 50), e os armazene num array.
Será solicitado ao utilizador um número entre 0 e 50 por forma a verificar se o mesmo se encontra no
array. 

Se sim informa em que posição(ões) senão escreve que o número não existe.*/

 main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int tabela[20], numero=0, posicao=0, existe=0;
	
	for(posicao=0;posicao<20;posicao++){
		tabela[posicao]=rand()%51;
	}
	
	
	printf("Por favor, indique o número a procurar: ");
	scanf("%i", &numero);
	posicao=0;	
	for (posicao=0;posicao<20;posicao++){
		if(tabela[posicao]==numero){
			printf("O número que indicou encontra-se na %iª posição\n",(posicao+1));
			existe=1;
		}
	}
	
	if (existe==0){
		printf("\nO número não existe!");
	}
// o código abaixo é para verificar a correção das respostas obtidas e das posição indicadas
	for(posicao=0;posicao<20;posicao++){
		printf("\nO valor da tabela para a %iª posicao, é: %i",(posicao+1), tabela[posicao]);
	}		
}
	             

