#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Recorrendo à estrutura while, crie um programa que solicite ao utilizador um número inteiro e
apresente a tabuada da multiplicação desse número no seguinte formato:
	Exemplo:
	7 x 1 = 7
	7 x 2 = 14
	….
	7 x 10 = 70
 */

main() {
	setlocale (LC_ALL,"");
	int numero=0, contador=1;
	
	
	printf("Por favor digite o número inteiro para obter a tabuada:\t");
	scanf("%i", &numero);
 	while(numero<1||numero>10){
 		printf("digite um número entre 1 e 10!\t");
 		scanf("%i", &numero);
	 }
 
 	while (contador<=10){
 		printf("\t%2.0i X %2.0i = %2.0i\n", numero, contador, numero*contador);
 		contador++;
  			}
	}
