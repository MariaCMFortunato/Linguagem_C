#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exerc�cio 5
Elabore um programa que apresente o maior e menor de 5 n�meros lidos. */

main() {
	setlocale(LC_ALL,"Portuguese");
    int contador=0, numero=0, aux=0, maior=0, menor=0;
    
     while (contador<5){
		printf("\nDigite o %i� n�mero:\t",contador+1);
		scanf("%i",&numero);
	
		if(numero>maior){
			maior=numero;
			}
		if(menor==0&&numero<=maior){
			menor=numero;		
			}
		if(numero<menor){
			menor=numero;
		}
		contador++;
	}

   printf("\nO maior n�mero introduzido �: %i, e o menor n�mero introduzido �: %i\n\n",maior,menor);
}


