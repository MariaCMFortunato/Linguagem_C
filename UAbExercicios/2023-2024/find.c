#include <stdio.h>

unsigned int randaux(){
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int encontrar(int v[], int tamanho, int n){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        if(v[i] == n)
            return i; 
    }
    return -1;
}

int main(){
    /* declaração do vector v com 1000 elementos (de 0 a n) */
    int v[1000], i, n;

    scanf("%d",&n);
    n++;

    /* inicializar o vector, com valores aleatórios de 0 a n */
    for(i = 0; i < 1000; i++)
        /* acesso à posição i do vector v: v[i] */
        v[i] = randaux() % n;

    for(i = 0; i < 10; i++)
        printf("%5d", v[i]);

    printf("\n%d", encontrar(v, 1000, 2));

}