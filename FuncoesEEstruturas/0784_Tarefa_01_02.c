#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Crie uma função em C, do tipo void, que receba um valor float e uma percentagem de desconto e
apresente o valor do desconto. */

void vDesconto (float x, float y){
	printf("Desconto: %0.2f Euros X %0.2f% = %0.2f Euros",x,y,x*y/100 );
	
	
	}


 main() {
	setlocale(LC_ALL,"Portuguese");
	float preco=0, desconto=0;
	printf("Por favor, indique o valor base:\t");
	scanf("%f", &preco);
	
	printf("Por favor, indique o percentagem de desconto:\t");
	scanf("%f", &desconto);	
	
	vDesconto(preco,desconto);
	
	
}

