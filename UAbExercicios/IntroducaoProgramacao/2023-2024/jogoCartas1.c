#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIMENSAO 4
#define BARALHO 64

int main(){
    char operacao[DIMENSAO] ={'+','-','*','/'};
    char numero[DIMENSAO] = {'1','2','3','4'};
    char letra[DIMENSAO] = {'A','B','C','D'};
    int i=0, j=0, k=0, l=0, n=0;
    int existe = 0;

    char carta[BARALHO][DIMENSAO];

    for(i=0; i < DIMENSAO; i++ ){
        for(j=0; j < DIMENSAO; j++ ){
            for(k=0; k < DIMENSAO; k++ ){
                carta[l][0] =  operacao[i];
                carta[l][1] =  numero[j];
                carta[l][2] =  letra[k];
                carta[l][3] = '\0';
                //printf("carta %d: %c%c%c \n", l, carta[l][0], carta[l][1], carta[l][2] );
                l++;
            }
        }
    }
    
    printf ("Indique o numero da carta: ");
    scanf("%d", &n);
    

    for(l = 0; l < BARALHO; l++){
            if(n == l){
                printf("carta %d: %c%c%c \n", l, carta[l][0], carta[l][1], carta[l][2] );
                existe = 1;
            }
    }
    if(!existe){
        printf("Carta invalida!");
    };

}