#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreva um programa em C para uma empresa de aluguer de automóveis, que 
imprima o montante devido por cada cliente. 
O montante devido depende 
	dos quilómetros efetuados,
	do número de dias que durou o aluguer e 
	do tipo de carro alugado. 
Os Volkswagen custam 
	30€ por dia e 	
	1,20€ por quilómetro. 
Os Toyota custam 	
	35€ por dia e 
	1,50€ por quilómetro.
Os Mercedes custam 
	60€ por dia e 
	2,50€ por quilómetro. 
Os primeiros 75 quilómetros são gratuitos, independentemente do tipo de carro alugado. */

main() {
	setlocale(LC_ALL,"");
	int diasaluguer=0, kms=0;
	float aluguer=0;
	char veiculo=0;
	
	printf("\t\tVeículos disponíveis;\n\n\t\tVolkswagen -------- v ou V;\n\t\tToyota ------------ t ou T;\n\t\tMercedes ---------- m ou M;");
	printf("\n\n\t\tPor favor indique qual dos veículos acima que alugou: \t\t");
	scanf("%c", &veiculo);

	printf("\t\tIndique quantos quilómetros foram efetuados com o veículo: \t");
	scanf("%i", &kms);
	printf("\t\tIndique quantos dias durou o aluguer: \t\t\t\t");
	scanf("%i", &diasaluguer);

	if(veiculo!='v'||veiculo!='V'||veiculo!='t'||veiculo!='T'||veiculo!='m'||veiculo!='M'){
		printf("\n\t\tO veículo não existe !!!! - Tente de novo!");
	}	
	if(kms<=75){
		
		switch (veiculo){
			case 'v':
			case 'V':
				aluguer=diasaluguer*30;
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
				
			case 't':
			case 'T':
				aluguer=diasaluguer*35;
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
				
			case 'm':
			case 'M':
				aluguer=diasaluguer*60;
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
			}
			}
	if(kms>75){
		switch (veiculo){
			case 'v':
			case 'V':
				aluguer=diasaluguer*30+((kms-75)*1.2);
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
			
			case 't':
			case 'T':
				aluguer=diasaluguer*35+((kms-75)*1.5);
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
			case 'm':
			case 'M':
				aluguer=diasaluguer*60+((kms-75)*2.5);
				printf("\t\tO valor devido pelo aluguer é %0.2f euros.\n\n",aluguer);
			break;
		}
		}	
			
	}
	
