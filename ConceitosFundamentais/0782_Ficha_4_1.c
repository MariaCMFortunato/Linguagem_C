#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Codifique em C um programa que leia um n�mero inteiro e escreva o seu pr�ximo e o seu anterior.
 */

main() {
	setlocale(LC_ALL, "Portuguese");
	int num=0;
	printf("Digite um n�mero inteiro:");
	scanf("%i",&num);
	printf("Indicou o n�mero %i. \nO n�mero seguinte � %i. \nO n�mero anterior � %i \n\n\n",num, num+1, num-1);
	
	
	
}


