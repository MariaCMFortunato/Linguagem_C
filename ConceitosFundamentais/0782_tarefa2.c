#include <stdio.h>
#include <stdlib.h>

/*
Pretende-se:

Fazer um programa em C para calcular a contribui��o para a Seguran�a Social, IRS e o sindicato a 
partir do sal�rio bruto, que � um atributo de entrada.

� SS � 11,5%
� IRS - 25%
� Sindicato � 0,5 %

O programa deve imprimir o valor das contribui��es e o valor do sal�rio l�quido.
*/


main() {
	float salariobruto=0, segsocial=0, irs=0, sindicato=0;
	printf("Digite o salario bruto:");
	scanf("%f",&salariobruto);
	
	segsocial=(salariobruto*0.115);
	irs=(salariobruto*0.25);
	sindicato=(salariobruto*0.005);
	
	printf("O valor do desconto para a seguranca social e %.2f",segsocial);
	printf("\nO valor do desconto para irs e %.2f",irs);
	printf("\nO valor do desconto para o sindicato e %.2f",sindicato);
	printf("\nO valor valor total das contribuicoes e %.2f",(segsocial+irs+sindicato));
		
	printf("\nO valor do salario liquido e %.2f",(salariobruto-segsocial-irs-sindicato));	
}


