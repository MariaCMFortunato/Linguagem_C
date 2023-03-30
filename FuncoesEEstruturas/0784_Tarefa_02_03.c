#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 3
Crie uma função em C, do tipo void, que gere um número aleatório entre 10 e 50 e devolva a
informação se o número é divisível por 5. */
void numero(int n){
	n = rand()%41+10;
	if(n%5==0){
		printf("Foi gerado o número %i, que é divisível por 5.", n);
	}
	else{
		printf("O número gerado (%i) não é divisível por 5.", n);
	}	
}

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int a=0;
	numero(a);
	
	
}
