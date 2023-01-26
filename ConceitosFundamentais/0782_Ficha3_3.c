#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Crie um programa que leia o valor da hora e do minuto atual e calcule quantos 
minutos se passaram desde as zero horas do dia. 
O algoritmo deve mostrar a saída apresentada a seguir. 
Como exemplo, suponhamos que o utilizador tenha digitado:
15 na hora e 20 nos minutos A saída será:
AGORA SÃO 15:20 h.
Já se passaram 920 minutos desde o início do dia.
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int horas=0, minutos=0;
	printf("Por favor indique as horas que são (não indique ainda os minutos): \t");
	scanf("%i", &horas);
	printf("Por favor indique agora os minutos que são: \t\t\t\t");
	scanf("%i", &minutos);
	printf("\n\t\tAGORA SÃO %i:%i",horas, minutos);
	printf("\n\t\tJá passaram %i minutos desde o início do dia\n\n",horas*60+minutos);

}
	
 
