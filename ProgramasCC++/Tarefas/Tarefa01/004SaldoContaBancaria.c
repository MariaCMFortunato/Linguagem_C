#include <stdio.h> 
#include <locale.h>

int main (){
     setlocale(LC_ALL, "Portuguese");
     /* Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. 
     O programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador 
     pretende efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da 
     conta sempre que se efetue uma opera��o. No final dever� devolver o saldo da conta.
          Opc�o     Menu      C�lculo
            D       D�bito    saldo-montante
            C       Cr�dito   saldo+ montante
            S       Sair */
     char opcao;
     float saldo = 0, montante = 0;

     printf("Digite o valor do saldo inicial: ");
     scanf("%f", &saldo);

     while(opcao!='S' ||opcao!='s'){
          printf("Digite (D) para levantamento, (C) para dep�sito ou (S) para Sair: ");
          getchar();
          scanf("%c", &opcao);
          if (opcao == 'D' || opcao == 'd'){
               printf("\nQual o valor a levantar: ");
               scanf("%f", &montante);
               saldo -= montante;
          }
          else if (opcao == 'C' || opcao == 'c'){
               printf("\nQual o valor a depositar: ");
               scanf("%f", &montante);
               saldo += montante;
          }
          else if (opcao == 'S' || opcao == 's'){
               printf("\nFim da opera��o...");
               break;
          }
          else{
               printf("\nA op��o n�o � v�lida...");
          }
     }
     printf("\nO valor do saldo atual � %.2f",saldo);
     printf("\n\n");
     return 0;
}
