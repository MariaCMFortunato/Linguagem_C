#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 1
Recorrendo à estrutura while crie um ciclo para escrever a seguinte sequência de
números:
2, 4, 6, 8, 10, 12, 14, 16, 18, 20 */

	main() {
		setlocale(LC_ALL,"");
		int numero=0;
		while (numero<=19){
			numero+=2;
			printf ("%i\t", numero);
		}
}
