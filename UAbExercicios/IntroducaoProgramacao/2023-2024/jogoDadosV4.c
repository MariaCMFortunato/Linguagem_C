#include <stdio.h>
#include <time.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int JogoDados(int lancamentos)
{
    int dado, i, anterior =- 1, pontos = 0;
    
    for(i = 0; i < lancamentos; i++)
    {
        dado = 1 + randaux() % 6;
       
        printf("%d ", dado);
        pontos += dado;
        
        if(dado == anterior) {
            printf("Pontos: %d\n",-pontos);
            return -pontos;
        }
        anterior = dado;
    }
    printf("Pontos: %d\n",pontos);
    return pontos;
}

int main()
{
    int n, i, j, pontos, jogos;
    scanf("%d", &jogos);
    scanf("%d", & n);
    

    pontos = 0;
    for(j = 0; j < jogos; j++)
        pontos += JogoDados(n);
 
    printf("%d",pontos);
}