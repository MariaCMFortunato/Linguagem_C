#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 2
Recorrendo � estrutura do while crie um ciclo para escrever a seguinte sequ�ncia de
n�meros:
1, 3, 5, 7, 9, 11, 13, 15, 17, 19 */

	main() {
		setlocale(LC_ALL,"");
		int numero=1;
		do{
			printf ("%i\t", numero);
			numero+=2;
		}while (numero<=19);
}
