#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIMENSAO 4
#define BARALHO 64

unsigned int randaux(){
    static long seed = 1;
    return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff );
}

//função Baralhar da resolução de referência
void Baralhar (int v[], int n){
    int i, j, aux;
    for (i = 0; i < n-1; i++){
        j = i + randaux() % (n-i);
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}

int main(){
    int desperdicio,i=0,j=0, k=0, l=0, posicoes[64], num[4];
    char operacao[DIMENSAO] ={'+','-','*','/'};
    char numero[DIMENSAO] = {'1','2','3','4'};
    char letra[DIMENSAO] = {'A','B','C','D'};
    char carta[BARALHO][DIMENSAO];
    char strNum[12], *ptr;
       
    scanf("%d", &desperdicio);
    getchar();
    fgets(strNum, 12, stdin );

    ptr = (char *)strtok(strNum, " ");
    while (ptr != NULL){
        num[i]= atoi(ptr);
        ptr = (char *) strtok(NULL," ");
        i++;
    }
    

    for(i = 0; i < desperdicio; i++){
        randaux();
    }

     // criação do baralho
    for(i=0; i < DIMENSAO; i++ ){
        for(j=0; j < DIMENSAO; j++ ){
            for(k=0; k < DIMENSAO; k++ ){
                carta[l][0] = operacao[i];
                carta[l][1] = numero[j];
                carta[l][2] = letra[k];
                carta[l][3] = '\0';
                l++;
            }
        }
    }

    // criação da matriz de posições
    for(i=0; i < BARALHO; i++ )
        posicoes[i]= i;

    Baralhar(posicoes, BARALHO);

    // impressão do baralho
    printf("    [1] [2] [3] [4] [5] [6] [7] [8] \n");
    for(i = 0; i < 8; i++){
        printf("[%d] ", (i+1));
        k=i;
        while( k < BARALHO)
        {    
            j=0;
            while(j<DIMENSAO)
            {
                if(((k/8)+ 1)==((int) num[j]/10) && (num[j]%10)==(i+1) && ((int) num[j]/10) > 0 && ((int) num[j]/10) <=8 && (num[j] % 10) <= 8)
                {
                    printf("%s ", carta[posicoes[k]]);
                }
                else
                {
                    printf("### ");
                }
                j++;
            }
            k+=8;
        }
        printf("\n");
    }       
} 