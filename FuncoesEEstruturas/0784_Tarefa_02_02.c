#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2
Crie uma fun��o em C, do tipo void, que receba um caracter. Valida se � F/f ou M/m e escreve
feminino ou masculino ou inv�lido. */
generof (char a){
		printf("por favor indique o seu g�nero:\t");
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
			printf("Inv�lido.");
		}
}

main() {
	setlocale(LC_ALL,"Portuguese");
	char genero;
	generof(genero);

	}
	
