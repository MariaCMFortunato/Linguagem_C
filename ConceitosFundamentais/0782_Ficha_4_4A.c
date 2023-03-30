#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Numa casa existe uma caixa no exterior que serve como reservatório de água. 
Considerando a caixa retangular, crie um programa que leia as dimensões (comprimento, altura e largura), 
calcule e escreva o volume de água que pode ser armazenado.
 */

main() {
	setlocale(LC_ALL,"Portuguese");
	
	float comprimento=0 ,altura=0 ,largura=0;
	printf("Por favor indique as medidas do reservatório de água em metros.");
	printf("\n\nIndique o comprimento: \t");
	scanf("%f", &comprimento);
	printf("\nIndique a altura: \t");
	scanf("%f", &altura);
	printf("\n\nIndique a largura: \t");
	scanf("%f", &largura);
	printf("\nO volume de água que o reservatório pode armazenar é:\t %0.4f metros cubicos\n\n\n",comprimento*altura*largura);
		
	
		
}

