#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 3
Eis um exemplo para gerar um n�mero aleat�rio entre 0 e 15:
#include <stdio.h>
#include <stdlib.h>
main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);
}
Fa�a um programa que gere e mostre n�meros aleat�rios entre 0 (zero) e 15. 
O programa deve gerar n�meros at� que o n�mero 0 (zero) seja sorteado. */

main() {
	setlocale(LC_ALL,"");

		srand(time(NULL));
		int a=(rand()%16);
		printf("\n%i", a);//escreve no ecr� uma vez
		sleep(1);
	
	int numero=-1;
		while(numero>=1&&numero<=15);{
			numero=(rand()%16);
			printf("\n\t%i", numero);
			sleep(1);
		}			
	
	numero=-1;

		do	{
			srand(time(NULL));
			numero=(rand()%16);
			printf("\n\t\t%i", numero);
			sleep(1);
			}
		while(numero>=1&&numero<=15);
		
	if(numero!=0){
		srand(time(NULL));
		int numero=(rand()%16);
		printf("\n\t\t\t%i", numero);
		sleep(1);
		}

}

