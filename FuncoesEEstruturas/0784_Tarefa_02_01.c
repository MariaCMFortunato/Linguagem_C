#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 1
Crie uma fun��o em C, do tipo void, que receba 3 n�meros e apresente o maior. */
void maior(int numero1, int numero2, int numero3, int maior){
	printf("Por, favor indique o primeiro n�mero:\t");
	scanf("%i", &numero1);
	maior=numero1;
	
	printf("Por, favor indique o segundo n�mero:\t");
	scanf("%i", &numero2);
	if(numero2>maior){
		maior=numero2;
	}
	printf("Por, favor indique o terceiro n�mero:\t");
	scanf("%i", &numero3);
	if(numero3>maior){
		maior=numero3;
	}
	printf ("Entre o n�mero %i, o numero %i, e o numero %i, o maior � %i",numero1, numero2, numero3, maior);
}

main() {
	setlocale(LC_ALL,"Portuguese");
	int a=0, b=0, c=0, d=0;
	
	maior(a,b,c,d);

}
