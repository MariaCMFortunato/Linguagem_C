#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um algoritmo que mostre se um dado ano � bissexto ou comum.
Nota:
Um ano � bissexto quando � divis�vel por 4 e por 100 ou divis�vel por 400. */

main() {
	setlocale(LC_ALL, "");
	int ano=0;
	printf("Por favor indique o ano: ");
	scanf("%d", &ano);
	
	if(ano%4==0&&ano%100==0||ano%400==0){
	printf("\nAno Bissexto!");
	}
	else{
		printf("Ano Comum!");
	}
	
}

/*NOTA: Na verdade um ano � bissexto quando � dis�vel por 4 e n�o por 100, excepto se for divis�vel por 400, 
porque na formula��o usada o ano de 2012, por exemplo n�o d� como ano bissexto porque falha no crit�rio da divisibilidade por 100*/
