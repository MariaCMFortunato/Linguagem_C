#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3. Leia uma dist�ncia em quil�metros e a quantidade de litros de gasolina consumidos por um carro
num percurso, calcule o consumo em km/l e escreva uma mensagem de acordo a tabela em baixo:
Consumo (Km/l) 	Mensagem
Menor que 8 			Venda o carro!
Entre 8 e 14 			Econ�mico
Maior que 14 			Super econ�mico */

main() {
	setlocale(LC_ALL,"");
	float km=0, l=0, cons=0;
	printf("Por favor, indique quantos kms percorreu: \t");
	scanf("%f",&km);
	printf("Por favor, indique quantos litros de combust�vel gastou: \t");
	scanf("%f",&l);
	
	cons=km/l;

	if(cons<8)	{	
		printf("\nVenda o carro!");
	}
	else if (cons<=14) {		
	printf("\nEcon�mico!");
	}

	else{
	printf("\nSuper econ�mico!");
}
	
}

