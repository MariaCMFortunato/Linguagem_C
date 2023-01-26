#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Crie uma função em C, do tipo void, que receba 3 números e apresente o maior. */
void maior(int numero1, int numero2, int numero3, int maior){
	printf("Por, favor indique o primeiro número:\t");
	scanf("%i", &numero1);
	maior=numero1;
	
	printf("Por, favor indique o segundo número:\t");
	scanf("%i", &numero2);
	if(numero2>maior){
		maior=numero2;
	}
	printf("Por, favor indique o terceiro número:\t");
	scanf("%i", &numero3);
	if(numero3>maior){
		maior=numero3;
	}
	printf ("Entre o número %i, o numero %i, e o numero %i, o maior é %i",numero1, numero2, numero3, maior);
}

main() {
	setlocale(LC_ALL,"Portuguese");
	int a=0, b=0, c=0, d=0;
	
	maior(a,b,c,d);

}
