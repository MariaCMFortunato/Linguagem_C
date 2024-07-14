#include<stdio.h>
#include <locale.h>

     /*
     Uma institui��o de ensino realizou uma pesquisa sobre os eleitores de um
     munic�pio que participaram
     numa dada elei��o. Crie um programa que leia o total de votos brancos, nulos e
     v�lidos. Calcule e
     escreva a percentagem que cada um representa em rela��o ao total de eleitores.
     */ 
    
int main(){
     setlocale(LC_ALL, "Portuguese");
     float brancos, nulos, validos, total;

     printf("Digite o n� de votos em branco: ");
     scanf("%f", &brancos);
     printf("Digite o n� de votos nulos: ");
     scanf("%f", &nulos);
     printf("Digite o n� de votos v�lidos: ");
     scanf("%f", &validos);
     total = brancos + nulos + validos;

     printf("\nO total de votantes foi %.2f.", total);
     printf("\n\nA percentagem de votos em branco foi %.2f.", brancos/total*100);
     printf("\nA percentagem de votos em nulos foi %.2f.", nulos/total*100);
     printf("\nA percentagem de votos v�lidos foi %.2f.", validos/total*100);
     printf("\n\n");
     return 0;
}