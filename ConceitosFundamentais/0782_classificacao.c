#include <stdio.h>
#include <stdlib.h>

/*Pretende-se determinar a classificação final de um aluno sabendo que a avaliação consiste em 2 testes e um trabalho. 
Para a determinação da média sabe-se que cada teste tem um peso de 35% e o trabalho um peso de 30%. */

main() {
	float teste1=0, teste2=0, trabalho=0, classfinal=0;
	printf("Este programa calcula classificacao final de um aluno. \n\nPor favor insira a nota obtida no primeiro teste: ");
	scanf("%f", &teste1);
	printf("Por favor insira a nota obtida no segundo teste: ");
	scanf("%f", &teste2);
	printf("Por favor insira a nota obtida no trabalho: ");
	scanf("%f", &trabalho);
	//Calcular a Classificação final
	classfinal=teste1*0.35+teste2*0.35+trabalho*.30;
	printf("\n\nO aluno obteve %.2f no primeiro teste, obteve %.2f no segundo teste e obteve %.2f no trabalho. \n    --------------------------------A classificaca final e %.0f.-------------------------------- \n\n\n\n ",teste1, teste2, trabalho, classfinal);
	
		
}



