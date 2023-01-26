#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Crie uma função em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20) e escreva
“Aprovado” (Se maior do que 12), “Exame” (Entre 10 e 12), “Reprovado” (Se menor do que 10). */

void resultado (int a){
	switch(a){
		case 13 ... 20:
			printf("\t\tAprovado!");
			break;
		case 10 ... 12:
			printf("\t\tExame!");
			break;
		default:
			printf("\t\tReprovado!");
		}
}

 main() {
	setlocale(LC_ALL,"Portuguese");
	int nota;
	printf("Por favor indique a nota final do aluno:\n\t\t");
	scanf("%i", &nota);
	
	resultado(nota);
	
	
}
