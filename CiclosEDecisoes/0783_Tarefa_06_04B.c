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
	printf("\tO programa permite obter o saldo atualizado da conta bancária.\n");
	
	printf("\tSelcione previamente a operação que deseja: \n\tOperação\tOpção\n\tDébito:\t\tD\n\tCrédito:\tC\n\tSair:\t\tS\n\t\t");
	
	printf("\tIndique por favor o saldo inicial da contabancária:\t");
	scanf("%f",&saldo);
	
	fflush(stdin);
	printf("\tOpção: Débito / Crédito / Sair ?");
	scanf("%c",&opcao);
	
	
	if(opcao=='d'||opcao=='D'){
		printf("\n\tQual o montante da operação:\t");
		scanf("%f", &valor);
		
		saldo-=valor;
		printf("\t\tRetirou %0.2f euros da conta, o novo saldo é: %0.2f euros.\n\n",valor,saldo);
		
	}
	if(opcao=='c'||opcao=='C'||opcao=='s'||opcao=='S'){
		printf("\n\tQual o montante da operação:\t");
		scanf("%f", &valor);		

		saldo+=valor;
		printf("\t\tDepositou %0.2f euros da conta, o novo saldo é: %0.2f euros.\n",valor,saldo);
			}
	if(opcao=='s'||opcao=='S'){
		printf("\t\tO novo saldo é: %0.2f euros.\n",saldo);
		}

	}
	

