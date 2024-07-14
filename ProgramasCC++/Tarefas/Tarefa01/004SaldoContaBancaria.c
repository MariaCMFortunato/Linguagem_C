#include <stdio.h> 
#include <locale.h>

int main (){
     setlocale(LC_ALL, "Portuguese");
     /* Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. 
     O programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador 
     pretende efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da 
     conta sempre que se efetue uma operação. No final deverá devolver o saldo da conta.
          Opcão     Menu      Cálculo
            D       Débito    saldo-montante
            C       Crédito   saldo+ montante
            S       Sair */
     char opcao;
     float saldo = 0, montante = 0;

     printf("Digite o valor do saldo inicial: ");
     scanf("%f", &saldo);

     while(opcao!='S' ||opcao!='s'){
          printf("Digite (D) para levantamento, (C) para depósito ou (S) para Sair: ");
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
               printf("\nFim da operação...");
               break;
          }
          else{
               printf("\nA opção não é válida...");
          }
     }
     printf("\nO valor do saldo atual é %.2f",saldo);
     printf("\n\n");
     return 0;
}
