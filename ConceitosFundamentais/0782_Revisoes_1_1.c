#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 1
Ler o valor do raio de um círculo e calcular a área desse círculo.
A=PI x raio^2
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float raio=0;
	float const PI=3.14159;
	printf("Por favor, indique o raio do circulo: ");
	scanf("%f",&raio);
	printf("\n\nA área do circulo de raio %.4f é %.6f.", raio,PI*(raio*raio));
	
}
