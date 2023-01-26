#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*xercício 2
Crie uma programa em C, que guarde os 10 primeiros números pares (2, 4, 6, 8, 10, 12, 14, 16, 18, 20).
Mostre os números.*/

 main() {
	setlocale(LC_ALL,"Portuguese");
	int pares[10], posicao=0, n=2;
	
	for(posicao=0;posicao<10;posicao++){
		pares[posicao]=n;
		n+=2;
	}
	posicao=0;	
	for (posicao=0;posicao<10;posicao++){
		printf("\nO valor da %iª posicao, é: %i",(posicao+1), pares[posicao]);
	}
	
}              

