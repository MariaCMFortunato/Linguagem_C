#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Crie uma função em C, do tipo void, que receba um caracter. Valida se é F/f ou M/m e escreve
feminino ou masculino ou inválido. */
generof (char a){
		printf("por favor indique o seu género:\t");
	scanf("%c",&a);
	
	switch (a){
		case 'f':
		case 'F':
			printf("Feminino.");
			break;
		case 'm':
		case 'M':
			printf("Masculino.");
			break;
		default:
			printf("Inválido.");
		}
}

main() {
	setlocale(LC_ALL,"Portuguese");
	char genero;
	generof(genero);

	}
	
