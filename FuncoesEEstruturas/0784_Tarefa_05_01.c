#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Dado o array VET, inteiro de 20 posi��es, desenvolver um programa em C para cada
um dos itens abaixo:
	a) preench�-lo com o valor do (�ndice+1).mostrar os dados.
	b) preench�-lo com os n�meros inteiros 1, 2, 3, ..., 20; mostrar os dados.
	c) preencher VET(i ) com 10, se i � �mpar, e com 20 se for par; mostrar os dados */

main() {
	setlocale(LC_ALL,"Portuguese");
	int vet[100], indice=0;
	
	//a) preench�-lo com o valor do (�ndice+1).
	for (indice=0;indice<20;indice++){
		vet[indice]=(indice+1);
		printf("%i\t", vet[indice]);
	}

	printf("\n\n");
	//b) preench�-lo com os n�meros inteiros 1, 2, 3, ..., 20
	for (indice=0;indice<20;indice++){
		vet[indice]=(indice+1);
		printf("%i\t", vet[indice]);
	}
	printf("\n\n");
	//c) preencher VET(i ) com 10, se i � �mpar, e com 20 se for par.
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
