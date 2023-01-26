#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* 3. Escrever um programa em C que:
	a) Gere todo o conjunto A de 100 elementos inteiros entre 0 e 20;
	b) Construa e imprima um outro conjunto B formado da seguinte maneira:
		os elementos de índice par têm o valor de A dividido por 2;
		os elementos de índice ímpar têm o valor de A multiplicado por 3 */

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int A[100], B[100], indice=0;
	
	for(indice=0;indice<100;indice++){
		A[indice]=rand()%21;
		if(indice%2==0){
			B[indice]=A[indice]/2;
		}
		else{
			B[indice]=A[indice]*3;
		}		
	}
	for(indice=0;indice<100;indice++){
		printf("\n");
		printf("\t%i", A[indice]);
		printf("\t%i", B[indice]);
	}
	
	
}
