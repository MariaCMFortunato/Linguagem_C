#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Crie um programa que leia o valor da hora e do minuto atual e calcule quantos 
minutos se passaram desde as zero horas do dia. 
O algoritmo deve mostrar a sa�da apresentada a seguir. 
Como exemplo, suponhamos que o utilizador tenha digitado:
15 na hora e 20 nos minutos A sa�da ser�:
AGORA S�O 15:20 h.
J� se passaram 920 minutos desde o in�cio do dia.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int horas=0, minutos=0;
	printf("Por favor indique as horas que s�o (n�o indique ainda os minutos): \t");
	scanf("%i", &horas);
	printf("Por favor indique agora os minutos que s�o: \t\t\t\t");
	scanf("%i", &minutos);
	printf("\n\t\tAGORA S�O %i:%i",horas, minutos);
	printf("\n\t\tJ� passaram %i minutos desde o in�cio do dia\n\n",horas*60+minutos);

}
	
 
