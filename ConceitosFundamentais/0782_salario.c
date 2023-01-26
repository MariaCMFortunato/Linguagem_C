#include <stdio.h>
#include <stdlib.h>

/* Fazer um programa em C para calcular a contribuição para a Segurança Social, IRS e o sindicato a partir do salário bruto, que é um atributo de entrada.
• SS – 11,5%
• IRS - 25%
• Sindicato – 0,5 %
O programa deve imprimir o valor das contribuições e o valor do salário líquido. */

main() {
	float sbruto=0, sliquido=0, d_ss=0, d_irs=0, d_sind=0;
	float const SS=0.115, IRS=0.25, SIND=0.005;
	printf("Este programa calcula o salario liquido, partindo do salario bruto.Informa tambem os valores descontado.\n\n\nPor favor insira o valor do salario bruto: ");
	scanf("%f", &sbruto);
		//Calcular o desconto da segurança social
		d_ss=sbruto*SS;
		printf("\nO seu salrio bruto e: -------------------%.2f euros.\n\n===== O desconto para a seguranca social: %.2f euros",sbruto, d_ss);
		//Calcular o desconto do IRS
		d_irs=sbruto*IRS;
		printf("\n===== O desconto para o IRS e:------------%.2f euros",d_irs);
		//Calcular o desconto para o sindicato
		d_sind=sbruto*SIND;
		printf("\n===== O desconto para o sindicato e:--------%.2f euros",d_sind);
		//Calcular o valor do salario liquido
		sliquido=sbruto-d_ss-d_irs-d_sind;
	
	printf("\n\nO valor do salario liquido e:------------ %.2f euros. \n",sliquido,d_sind);
	
	
}
