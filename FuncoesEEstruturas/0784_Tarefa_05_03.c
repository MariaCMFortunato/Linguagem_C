#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* 3. Escrever um programa em C que:
		a) Gere todo o conjunto A de 10 elementos inteiros entre 10 e 20;
		b) Construa e imprima um outro conjunto B formado da seguinte maneira:
			? os elementos de índice par têm o valor de A dividido por 4;
			?os elementos de índice ímpar têm o valor de A multiplicado por 2. */

main() {
	setlocale(LC_ALL, "Portuguese");
	int A[10], i=0;
	float B[10];
	srand(time(NULL));          
	             
	// a)
	for(i=0;i<10;i++){
		A[i]=rand()%11+10;
		printf("%i\t", A[i]);
	}
	printf("\n\n");
	//b)
	for(i=0;i<10;i++){
		if(i%2==0){
			B[i]=A[i]/4;
		}
		else{
			B[i]=(A[i])*2;
		}
		printf("%0.2f\t", B[i]);
	}
	printf("\n\n");	
}
