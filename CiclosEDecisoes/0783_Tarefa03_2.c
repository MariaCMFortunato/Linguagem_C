#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Fa�a um programa para verificar se um determinado n�mero, fornecido pelo utilizador, � divis�vel
por 3 ou por 5 mas n�o por ambos */

main() {
	setlocale(LC_ALL,"");
	int num=0;
	printf("Por favor, digite n�mero inteiro: \t");
	scanf("%i",&num);
	
	if(num%3==0)
	{		
	printf("\nO n�mero indicado � divis�vel por 3.");
	}
	if(num%5==0)
	{		
	printf("\nO n�mero indicado � divis�vel por 5.");
	}


}


	

