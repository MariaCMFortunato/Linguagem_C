#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 1
Ler o valor do raio de um c�rculo e calcular a �rea desse c�rculo.
A=PI x raio^2
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float raio=0;
	float const PI=3.14159;
	printf("Por favor, indique o raio do circulo: ");
	scanf("%f",&raio);
	printf("\n\nA �rea do circulo de raio %.4f � %.6f.", raio,PI*(raio*raio));
	
}
