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
	printf("\tO programa permite obter o saldo atualizado da conta bancária, após efetuar operações de retirada e depósito.\n");
	
	printf("\tPara indicar a operação que deseja: \n\tOperação\tOpção\n\tDébito:\t\tD\n\tCrédito:\tC\n\tSair:\t\tS\n\t\t");
	printf("\n\tDeve indicar também o montante da operação.");
	
	printf("\n\n\tIndique por favor o saldo inicial da contabancária:\t");
	scanf("%f",&saldo);
	
	fflush(stdin);
	printf("\tOpção: \t");
	scanf("%c",&opcao);
	
		
	while(opcao!='S'||opcao!='s'){
		printf("\tValor:\t");
		scanf("%f", &valor);
			switch (opcao){
			case 'd':
			case 'D':
				saldo-=valor;
				break;
			case 'c':
			case 'C':
				saldo+=valor;
				break;
			defasult:
				printf("O novo saldo é: %0.2F euros", saldo);
		}
}
}
	

