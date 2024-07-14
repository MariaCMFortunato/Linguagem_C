#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetorA[10], vetorB[10], vetorC[10], vetorD[10];

    printf("\n");
    for(int i = 0; i < 10; i++){
      vetorA[i] = 10-i;
		  vetorB[i] = 20-2*i;
		  vetorC[i] = 10+5*i;
		  vetorD[i] = 2*i + 1;
    }
    printf("*** Vetor A *** \t *** Vetor B *** \t *** Vetor C *** \t *** Vetor D ***\n");
	
		for (int i = 0; i < 10; i++){
			printf("Posição %2d: %2d", i, vetorA[i]) ;
			printf("\t\t Posição %2d: %2d", i , vetorB[i]); 
			printf("\t\t Posição %2d: %2d", i , vetorC[i]);
			printf("\t\t Posição %2d: %2d\n", i , vetorD[i]);
    }
    printf("\n");
    printf("\n");
    return 0;
}