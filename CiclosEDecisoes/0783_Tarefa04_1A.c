#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Pretende-se desenvolver, em C, um programa que calcule:
	 	a hora e o minuto de chegada de um determinado voo. 
	É solicitado ao utilizador: 
		a hora de partida, 
		minuto de partida, 
		hora da duração, 
		minuto da duração 
	e apresente a hora e minuto de chegada.

As horas de partida e duração devem ser validadas e os valores situam-se entre 0 e 23,
enquanto que os minutos de partida e duração estão compreendidos entre 0 e 59. 
O
programa deve ainda informar se o voo chega no próprio dia ou no dia seguinte */


main() {
	setlocale(LC_ALL,"");
	int hp=0, mp=0, hd=0, md=0, hc=0, mc=0;
	
	printf("Por favor indique a hora de Partida do voo: \t");
	scanf("%i", &hp);
	printf("Por favor indique o minuto de Partida do voo: \t");
	scanf("%i", &mp);
	
	printf("Por favor indique a hora de Duração do voo: \t");
	scanf("%i", &hd);
	printf("Por favor indique o minuto de Duração do voo: \t");
	scanf("%i", &md);
	
	if((hp>=0&&hp<=23)&&(mp>0&&mp<=60)&&(hd>=0&&hd<=23)&&(md>0&&md<=60)) {
		
		hc=hp+hd;
		mc=mp+md;
	
		printf("\n\n\t 00 \t000\t000  \t 00 \t000 \t 00  \t000  \t00000\t 00\n");
		printf("\t0  0\t0  \t0  0 \t0  0\t0  0\t0  0 \t0  0 \t  0  \t0  0\n");
		printf("\t0000\t000\t000  \t0  0\t000 \t0  0 \t000  \t  0  \t0  0\n");
		printf("\t0  0\t0  \t0  0 \t0  0\t0   \t0  0 \t0  0 \t  0  \t0  0\n");
		printf("\t0  0\t000\t0   0\t 00 \t0   \t 00  \t0   0\t  0  \t 00 \n\n");
	
	
		if(mc>=60){
			mc=mc-60;
			hc++;
		}
		if(hc>=24){
			hc=hc-24;
			printf("\n\n\t\t\t\tO VOO CHEGARÁ NO DIA SEGUINTE\n!");
		}
		else {
			printf("\n\n\t\t\t\tO VOO CHEGA NO PRÓPRIO DIA\n!");
		}
		printf("\n\t\t\t\tPARTIDA:\n \t\t\t\tHora: %2.2i\tMinuto: %2.2i",hp,mp);
		printf("\n\n\n\t\t\t\tDURAÇÃO:\n \t\t\t\tHora: %2.2i\tMinuto: %2.2i",hd,md);
		printf("\n\n\n\t\t\t\tCHEGADA:\n \t\t\t\tHora: %2.2i\tMinuto: %2.2i\n\n",hc,mc);

	}
	else{
		printf("\n\n\t\t\tOs dados inseridos não são válidos.\n\n");
	}	
}



