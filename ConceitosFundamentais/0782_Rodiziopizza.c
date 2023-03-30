#include <stdio.h>
#include <stdlib.h>

/* Programa para calcular o valor a pagar no Rodizio de Pizza*/

main() {
	int npessoas=0;
	float vrefeicao=0, vfinal=0, vcomissao=0;
	float const PUNITARIO=15.00, COMISSAO=0.1;
	printf("Este programa calcula o valor total a pagar no Rodizio de Pizza, incluindo a comissão do empregado.\n\n\n Por favor indique quantas pessoas fazem parte do grupo:");
	scanf("%d", &npessoas);
	vrefeicao=(npessoas*PUNITARIO);
	vcomissao=(vrefeicao*COMISSAO);
	vfinal=vrefeicao+vcomissao;
	printf("O valor a pagar pelo grupo de %d pessoas e %.2f.\n\n Acresce o valor %.2f de comissao.\n\nPelo que o valor total a pagar e de %.2f\n\n " ,npessoas,vrefeicao, vcomissao, vfinal);
	
	 
}
