#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Pretende-se: 
Desenvolver um programa em C que gere um número aleatório entre 0 e 100. 
O utilizador vai ter 5 tentativas para adivinhar o número. 
A cada tentativa informa se o número está abaixo, acima ou se acertou. 
Se acertou o programa termina e deve dar a possibilidade de jogar outra vez. 
Se esgotadas as tentativas e não adivinhar mostra o número gerado e deve dar também a possibilidade de jogar oura vez.*/

main() {
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int contador, num_al=0, num_util=0;
	char opcao;

	printf("\tVamos jogar um jogo? S/N\t");
	scanf("%c", &opcao);
	while (opcao=='S'||opcao=='s'){
		
			num_al=(rand()%101);
			printf("\nTente advinhar o número escolhido pelo computador. Tem 5 tentativas!");
			contador=0;
			do{
				printf("\nTentativa número %i:\t", contador+1);
				scanf("%i", &num_util);
				if(num_util>num_al){
					printf("\nO número %i, está acima do número gerado pelo computador.", num_util, 5-contador-1);
				}
				if(num_util<num_al){
					printf("\nO número %i, está abaixo do número gerado pelo computador.", num_util, 5-contador-1);
					}
				if(num_util==num_al){
					printf("\nParabéns! Acertou em cheio! O número gerado pelo computador foi: %i", num_al);
					printf("Jogamos de novo?\t");
					scanf("%c", &opcao);	
					}
				contador++;
				if(contador==5){
					printf("\nEsgotou o número de tentaivas possíveis!");
					}
				}	
			while (contador<5);
			fflush(stdin);
			printf("\nO número gerador foi: %i.", num_al);
			printf("\nJogamos de novo?\t");
			scanf("%c", &opcao);
		}

		printf("\nSem problema, vemo-nos depois!");
	
}
