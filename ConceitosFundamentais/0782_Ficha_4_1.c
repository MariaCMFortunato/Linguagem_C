#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Codifique em C um programa que leia um número inteiro e escreva o seu próximo e o seu anterior.
 */

main() {
	setlocale(LC_ALL, "Portuguese");
	int num=0;
	printf("Digite um número inteiro:");
	scanf("%i",&num);
	printf("Indicou o número %i. \nO número seguinte é %i. \nO número anterior é %i \n\n\n",num, num+1, num-1);
	
	
	
}


