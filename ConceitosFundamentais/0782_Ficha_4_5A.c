#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* O Vasco distribui a sua mesada da seguinte forma: 
10% saúde, 
25% educação, 
30% alimentação, 
10% vestuário; 
5% lazer, 
20% outros. 
Crie um algoritmo que leia a renda mensal líquida, calcule e escreva o valor aplicado a cada item acima citado.
 */

main() {
	setlocale(LC_ALL, "Portuguese");
	float rendmens=0;
	float const SAUDE=0.1, EDUC=0.25, ALIM=0.3, VEST=0.1, LAZER=0.05, OUTR=0.2;
	
	printf("Por favor indique o valor do seu rendimento mensal líquido ");
	scanf("%f", &rendmens);
	printf("\n\tO valor a gastar em Saúde é: \t\t%0.2f Euros" ,rendmens*SAUDE);
	printf("\n\tO valor a gastar em Educação é: \t%0.2f Euros" ,rendmens*EDUC);
	printf("\n\tO valor a gastar em Alimentação é: \t%0.2f Euros" ,rendmens*ALIM);
	printf("\n\tO valor a gastar em Vestuário é: \t%0.2f Euros" ,rendmens*VEST);
	printf("\n\tO valor a gastar em Lazer é: \t\t%0.2f Euros" ,rendmens*LAZER);
	printf("\n\tO valor a gastar em Outros é: \t\t%0.2f Euros\n\n",rendmens*OUTR);
	
	
	
}
