#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 1
Ler o valor do raio de um círculo e calcular o perímetro desse círculo.
A=2 x PI X raio
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float raio=0;
	float const PI=3.14159;
	printf("Por favor indique o raio da circunferência, em cm: \t");
	scanf("%f", &raio);
	
	printf("\n\nO Perímetro de uma circunferência de raio %0.3f é: \t%0.3f centímetros.\n\n", raio, PI*raio*2);
	


}
