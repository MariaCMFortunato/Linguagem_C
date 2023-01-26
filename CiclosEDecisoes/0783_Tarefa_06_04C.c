#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 4
Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. 
O programa deverá perguntar:
	 qual o saldo inicial da conta e 
	 qual a operação que o utilizador pretende efetuar (débito ou crédito), 
	 assim como 
	 	o montante a debitar, atualizando o saldo da conta sempre que se efetue uma operação. 
	 	
No final deverá devolver o saldo da conta.
	Opcão 		Menu 		Cálculo
	D 			Débito 		saldo-montante
	C 			Crédito 	saldo+ montante
	S 			Sair */

main() {
	setlocale(LC_ALL,"Portuguese");
	float saldo=0, valor=0;
	char opcao;
	printf("\tO programa permite obter o saldo atualizafdo da conta bancária.\n");
	printf("\tOpções disponíveis: \tOperação\tOpção\n\t\t\t\tDébito:\t\tD\n\t\t\t\tCrédito:\tC\n\t\t\t\tSair:\t\tS\n\t\t");
	
	printf("Indique por favor o saldo inicial da contabancária:\t");
	scanf("%f",&saldo);
	
	fflush(stdin);
	printf("\n\tOpção: (D)ébito \\ (C)rédito \\ (S)ir? \t");
	scanf("%c",&opcao);	
	
	while(opcao=='d'||opcao=='D'||opcao=='c'||opcao=='C'){
		switch (opcao){
			case 'd':
			case 'D':
				printf("\tQual o montante da operação:\t");
				scanf("%f", &valor);
				saldo-=valor;
				break;
			case 'c':
			case 'C':
				printf("\tQual o montante da operação:\t");
				scanf("%f", &valor);
				saldo+=valor;
				break;
		}
		fflush(stdin);
		printf("\n\tOpção: (D)ébito \\ (C)rédito \\ (S)ir? \t");
		scanf("%c",&opcao);	
	}
		if(opcao=='s'||opcao=='S'){
		printf("\t\tO novo saldo é: %0.2f euros.\n\n",saldo);	
	}
}
