#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Dado o array VET, inteiro de 20 posições, desenvolver um programa em C para cada
um dos itens abaixo:
	a) preenchê-lo com o valor do (índice+1).mostrar os dados.
	b) preenchê-lo com os números inteiros 1, 2, 3, ..., 20; mostrar os dados.
	c) preencher VET(i ) com 10, se i é ímpar, e com 20 se for par; mostrar os dados */

main() {
	setlocale(LC_ALL,"Portuguese");
	int vet[100], indice=0;
	
	//a) preenchê-lo com o valor do (índice+1).
	for (indice=0;indice<20;indice++){
		vet[indice]=(indice+1);
		printf("%i\t", vet[indice]);
	}

	printf("\n\n");
	//b) preenchê-lo com os números inteiros 1, 2, 3, ..., 20
	for (indice=0;indice<20;indice++){
		vet[indice]=(indice+1);
		printf("%i\t", vet[indice]);
	}
	printf("\n\n");
	//c) preencher VET(i ) com 10, se i é ímpar, e com 20 se for par.
	for (indice=0;indice<20;indice++){
		if(indice%2==0){
		vet[indice]=20;	
		}
		else{
			vet[indice]=10;
		}
		printf("%i\t", vet[indice]);
	}
}
