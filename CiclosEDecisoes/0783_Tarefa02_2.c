#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2
Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, m�s e ano
atual.
Considere o seguinte:
- Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento. 
No entanto se o m�s atual for inferior ao m�s de nascimento ou o m�s atual igual ao m�s de nascimento e o dia atual
inferior ao dia de nascimento a idade � o ano atual menos o ano de nascimento menos um. */

main() {
	setlocale(LC_ALL,"");
	int anoAtual=0, mesAtual=0, hoje=0, anoNasc=0, mesNasc=0, diaNasc=0, idade=0;
	printf("Por favor indique o ano em que nasceu:\t");
	scanf("%i", &anoNasc);
	printf("\nIndique agora o m�s em que nasceu:\t");
	scanf("%i", &mesNasc);
	printf("\nIndique ainda o dia em que nasceu:\t");
	scanf("%i", &diaNasc);
	
	printf("\n\nIndique tamb�m o ano atual:\t");
	scanf("%i", &anoAtual);
	printf("\nIndique agora o m�s atual:\t");
	scanf("%i", &mesAtual);
	printf("\nIndique ainda o dia atual:\t");
	scanf("%i", &hoje);
	
	if (mesAtual>mesNasc){
		printf("\nA a sua idade em anos � %i: ",anoAtual-anoNasc);
	}
	else if (mesAtual<mesNasc||mesAtual==mesNasc&&hoje<diaNasc){
		printf("\nA a sua idade em anos � %i: ",anoAtual-anoNasc-1);
	}
	else
		printf("\nA a sua idade em anos � %i: ",anoAtual-anoNasc);
}
