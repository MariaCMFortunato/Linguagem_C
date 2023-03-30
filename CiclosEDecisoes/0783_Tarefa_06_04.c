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
	printf("\tO programa permite obter o saldo atualizafdo da conta banc�ria.\n");
	
	printf("\tIndique por favor o saldo inicial da contabanc�ria:\t");
	scanf("%f",&saldo);
	fflush(stdin);
	
	printf("\tSelcione a opera��o que deseja: \n\tOpera��o\tOp��o\n\tD�bito:\t\tD\n\tCr�dito:\tC\n\tSair:\t\tS\n\t\t");
	scanf("%c",&opcao);
	
	while(opcao=='d'||opcao=='D'||opcao=='c'||opcao=='C'){
		printf("\n\tQual o montante da opera��o:\t");
		scanf("%f", &valor);
		switch (opcao){
			case 'd':
			case 'D':
				saldo-=valor;
				printf("\t\tRetirou %0.2f euros da conta, o novo saldo �: %0.2f euros.",valor,saldo);
				break;
			case 'c':
			case 'C':
				saldo+=valor;
				printf("\t\tDepositou %0.2f euros da conta, o novo saldo �: %0.2f euros.",valor,saldo);
				break;
		}
	fflush(stdin);
	printf("\nD / C / S: ");
	scanf("%c",&opcao);
	
	}
	if(opcao=='S'){
		printf("O novo saldo �: %0.2F euros", saldo);
	}

	}	

