#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4. Leia a idade e o tempo de servi�o de um trabalhador e escrever se ele pode ou n�o reformar-se. As
condi��es s�o:
-> Ter pelo menos 65 anos de idade.
-> Ou ter trabalhado pelo menos 30 anos.
-> Ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos*/

main() {
	setlocale(LC_ALL,"");
	int idade=0, tserv=0;
	printf("Por favor, indique a sua idade: \t");
	scanf("%f",&idade);
	printf("Por favor, indique os anos de servi�o: \t");
	scanf("%i",&tserv);
	
	if(idade>=65){	
		printf("\nJ� se pode reformar!");
	}
	else if (tserv>=30) {		
	printf("\nTamb�m J� se pode reformar!");
	}
	else if (idade>=60&&tserv>=25) {		
	printf("\nTamb�m J� se pode reformar!");
	}
	else{
	printf("\nAinda n�o se pode reformar");
}
	
}

