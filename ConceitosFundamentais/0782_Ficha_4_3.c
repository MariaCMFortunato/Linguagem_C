#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que leia a idade do pai e a idade do filho. 
Calcular e escrever a diferen�a de idade entre ambos.
 */

main() {
	setlocale(LC_ALL, "Portuguese");
	int idadepai=0, idadefilho=0;
	printf("Por favor, digite a idade do pai:\t");
	scanf("%i", &idadepai);
	printf("\nPor favor digite a idade do filho:\t");
	scanf("%i", &idadefilho);
	printf("\nA diferen�a de idades entre ambos �: \t%i\n\n",idadepai-idadefilho);
			
}
