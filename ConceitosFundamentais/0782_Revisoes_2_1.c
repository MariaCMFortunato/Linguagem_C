#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* Exerc�cio 1
Ler o valor do raio de um c�rculo e calcular o per�metro desse c�rculo.
A=2 x PI X raio
*/

main() {
	setlocale(LC_ALL, "Portuguese");
	float raio=0;
	float const PI=3.14159;
	printf("Por favor indique o raio da circunfer�ncia, em cm: \t");
	scanf("%f", &raio);
	
	printf("\n\nO Per�metro de uma circunfer�ncia de raio %0.3f �: \t%0.3f cent�metros.\n\n", raio, PI*raio*2);
	


}
