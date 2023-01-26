#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 3
Programa para calcular a área de um círculo (A = p . r2). 
Desta vez, se o utilizador introduzir um valor
negativo para o raio, o programa volta a pedir um valor para o raio e só depois calcula a área. 
*/

main() {
	setlocale(LC_ALL,"");
	float raio=0;
	printf ("\n\t\tO programa calcula a área de um círculo.\n\t\tO número a indicar não pode ser negativo.\n");
	while(raio<=0){
		printf("\n\t\tPor favor indique um valor para o raio: ");
		scanf("%f", &raio);
	}
	printf("\n\t\tA aréa do círculo de raio %0.2f é: %0.2f.\n\n", raio, pow(raio,2)*3.14159);
	
	
}
