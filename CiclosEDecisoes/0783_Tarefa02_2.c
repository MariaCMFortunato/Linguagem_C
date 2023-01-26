#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Pretende-se calcular a idade em anos em função do dia, mês e ano de nascimento e dia, mês e ano
atual.
Considere o seguinte:
- Em condições normais a idade é a diferença entre o ano atual e ano de nascimento. 
No entanto se o mês atual for inferior ao mês de nascimento ou o mês atual igual ao mês de nascimento e o dia atual
inferior ao dia de nascimento a idade é o ano atual menos o ano de nascimento menos um. */

main() {
	setlocale(LC_ALL,"");
	int anoAtual=0, mesAtual=0, hoje=0, anoNasc=0, mesNasc=0, diaNasc=0, idade=0;
	printf("Por favor indique o ano em que nasceu:\t");
	scanf("%i", &anoNasc);
	printf("\nIndique agora o mês em que nasceu:\t");
	scanf("%i", &mesNasc);
	printf("\nIndique ainda o dia em que nasceu:\t");
	scanf("%i", &diaNasc);
	
	printf("\n\nIndique também o ano atual:\t");
	scanf("%i", &anoAtual);
	printf("\nIndique agora o mês atual:\t");
	scanf("%i", &mesAtual);
	printf("\nIndique ainda o dia atual:\t");
	scanf("%i", &hoje);
	
	if (mesAtual>mesNasc){
		printf("\nA a sua idade em anos é %i: ",anoAtual-anoNasc);
	}
	else if (mesAtual<mesNasc||mesAtual==mesNasc&&hoje<diaNasc){
		printf("\nA a sua idade em anos é %i: ",anoAtual-anoNasc-1);
	}
	else
		printf("\nA a sua idade em anos é %i: ",anoAtual-anoNasc);
}
