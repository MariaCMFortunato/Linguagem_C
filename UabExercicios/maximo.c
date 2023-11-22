#include <stdio.h>
#include <math.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

float numUniforme (){
  unsigned int u = (1 + randaux()) % 10000;
  return (float) u/10000;
}

float iniciaVetor(){
    float v = -log(numUniforme ());
    return v;
}

float maximo(float *v, int n){
    float max = v[0];
    int i = 0;
    for (i = 0; i < n; i++){
      if(v[i] > max){
        max = v[i];
      }
    }
    return max;
}

int main(){
  int n = 0, i = 0;
  float v[1000];
  //printf("Número de elementos do vetor (entre 10 e 1000): ");
  scanf("%d", &n);
  n++;

  for(i = 0; i < n; i++){
    v[i] = iniciaVetor();
  }

  for(i = 0; i < 10; i++){
    printf("%.2f\t",v[i]);
  }
  printf("\n%.2f", maximo(v, n));

}