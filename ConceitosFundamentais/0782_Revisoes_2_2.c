#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exercício 2
Crie um programa que converta graus Celsius em Fahrenheit. 
F = 37 x 1,8 + 32
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float tempcelsius=0;
	printf("Por favor, indique a temperatura em graus Celsius:\t");
	scanf("%f",&tempcelsius);
	
	printf("\n\n a temperatura de %.2f graus Celsius, representa %.2f graus Fahrenheit.\n\n",tempcelsius, (tempcelsius*1.8)+32);
	


}
