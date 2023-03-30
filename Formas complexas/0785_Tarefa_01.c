#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Tarefa 01 UFCD 785 */

void RealizarMarcacao( int f[10]){
	int inicio=0, fim=0, nutente=-1, opcao=-1;
	
	do{
		do{
			printf("Por favor indique n� de utente:\t");
			scanf("%d", &nutente);
			if(nutente<1||nutente>999) printf(" O n�mero de utente situa-se entre 1 e 999!\n");			
			}while(nutente<1||nutente>999);
			
		if(fim!=9) {
			f[fim]=nutente;
			fim++;
			printf("Est� marcado para a %d� posi��o da fila.\n", fim);
			}
		
		else{
			printf("Sem espa�o para mais marca��es!");
			sleep (3);
	 		}
	
		printf("\nDeseja fazer outra marca��o? Prima (0) para terminar outro valor para continuar.\t");
		scanf("%i",&opcao);
		fflush (stdin);
	} while (opcao!=0);
	}
	
	
	


void MarcacaoUrgente(int f[10]){
	int i=0, nutente=0, opcao=0;
	
	do{
		printf("\n------------------------------------\n");
		printf("******* Cl�nica Quebra-Ossos *******\n");
		printf("------------------------------------\n");
		printf("           S U B M E N U            \n");
		printf("------------------------------------\n");
		printf("1-Ver fila de marca��es.\n");
		printf("2-Marca��o de urg�ncia.\n");
		printf("9-Para voltar ao menu anterior.\n\n");
		
		printf("Por favor digite a op��o pretendida:\t");
		scanf("%d", &opcao);
		
		switch (opcao){
			case 1:
				printf(" Lista de marca��es j� efetuadas: \n");
				printf("------------------------------------");
				for(i=0;i<10;i++){
				printf("\nUtente: %d, marcado para %d� posi��o.", f[i], i+1);
				}
				break;
			case 2:
				printf("Em que posi��o deseja inserir a marca��o? \t");
				scanf("%d", &i);
				printf ("Qual o n�mero do utente que deseja marcar na %d� posi��o:");
				scanf("%d", &nutente);
				f[i-1]=nutente;
				break;
			}
	}while (opcao!=9);	
	system("pause");	
}



void EliminarMarcacao(int f[]){
	
}



main() {
	setlocale(LC_ALL,"Portuguese");
	int fila[10],opcao=0;
	
	do{
		system("cls");
		printf("------------------------------------\n");
		printf("******* Cl�nica Quebra-Ossos *******\n");
		printf("------------------------------------\n");
		printf("              M E N U               \n");
		printf("------------------------------------\n");
		printf("1-Realizar marca��o.\n");
		printf("2-Marca��o de urg�ncia.\n");
		printf("3-Eliminar marca��o.\n\n");
		printf("9-Terminar o programa.\n\n");
		printf("Por favor digite a op��o pretendida:\t");
		scanf("%d", &opcao);
		switch (opcao){
			case 1:
				RealizarMarcacao(fila);
				break;
			case 2:
				MarcacaoUrgente(fila);
				break;	
			case 3:
				EliminarMarcacao(fila);
				break;	
			case 9:
				printf("O Programa ir� terminado!");
				break;
			Default:
				printf("Op��o inv�lida!");
				sleep(2);									
		}
	}
	while(opcao!=9);
}
