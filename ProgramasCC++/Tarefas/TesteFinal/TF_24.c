#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Usando um ciclo, crie um programa em C que produza o seguinte output:
**********(10) *(01)
*********(09) **(02)
********(08) ***(03)
*******(07) ****(04)
******(06) *****(05)
*****(05) ******(06)
****(04) *******(07)
***(03) ********(08)
**(02) *********(09)
*(01) **********(10) */

int main() {
	setlocale (LC_ALL,"");
	int numero1=10, numero2=1;
 
 	for(int contador=0;contador<10;contador++){
 		for(int coluna=1;coluna<=numero1;coluna++){
 			printf("*" );
  			}
       	printf("(%2.0d)", numero1);
		for(int coluna2=1;coluna2<=numero2;coluna2++)
  		printf("*" );
 		
		printf("(%2.0d)\n", numero2);
		numero1-=1;	
		numero2+=1;
		}
	return 0;
	}