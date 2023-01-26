#include <stdio.h>
#include <stdlib.h>

/* Crie um algoritmo que leia o preço anterior e preço atual de 1 artigo básico e determine a taxa de inflação desse artigo. */

main() {
	float preco_atual=0, preco_anterior=0, tinflacao=0;
	printf("Este programa calcula a taxa de inflacao no preco de um artigo.\n\nQual o preco atual do artigo? ");
	scanf("%f", &preco_atual);
	printf("\n\nQual era o preco anterior do artigo? ");
	scanf("%f", &preco_anterior);
	tinflacao=((preco_atual/preco_anterior)-1)*100;
	printf("O artigo tinha o preco de %.2f euros e agora esta marcado a %.2f euros. \n\nA taxa de inflacao associada a este aumento e de %.1f %%.\n\n\n", preco_anterior,preco_atual,tinflacao);
	
	
}
