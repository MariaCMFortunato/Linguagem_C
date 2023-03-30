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
	printf("\tOp��es dispon�veis: \tOpera��o\tOp��o\n\t\t\t\tD�bito:\t\tD\n\t\t\t\tCr�dito:\tC\n\t\t\t\tSair:\t\tS\n\t\t");
	
	printf("Indique por favor o saldo inicial da contabanc�ria:\t");
	scanf("%f",&saldo);
	
	fflush(stdin);
	printf("\n\tOp��o: (D)�bito \\ (C)r�dito \\ (S)ir? \t");
	scanf("%c",&opcao);	
	
	while(opcao=='d'||opcao=='D'||opcao=='c'||opcao=='C'){
		switch (opcao){
			case 'd':
			case 'D':
				printf("\tQual o montante da opera��o:\t");
				scanf("%f", &valor);
				saldo-=valor;
				break;
			case 'c':
			case 'C':
				printf("\tQual o montante da opera��o:\t");
				scanf("%f", &valor);
				saldo+=valor;
				break;
		}
		fflush(stdin);
		printf("\n\tOp��o: (D)�bito \\ (C)r�dito \\ (S)ir? \t");
		scanf("%c",&opcao);	
	}
		if(opcao=='s'||opcao=='S'){
		printf("\t\tO novo saldo �: %0.2f euros.\n\n",saldo);	
	}
}
