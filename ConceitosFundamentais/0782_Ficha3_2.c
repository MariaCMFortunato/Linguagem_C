#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Ler dois números inteiros e escrever a saída apresentada a seguir. 
Note que o programa deve mostrar a operação, a fórmula matemática 
apresentando os números digitados e o resultado da operação. 
Como exemplo, vamos supor que os números introduzidos são 7 e 4:
Soma: 7 + 4 = 11
Subtração: 7 – 4 = 3
Multiplicação: 7 x 4 = 28
Dividendo: 7
Divisor: 4
Quociente: 1
Resto: 3 
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int num1=0, num2=0;
	printf("Por favor indique um número inteiro: \t\t");
	scanf("%i", &num1);
	printf("Por favor indique outro número inteiro: \t");
	scanf("%i", &num2);
	printf("\n\t\tSoma: %i + %i = %i",num1,num2, num1+num2);
	printf("\n\t\tSubstração: %i - %i = %i",num1, num2, num1-num2);
	printf("\n\t\tMultiplicação: %i X %i = %i",num1, num2, num1*num2);
	printf("\n\t\tDividendo: %i ",num1);
	printf("\n\t\tDivisor: %i ",num2);
	printf("\n\t\tQuociente: %i ",num1/num2);
	printf("\n\t\tResto: %i\n\n", num1-(num2*(num1/num2)));
	
	
	
}
