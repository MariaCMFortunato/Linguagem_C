#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 6. Escreva um programa que, dada a idade de um nadador, classifique-o numa das categorias
especificadas na tabela:
Categoria 			Idade
Infantil A 			5 a 7 anos
Infantil B 			8 a 10 anos
Infanto-juvenil	 	11 a 13 anos
Juvenil 			14 a 17 anos
Sénior 			maiores de 18 anos */

main() {
	setlocale(LC_ALL,"");
	int idade=0, categoria=0;
	printf("Por favor, indique a idade nadador: \t ");
	scanf("%i", &idade);
	
	if (idade<=5){
		printf("\nAinda não tem idade para competir.\n");
		}
	if (idade<=7&&idade>=5){
		printf("\nCategoria Infantil A.\n");
		}
	if (idade<=10&&idade>=8){
		printf("\nCategoria Infantil B.\n");
		}
	if (idade<=13&&idade>=11){
		printf("\nCategoria Infanto-juvenil.\n");
		}
	if (idade<=17&&idade>=14){
		printf("\nCategoria Juvenil.\n");
		}
	if (idade>=18){
		printf("\nCategoria Sénior.\n");
		}
}

