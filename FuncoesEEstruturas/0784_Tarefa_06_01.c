#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Pretende-se: 
	-Criar um programa em C com uma estrutura de menu idêntica à abaixo apresentada:
		*** Notas de Alunos ***
		1- Recolha de notas
		2- Mostrar todas as notas
		3- Mostrar a média das notas
		4- Alterar uma nota(indicando a posição)
		5- Mostrar a(s) nota(s) mais alta(s)
		6- Mostrar os aprovados (nota >=10)
		7- Mostrar os reprovados (nota <10)
		0- Sair
	Notas:
		1.O array tem 10 elementos e é do tipo float.
		2.As notas situam-se entre 0 e 20 */

	//1- Recolha de notas
	void RecolhaNotas (float n[]){
		int i=0;
		for (i=0;i<10;i++){
			printf("Digite o valor da %2.iª nota:\t", (i+1));
			scanf("%f", &n[i]);
			if(n[i]<0||n[i]>20){
				printf("As notas têm de ser entre 0 e 20! Por favor corriga!");
				sleep(1);
			} 
		}
		system ("pause");
	}
	
	//2- Mostrar todas as notas
	void MostrarNotas (float n[]){
		int i=0;
		for (i=0;i<10;i++){
			printf("%2iª Nota:\t%2.2f\n", (i+1), n[i]);
		}
		system ("pause");
	}
	
	//3- Mostrar a média das notas
	void MostrarMedia (float n[]){
		int i=0;
		float soma=0, media=0;
		for (i=0;i<10;i++){
			soma+=n[i];
		}
		media=soma/10;
		printf("Média das notas é:\t%2.2f\n", media);
		system ("pause");
	}
	
	//4- Alterar uma nota(indicando a posição)
	void AlterarNota (float n[]){
		int i=0;
		printf ("Indique para qual posição da nota que quer alterar:\t");
		scanf ("%i",&i);
		printf ("Indique a nova nota:\t");
		scanf ("%f",&n[i-1]);	
		system ("pause");
	}
	
	
	//5- Mostrar a(s) nota(s) mais alta(s)
	void MaisAltas (float n[]){
		int i=0;
		float maisalta=0, aux=0;
		for(i=0;i<9;i++){
			if(n[i]>n[(i+1)]){
				aux=n[i];
				n[i]=n[(i+1)];
				n[(i+1)]=aux;
			}
		}
		printf("A(s) nota(s) mais alta(s) é:\t%2.2f\n",aux);
		system ("pause");
		}

	//6- Mostrar os aprovados (nota >=10)
	void Aprovados (float n[]){
		int i=0;
		for (i=0;i<10;i++){
			if(n[i]>=10)
			printf("%2iª Nota:\t%2.2f\n", (i+1), n[i]);
		}
		system ("pause");	
	}
	
	//7- Mostrar os reprovados (nota <10)	
	void Reprovados (float n[]){
		int i=0;
		for (i=0;i<10;i++){
			if(n[i]<10)
			printf("%2iª Nota:\t%2.2f\n", (i+1), n[i]);
		}
		system ("pause");	
	}
				
	
	
	
	main() {
		setlocale(LC_ALL,"Portuguese");
		float notas[10]={0};
		int opcao=0;
		
		do{
			system ("cls");
			printf("\n********** Notas dos Alunos **********\n");
			printf("\n--------------------------------------\n");
			printf("\n1- Recolha de notas");
			printf("\n2- Mostrar todas as notas");
			printf("\n3- Mostrar a média das notas");
			printf("\n4- Alterar uma nota(indicando a posição)");
			printf("\n5- Mostrar a(s) nota(s) mais alta(s)");
			printf("\n6- Mostrar os aprovados (nota >=10)");		
			printf("\n7- Mostrar os reprovados (nota <10)");
			printf("\n0-Sair");
			printf("\n\nDigite a sua opção:\t");
			scanf("%i",&opcao);
			switch(opcao){
				case 0:
					printf("\nPrograma terminado.");
					break;
				case 1:
					RecolhaNotas(notas);
					break;
				case 2:
					MostrarNotas(notas);
					break;
				case 3:
					MostrarMedia(notas);
					break;				
				case 4:
					AlterarNota(notas);
					break;				
				case 5:
					MaisAltas(notas);
					break;	
				case 6:
					Aprovados(notas);
					break;	
				case 7:
					Reprovados(notas);
					break;							
				default:
					printf("\nOpção inválida.");
					sleep(2);	
			}
		}while(opcao!=0);
		
	}
