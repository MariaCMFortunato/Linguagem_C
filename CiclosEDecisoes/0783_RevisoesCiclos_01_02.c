#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 2
Recorrendo à estrutura do while crie um ciclo para escrever a seguinte sequência de
números:
1, 3, 5, 7, 9, 11, 13, 15, 17, 19 */

	main() {
		setlocale(LC_ALL,"");
		int numero=1;
		do{
			printf ("%i\t", numero);
			numero+=2;
		}while (numero<=19);
}
