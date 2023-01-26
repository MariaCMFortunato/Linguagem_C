#include <stdio.h>
#include <stdlib.h>

/*Pretende-se calcular o montante total disponível ao fim de um ano de dois depósitos bancários feitos, no  mesmo  dia, 
 em  bancos  diferentes,  sabendo  que  o  juro  num  banco  é  de  9%  e  no  outro  é  de  7%. 
Teste para depósitos de 100,00 € e 50,00 € respectivamente. O valor obtido é de 162,50€ */

main() {
	float dbanco1=0, dbanco2=0, jbanco1=0, jbanco2=0, disponivel=0;
	float const JBANCO1=0.09, JBANCO2=0.07;
	printf("Este programa calcula o valor total disponivel daqui a um ano, dos depositos efetuados em dois bancos diferentes. \n\nPor favor insira o valor que depositou hoje no Primeiro banco: ");
	scanf("%f", &dbanco1);
	printf("\nPor favor insira o valor que depositou hoje no Segundo banco: ");
	scanf("%f", &dbanco2);	
	
	//Calcular o juro do primeiro deposito
		jbanco1=dbanco1*JBANCO1;
		printf("\n\n\nEfetuou no Primeiro banco um deposito de: -------------------%.2f euros.\n================== Os juros que ira receber daqui a um ano sao %.2f euros",dbanco1, jbanco1);
	//Calcular o juro do segundo deposito
		jbanco2=dbanco2*JBANCO2;
		printf("\n\nEfetuou no Segundo banco um deposito de: --------------------%.2f euros.\n================= Os juros que ira receber daqui a um ano sao %.2f euros",dbanco2, jbanco2);
	//Calcular o valor total disponivel daqui a um anoo
	disponivel=dbanco1+dbanco2+jbanco1+jbanco2;
	printf("\n\nDaqui a um ano tera o valor total disponivel:--------------- %.2f euros. \n",disponivel);		
		
		
		
}


