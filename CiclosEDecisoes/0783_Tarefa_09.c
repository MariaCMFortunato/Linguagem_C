#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício
Crie um programa que gere 3 números aleatórios no intervalo [1:7]. 
Caso a saída corresponda a 
	3 setes o programa acumula 100 créditos, 
	se 2 setes 50 créditos, 
	um sete 25 créditos, 
	3 iguais diferentes de sete, 15 créditos,
	nenhuma das anteriores retira 20 créditos. 
O programa inicia com 100 créditos e 
	termina quando o 
		nº de créditos for zero ou 
		o utilizador decida interromper, 
		devendo apresentar o número de créditos obtidos. */

 main() {
	setlocale(LC_ALL,"");
	int num_al1=0, num_al2=0, num_al3=0, creditos=100;
	srand(time(NULL));
	char opcao;
	
	printf("\n\tJogo do sete sortudo!");
	
	do{
		num_al1=rand()%8; 
		num_al2=rand()%8;
		num_al3=rand()%8;
	
		printf ("\n%i\t%i\t%i",num_al1, num_al2, num_al3);
	
		if(num_al1==7&&num_al2==7&&num_al3==7){
			creditos+=100;
			printf("\nGanhou mais + 100 créditos!");
			printf("\nTem %3i créditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
		
		else if(num_al1==7&&num_al2==7||num_al2==7&&num_al3==7||num_al1==7&&num_al3==7){
			creditos+=50;
			printf("\nGanhou + 50 créditos!");
			printf("\nTem %3i créditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else if (num_al1==7||num_al2==7||num_al3==7) {
			creditos+=25;
			printf("\nGanhou + 25 créditos!");
			printf("\nTem %3i créditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else if (num_al1==num_al2&&num_al1==num_al3&&num_al1!=7) {
			creditos+=15;
			printf("\nGanhou + 15 créditos!");
			printf("\nTem %3i créditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else{
			creditos-=20;
			printf("\nPerdeu - 20 créditos!");
			printf("\nTem %3i créditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	}
	while(creditos>0&&(opcao=='s'||opcao=='S'));
	
	printf("Até à próxima!");
	
	
	
}
