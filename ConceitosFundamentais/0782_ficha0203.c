#include <stdio.h>
#include <stdlib.h>

/* Exerc�cio 3
Uma institui��o de ensino realizou uma pesquisa sobre os eleitores de um munic�pio que participaram numa dada elei��o. 
Crie um programa que leia o total de votos brancos, nulos e v�lidos. 
Calcule e escreva a percentagem que cada um representa em rela��o ao total de eleitores. */

main() {
	float vbrancos=0, vnulos=0, vvalidos=0;
	printf("Este programa calcula a percentagem de votos brancos, nulos e validos. \n\n\nPor favor indique:\n ----------------- numero de votos brancos: ");
	scanf("%d",&vbrancos);
	printf(" ----------------- numero de votos nulos:   ");
	scanf("%d",&vnulos);
	printf(" ----------------- numero de votos validos: ");
	scanf("%d",&vvalidos);
	printf("\n\nA percentagem de votos brancos e %0.1f %%.",((vbrancos/(vbrancos+vnulos+vvalidos))*100));
	printf("\nA percentagem de votos nulos e   %0.1f %%.",((vnulos/(vbrancos+vnulos+vvalidos))*100));
	printf("\nA percentagem de votos validos e %0.1f %% \n\n\n", ((vvalidos/(vbrancos+vnulos+vvalidos))*100));
	
	
	
}
