#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 3
Crie uma programa em C, que gere 20 n�meros aleat�rios (entre 0 e 50), e os armazene num array.
Ser� solicitado ao utilizador um n�mero entre 0 e 50 por forma a verificar se o mesmo se encontra no
array. 

Se sim informa em que posi��o(�es) sen�o escreve que o n�mero n�o existe.*/

 main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int tabela[20], numero=0, posicao=0, existe=0;
	
	for(posicao=0;posicao<20;posicao++){
		tabela[posicao]=rand()%51;
	}
	
	
	printf("Por favor, indique o n�mero a procurar: ");
	scanf("%i", &numero);
	posicao=0;	
	for (posicao=0;posicao<20;posicao++){
		if(tabela[posicao]==numero){
			printf("O n�mero que indicou encontra-se na %i� posi��o\n",(posicao+1));
			existe=1;
		}
	}
	
	if (existe==0){
		printf("\nO n�mero n�o existe!");
	}
// o c�digo abaixo � para verificar a corre��o das respostas obtidas e das posi��o indicadas
	for(posicao=0;posicao<20;posicao++){
		printf("\nO valor da tabela para a %i� posicao, �: %i",(posicao+1), tabela[posicao]);
	}		
}
	             

