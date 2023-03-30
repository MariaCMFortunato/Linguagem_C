#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Exercício 5
Elabore um programa que apresente o maior e menor de 5 números lidos. */

main() {
	setlocale(LC_ALL,"Portuguese");
    int contador=0, numero=0, aux=0, maior=0, menor=0;
    
     while (contador<5){
		printf("\nDigite o %iº número:\t",contador+1);
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

   printf("\nO maior número introduzido é: %i, e o menor número introduzido é: %i\n\n",maior,menor);
}


