#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int jogoDados(int lancamento){
    int face = 0 , i = 0, pontos = 0, dado = -1;

    for( i = 0; i < lancamento; i++){
        face = 1 + randaux()% 6;
        printf("%d ", face);
        pontos += face;
        if (face == dado){
            printf("Pontos: %d\n", -pontos);
            return -pontos;
        }
        dado = face;
    }
    printf("Pontos: %d\n", pontos);
    return pontos;
}

int main(){
    int jogos=0, lancam = 0, j = 0, pontos = 0;

    scanf("%d", &jogos);
    scanf("%d", &lancam);

    for (j = 0; j < jogos; j++){
        pontos += jogoDados(lancam);
    }
    printf("%d", pontos);
    
}