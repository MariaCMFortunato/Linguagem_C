#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 4
Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. 
O programa dever� perguntar:
	 qual o saldo inicial da conta e 
	 qual a opera��o que o utilizador pretende efetuar (d�bito ou cr�dito), 
	 assim como 
	 	o montante a debitar, atualizando o saldo da conta sempre que se efetue uma opera��o. 
	 	
No final dever� devolver o saldo da conta.
	Opc�o 		Menu 		C�lculo
	D 			D�bito 		saldo-montante
	C 			Cr�dito 	saldo+ montante
	S 			Sair */

main() {
	setlocale(LC_ALL,"Portuguese");
	float saldo=0, valor=0;
	char opcao;
	printf("\tO programa permite obter o saldo atualizado da conta banc�ria.\n");
	
	printf("\tSelcione previamente a opera��o que deseja: \n\tOpera��o\tOp��o\n\tD�bito:\t\tD\n\tCr�dito:\tC\n\tSair:\t\tS\n\t\t");
	
	printf("\tIndique por favor o saldo inicial da contabanc�ria:\t");
	scanf("%f",&saldo);
	
	fflush(stdin);
	printf("\tOp��o: D�bito / Cr�dito / Sair ?");
	scanf("%c",&opcao);
	
	
	if(opcao=='d'||opcao=='D'){
		printf("\n\tQual o montante da opera��o:\t");
		scanf("%f", &valor);
		
		saldo-=valor;
		printf("\t\tRetirou %0.2f euros da conta, o novo saldo �: %0.2f euros.\n\n",valor,saldo);
		
	}
	if(opcao=='c'||opcao=='C'||opcao=='s'||opcao=='S'){
		printf("\n\tQual o montante da opera��o:\t");
		scanf("%f", &valor);		

		saldo+=valor;
		printf("\t\tDepositou %0.2f euros da conta, o novo saldo �: %0.2f euros.\n",valor,saldo);
			}
	if(opcao=='s'||opcao=='S'){
		printf("\t\tO novo saldo �: %0.2f euros.\n",saldo);
		}

	}
	

