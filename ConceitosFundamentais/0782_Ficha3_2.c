#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Ler dois n�meros inteiros e escrever a sa�da apresentada a seguir. 
Note que o programa deve mostrar a opera��o, a f�rmula matem�tica 
apresentando os n�meros digitados e o resultado da opera��o. 
Como exemplo, vamos supor que os n�meros introduzidos s�o 7 e 4:
Soma: 7 + 4 = 11
Subtra��o: 7 � 4 = 3
Multiplica��o: 7 x 4 = 28
Dividendo: 7
Divisor: 4
Quociente: 1
Resto: 3 
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	int num1=0, num2=0;
	printf("Por favor indique um n�mero inteiro: \t\t");
	scanf("%i", &num1);
	printf("Por favor indique outro n�mero inteiro: \t");
	scanf("%i", &num2);
	printf("\n\t\tSoma: %i + %i = %i",num1,num2, num1+num2);
	printf("\n\t\tSubstra��o: %i - %i = %i",num1, num2, num1-num2);
	printf("\n\t\tMultiplica��o: %i X %i = %i",num1, num2, num1*num2);
	printf("\n\t\tDividendo: %i ",num1);
	printf("\n\t\tDivisor: %i ",num2);
	printf("\n\t\tQuociente: %i ",num1/num2);
	printf("\n\t\tResto: %i\n\n", num1-(num2*(num1/num2)));
	
	
	
}
