#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1. Dado o array VET, inteiro de 100 posi��es, desenvolver um programa em C para
	cada um dos itens abaixo:
		a) preench�-lo com o valor inteiro 30; mostrar os dados.
		b) preench�-lo com os n�meros inteiros 1, 2, 3, ..., 100; mostrar os dados.
		c) preencher VET(i ) com 1, se i � �mpar, e com 0 se for par; mostrar os dados. */
void Preencher1(){
	//al�nea a)
	int vet[100], indice=0;
		for (indice=0;indice<100;indice++)
		{
		vet[indice]=30;
		printf("\t%i",vet[indice]);
		}
	}		

void Preencher2(){
	//al�nea b)
	int vet[100], indice=0;
	for (indice=0;indice<100;indice++){
		vet[indice]=indice+1;
		printf("\t%i",vet[indice]);
	}
}

void Preencher3(){
	//al�nea c)
	int vet[100], indice=0;
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

main() {
	setlocale(LC_ALL,"Portuguese");

	Preencher1();
	printf("\n\n");
	Preencher2();
	printf("\n\n");	
	Preencher3();
	printf("\n\n");	


}

