#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que cumprimente o utilizador solicitando a hora atual. 
	Se a hora estiver entre 8 e 11 escrever ?Bom dia.?, 
	entre 12 e 19 ?Boa tarde?, 	outra hora ?Boa noite?.
	(Utilize a estrutura if). Cole o c�digo do ficheiro c do C num documento do word e anexe por aqui */

	int main() {
		setlocale(LC_ALL,"Portuguese");
		int hora=0;
	
		printf("\nPor favor, indique que horas s�o agora, no formato de 24H.\t");
		scanf("%d", &hora);

	while(hora<0||hora>23){
			printf("\nAs horas t�m de ser entre 0 e 23.\t");
			scanf("%i", &hora);
	}
			
		if(hora<=11 && hora>=8){
			printf("\nBom dia!");
		}
		else if(hora<=19 && hora>=12){
			printf("\nBom tarde!");
		}		
		else {
			printf("\nBoa noite!");
		}				
    return 0;
}
