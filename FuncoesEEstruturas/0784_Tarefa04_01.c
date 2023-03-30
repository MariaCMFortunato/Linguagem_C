#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 1. Dado o array VET, inteiro de 100 posições, desenvolver um programa em C para
	cada um dos itens abaixo:
		a) preenchê-lo com o valor inteiro 30; mostrar os dados.
		b) preenchê-lo com os números inteiros 1, 2, 3, ..., 100; mostrar os dados.
		c) preencher VET(i ) com 1, se i é ímpar, e com 0 se for par; mostrar os dados. */

main() {
	setlocale(LC_ALL,"Portuguese");
	int vet[100], indice=0;
	
	//preenchê-lo com o valor inteiro 30; mostrar os dados.
	for (indice=0;indice<100;indice++){
		vet[indice]=30;
		printf("\t%i",vet[indice]);
	}

	//preenchê-lo com os números inteiros 1, 2, 3, ..., 100; mostrar os dados.
	printf("\n\n");
	for (indice=0;indice<100;indice++){
		vet[indice]=indice+1;
		printf("\t%i",vet[indice]);
	}

		//preencher VET(i ) com 1, se i é ímpar, e com 0 se for par; mostrar os dados.
	printf("\n\n");
	for (indice=0;indice<100;indice++){
		if(indice%2==0){
			vet[indice]=0;	
		}
		else{
			vet[indice]=1;
		}
		printf("\t%i",vet[indice]);
	}
}
