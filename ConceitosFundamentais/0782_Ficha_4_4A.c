#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Numa casa existe uma caixa no exterior que serve como reservat�rio de �gua. 
Considerando a caixa retangular, crie um programa que leia as dimens�es (comprimento, altura e largura), 
calcule e escreva o volume de �gua que pode ser armazenado.
 */

main() {
	setlocale(LC_ALL,"Portuguese");
	
	float comprimento=0 ,altura=0 ,largura=0;
	printf("Por favor indique as medidas do reservat�rio de �gua em metros.");
	printf("\n\nIndique o comprimento: \t");
	scanf("%f", &comprimento);
	printf("\nIndique a altura: \t");
	scanf("%f", &altura);
	printf("\n\nIndique a largura: \t");
	scanf("%f", &largura);
	printf("\nO volume de �gua que o reservat�rio pode armazenar �:\t %0.4f metros cubicos\n\n\n",comprimento*altura*largura);
		
	
		
}

