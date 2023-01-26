#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 3
Eis um exemplo para gerar um número aleatório entre 0 e 15:
#include <stdio.h>
#include <stdlib.h>
main () {
srand(time(NULL));
int a=(rand()%15);
printf("%i",a);
}
Faça um programa que gere e mostre números aleatórios entre 0 (zero) e 15. 
O programa deve gerar números até que o número 0 (zero) seja sorteado. */

main() {
	setlocale(LC_ALL,"");

		srand(time(NULL));
		int a=(rand()%16);
		printf("\n%i", a);//escreve no ecrã uma vez
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

