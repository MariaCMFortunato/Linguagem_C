#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exerc�cio 3
Crie uma fun��o em C, do tipo void, que gere um n�mero aleat�rio entre 10 e 50 e devolva a
informa��o se o n�mero � divis�vel por 5. */
void numero(int n){
	n = rand()%41+10;
	if(n%5==0){
		printf("Foi gerado o n�mero %i, que � divis�vel por 5.", n);
	}
	else{
		printf("O n�mero gerado (%i) n�o � divis�vel por 5.", n);
	}	
}

main() {
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int a=0;
	numero(a);
	
	
}
