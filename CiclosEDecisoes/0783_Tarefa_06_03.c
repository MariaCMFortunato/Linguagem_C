#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 3
Programa para calcular a �rea de um c�rculo (A = p . r2). 
Desta vez, se o utilizador introduzir um valor
negativo para o raio, o programa volta a pedir um valor para o raio e s� depois calcula a �rea. 
*/

main() {
	setlocale(LC_ALL,"");
	float raio=0;
	printf ("\n\t\tO programa calcula a �rea de um c�rculo.\n\t\tO n�mero a indicar n�o pode ser negativo.\n");
	while(raio<=0){
		printf("\n\t\tPor favor indique um valor para o raio: ");
		scanf("%f", &raio);
	}
	printf("\n\t\tA ar�a do c�rculo de raio %0.2f �: %0.2f.\n\n", raio, pow(raio,2)*3.14159);
	
	
}
