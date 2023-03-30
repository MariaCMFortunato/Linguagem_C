#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2. Criar um programa em C para preencher cada um dos arrays indicados abaixo:
		A
		10 9 8 7
		0 1 2 3 ... … 9
		B
		20 18 16 14
		0 1 2 3 ... … 9
		C
		10 15 20 25
		0 1 2 3 ... … 9
		D
		1 3 5 7
		0 1 2 3 ... … 9
	a) Mostrar os dados. */

	main() {
		setlocale(LC_ALL, "Portuguese");
		int A[10],B[10],C[10],D[10],i=0;
		
		for (i=0;i<10;i++){
			A[i]=10-i;
			printf("%i\t", A[i]);
		}
		printf("\n\n");
		for (i=0;i<10;i++){
			B[i]=20-2*i;
			printf("%i\t", B[i]);
		}
		printf("\n\n");
		for (i=0;i<10;i++){
			C[i]=10+5*i;
			printf("%i\t", C[i]);
		}	
		printf("\n\n");
		for (i=0;i<10;i++){
			D[i]=2*i+1;
			printf("%i\t", D[i]);
		}	
		printf("\n\n");		
	}
