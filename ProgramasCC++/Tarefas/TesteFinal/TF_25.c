#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Recorrendo à estrutura while, crie um programa que solicite ao utilizador um número inteiro e
apresente a tabuada da multiplicação desse número no seguinte formato:
	Exemplo:
	7 x 1 = 7
	7 x 2 = 14
	?.
	7 x 10 = 70
 */

int main() {
	setlocale (LC_ALL,"");
	int numero=0, contador=1;
	
	puts("");
	printf("Por favor digite o número inteiro para obter a tabuada:\t");
	scanf("%d", &numero);
 	
    while(numero<1 || numero>10){
 		printf("digite um número entre 1 e 10!\t");
 		scanf("%i", &numero);
	 }
 
 	while (contador<=10){
 		printf("\t%2.0d X %2.0d = %2.0d\n", numero, contador, numero*contador);
 		contador++;
  	}
    return 0;
}
