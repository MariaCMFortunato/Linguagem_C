#include <stdio.h>


/*Programa conversor de polegadas para milimetros */

main() {
	float medida_em_polegadas=0, medida_em_milimetros=0;
	float const FATOR=25.4;
	printf("Este programa converte polegadas em milimetros.\n\n\nPor favor introduza o valor em Polegadas: ");
	scanf("%f", &medida_em_polegadas);
	medida_em_milimetros=(medida_em_polegadas*FATOR);
	printf("\nO valor em milimetros de %f polegadas e %.3f mm \n\n", medida_em_polegadas, medida_em_milimetros);
	
}
