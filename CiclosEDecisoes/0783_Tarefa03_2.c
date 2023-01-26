#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Faça um programa para verificar se um determinado número, fornecido pelo utilizador, é divisível
por 3 ou por 5 mas não por ambos */

main() {
	setlocale(LC_ALL,"");
	int num=0;
	printf("Por favor, digite número inteiro: \t");
	scanf("%i",&num);
	
	if(num%3==0)
	{		
	printf("\nO número indicado é divisível por 3.");
	}
	if(num%5==0)
	{		
	printf("\nO número indicado é divisível por 5.");
	}


}


	

