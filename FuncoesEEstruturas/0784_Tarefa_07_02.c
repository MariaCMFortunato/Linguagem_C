#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* Exercício 2
Crie um programa em C que preencha uma matriz 3x3, de forma aleatória 
com os valores “O” ou “X. Contar quantas linhas, colunas, diagonais existem preenchidas com
o mesmo caracter. */

main(){
	setlocale(LC_ALL,"Portuguese");
	char matriz [3][3];
	int linha=0, coluna=0, aux=0, contadorO=0,contadorX=0;
	srand(time(NULL));
	
	// preenchiamento da matriz
	printf("\n");
	printf("\t   |\t0\t1\t2  | \n");
	printf("\t----------------------------\n");
	
	for (linha=0;linha<3; linha++){
		printf("\t%i  |", linha);
		for(coluna=0;coluna<3;coluna++){
			aux=rand()%2;
			switch(aux){
				case 0:
					matriz[linha][coluna]='O';
					break;	
				case 1:
					matriz[linha][coluna]='X';
					break;					
			}
			printf("\t%c",matriz[linha][coluna]);
		}
	printf("  |\n");
	}
	printf("\t----------------------------\n");
		
	//contar caracteres iguais na diagonal esquerda
	printf("\n\n\tDiagonal Esquerda:\n");
	for (linha=0;linha<3; linha++){
		if (matriz[linha][linha]=='O'){
			contadorO++;
		}
		if (matriz[linha][linha]=='X'){
			contadorX++;
		}
	}
	printf("\t Existe(m) %i caractere(s) O;",contadorO );
	printf("\n\t Existe(m) %i caractere(s) X.",contadorX );
	
	//contar caracteres iguais na diagonal direita
	contadorO=0;
	contadorX=0;
	printf("\n\n\tDiagonal Esquerda:\n");
	for (linha=0;linha<3; linha++){
		if (matriz[linha][2-linha]=='O'){
			contadorO++;
		}
		if (matriz[linha][2-linha]=='X'){
			contadorX++;
		}
	}
	printf("\t Existe(m) %i caractere(s) O;",contadorO );
	printf("\n\t Existe(m) %i caractere(s) X.",contadorX );
	
	//contar caracteres por linha
	for(linha=0;linha<3; linha++){
		contadorO=0;
		contadorX=0;
		for (coluna=0;coluna<3;coluna++){
			if (matriz[linha][coluna]=='O'){
			contadorO++;
			}
			if (matriz[linha][coluna]=='X'){
			contadorX++;
			}
		}
		printf("\n\n\t%iª linha:\n", linha+1);
		printf("\t Existe(m) %i caractere(s) O;", contadorO );
		printf("\n\t Existe(m) %i caractere(s) X.",contadorX );	
	}

	//contar caracteres por coluna
	for(coluna=0;coluna<3;coluna++){
		contadorO=0;
		contadorX=0;
		for (linha=0;linha<3; linha++){
			if (matriz[linha][coluna]=='O'){
			contadorO++;
			}
			if (matriz[linha][coluna]=='X'){
			contadorX++;
			}
		}
		printf("\n\n\t%iª coluna:\n", coluna+1);
		printf("\t Existe(m) %i caractere(s) O;", contadorO );
		printf("\n\t Existe(m) %i caractere(s) X.",contadorX );	
	}
	printf("\n\n");
}



