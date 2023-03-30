#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Pretende-se: 
Desenvolver um programa em C que gere um n�mero aleat�rio entre 0 e 100. 
O utilizador vai ter 5 tentativas para adivinhar o n�mero. 
A cada tentativa informa se o n�mero est� abaixo, acima ou se acertou. 
Se acertou o programa termina e deve dar a possibilidade de jogar outra vez. 
Se esgotadas as tentativas e n�o adivinhar mostra o n�mero gerado e deve dar tamb�m a possibilidade de jogar oura vez.*/

main() {
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int contador, num_al=0, num_util=0;
	char opcao;

	printf("\tVamos jogar um jogo? S/N\t");
	scanf("%c", &opcao);
	while (opcao=='S'||opcao=='s'){
		
			num_al=(rand()%101);
			printf("\nTente advinhar o n�mero escolhido pelo computador. Tem 5 tentativas!");
			contador=0;
			do{
				printf("\nTentativa n�mero %i:\t", contador+1);
				scanf("%i", &num_util);
				if(num_util>num_al){
					printf("\nO n�mero %i, est� acima do n�mero gerado pelo computador.", num_util, 5-contador-1);
				}
				if(num_util<num_al){
					printf("\nO n�mero %i, est� abaixo do n�mero gerado pelo computador.", num_util, 5-contador-1);
					}
				if(num_util==num_al){
					printf("\nParab�ns! Acertou em cheio! O n�mero gerado pelo computador foi: %i", num_al);
					printf("Jogamos de novo?\t");
					scanf("%c", &opcao);	
					}
				contador++;
				if(contador==5){
					printf("\nEsgotou o n�mero de tentaivas poss�veis!");
					}
				}	
			while (contador<5);
			fflush(stdin);
			printf("\nO n�mero gerador foi: %i.", num_al);
			printf("\nJogamos de novo?\t");
			scanf("%c", &opcao);
		}

		printf("\nSem problema, vemo-nos depois!");
	
}
