#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Desenvolva um programa que receba o ano de nascimento de uma pessoa e o ano atual. 
Calcule e mostre:
a) A idade dessa pessoa em anos;
b) A idade dessa pessoa em meses;
c) A idade dessa pessoa em dias;
d) A idade dessa pessoa em semanas. 
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int anonasc=0, anoatual=0;
	printf("Por favor indique o seu ano de nascimento: \t\t\t");
	scanf("%d", &anonasc);
	printf("\nPor favor indique o ano atual , se já fez anos este ano ou o ano anterior se ainda não fez: ");
	scanf("%d", &anoatual);
	printf("\n\t\tNeste momento, tem %i anos",anoatual-anonasc);
	printf("\n\t\t\t\t  %i meses",(anoatual-anonasc)*12);
	printf("\n\t\t\t\t %i dias",(anoatual-anonasc)*365);
	printf("\n\t\t\t\t %i semanas",(anoatual-anonasc)*52);
	
	
	
}
