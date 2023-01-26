#include <stdio.h>
#include <stdlib.h>

/* Exercício 2
Implemente um programa que leia quantos minutos por dia um aluno pode estudar. 
Calcule e escreva ao final de 90 dias quanto tempo em horas ele estudou. */

main() {
	int minutos=0, horas=0;
	int const dias=90;
	printf("O programa calcula quantas horas consegue estudar em 90 dias.\n\nPor favor indique quantos minutos consegue estudar por dia:");
	scanf("%d", &minutos);
	minutos=minutos*dias;
	horas=minutos/60;
	minutos=minutos-horas*60;
	printf("\n\n\nAo final de 90 dias vai estudar %d horas e %d minutos.\n\n\n", horas, minutos);
	
	
}
