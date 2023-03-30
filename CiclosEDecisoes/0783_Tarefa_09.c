#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exerc�cio
Crie um programa que gere 3 n�meros aleat�rios no intervalo [1:7]. 
Caso a sa�da corresponda a 
	3 setes o programa acumula 100 cr�ditos, 
	se 2 setes 50 cr�ditos, 
	um sete 25 cr�ditos, 
	3 iguais diferentes de sete, 15 cr�ditos,
	nenhuma das anteriores retira 20 cr�ditos. 
O programa inicia com 100 cr�ditos e 
	termina quando o 
		n� de cr�ditos for zero ou 
		o utilizador decida interromper, 
		devendo apresentar o n�mero de cr�ditos obtidos. */

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
			printf("\nGanhou mais + 100 cr�ditos!");
			printf("\nTem %3i cr�ditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
		
		else if(num_al1==7&&num_al2==7||num_al2==7&&num_al3==7||num_al1==7&&num_al3==7){
			creditos+=50;
			printf("\nGanhou + 50 cr�ditos!");
			printf("\nTem %3i cr�ditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else if (num_al1==7||num_al2==7||num_al3==7) {
			creditos+=25;
			printf("\nGanhou + 25 cr�ditos!");
			printf("\nTem %3i cr�ditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else if (num_al1==num_al2&&num_al1==num_al3&&num_al1!=7) {
			creditos+=15;
			printf("\nGanhou + 15 cr�ditos!");
			printf("\nTem %3i cr�ditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	
		else{
			creditos-=20;
			printf("\nPerdeu - 20 cr�ditos!");
			printf("\nTem %3i cr�ditos.\tJogamos de novo?", creditos);
			fflush(stdin);
			scanf("%c", &opcao);
		}
	}
	while(creditos>0&&(opcao=='s'||opcao=='S'));
	
	printf("At� � pr�xima!");
	
	
	
}
