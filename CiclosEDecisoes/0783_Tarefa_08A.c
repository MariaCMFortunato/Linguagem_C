#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Crie um programa que gere um número aleatório no intervalo [0;200] e 
solicite ao utilizador para adivinhar o número. 
Caso o utilizador acerte, imprima uma mensagem dando os parabéns e termina o programa. 
Caso o valor que o utilizador indique esteja incorreto, o programa deverá mostrar uma das seguintes mensagens:
	• Quase a arder! (caso o valor correto esteja a 5 unidades ou menos do valor fornecido pelo utilizador).
	• Muito Quente (caso o valor correto esteja de 6 a 10 unidades do valor fornecido).
	• Quente (caso o valor correto esteja de 11 a 20 unidades do valor fornecido).
	• Frio (caso o valor correto esteja de 21 a 30 unidades do valor fornecido).
	• Muito Frio (caso o valor correto esteja de 31 a 50 unidades do valor fornecido).
	• Gelado (caso o valor correto esteja de 51 a 75 unidades do valor fornecido).
	• Congelado! (caso o valor correto esteja a mais de 75 unidades do valor fornecido).
	->Deve dar oportunidade de repetir o programa.*/

main() {
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int num_al=0, num_util=0, diferenca=0;
	char opcao;

	printf("\tVamos jogar um jogo? S/N\t");
	scanf("%c", &opcao);
	

	
	while(opcao=='S'||opcao=='s'){
		num_al=(rand()%201);
		printf("\nTente advinhar o número gerado pelo computador.\t");
		scanf("%i", &num_util);
	
		do{
			if(num_util>num_al){
				diferenca=num_util-num_al; 
				}
			else if (num_util<num_al){
				diferenca=num_al-num_util;
				}		
			switch (diferenca){
				case 1 ... 5:
					printf("\nQuase a arder!");
					break;
				case 6 ... 10:
					printf("\nMuito Quente!");
					break;
				case 11 ... 20:
					printf("\nQuente!");
					break;
				case 21 ... 30:
					printf("\nFrio!");
					break;
				case 31 ... 50:
					printf("\nMuito Frio!");
					break;
				case 51 ... 75:
					printf("\nGelado!");
					break;	
				case 76 ... 200:
				printf("\nCongelado");
					}
			printf("\tTente de novo!\t");
					scanf("%i", &num_util);
				}
				while (num_al!=num_util);
		if(num_util==num_al){
				printf("\nParabéns! Acertou em cheio! O número gerado pelo computador foi: %i", num_al);
				}	
		fflush(stdin);
		printf("\nJogamos de novo?\t");
		scanf("%c", &opcao);
			}
		printf("\nSem problema, vemo-nos depois!");
		}

