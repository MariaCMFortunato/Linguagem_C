#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:
	A
	100 99 98 97 ...
	0 1 2 3 ... … 99
	B
	200 198 196 194
	0 1 2 3 ... … 99
	C
	10 20 30 40
	0 1 2 3 ... … 99
	D
	10 12 14 16
	0 1 2 3 ... … 9
a) Mostrar os dados. */


 main() {
	setlocale(LC_ALL,"Portuguese");
	int A[100], B[100], C[100], D[10],indice=0;
	
	for(indice=0;indice<100; indice++){
		A[indice]=100-indice;
		B[indice]=200-indice*2;
		C[indice]=(indice+1)*10;
	}
	for(indice=0;indice<10; indice++){	
			D[indice]=10-indice;	
	}

	for(indice=0;indice<100;indice++){
		printf("\t%i", A[indice]);
	}
	printf("\n\n");
	for(indice=0;indice<100;indice++){
		printf("\t%i", B[indice]);
	}
	printf("\n\n");
	for(indice=0;indice<100;indice++){
		printf("\t%i", C[indice]);
	}
	printf("\n\n");
		for(indice=0;indice<10;indice++){
		printf("\t%i", D[indice]);
	}
}
