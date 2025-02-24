#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void PrintInts (int v[], int n, char *nome){
  int i;
  printf("%s", nome);
  for(i = 0; i < n; i++)
    printf("%5d", v[i]);
}

void Sort(int v[], int n){
  int i, j, aux;
  for(i = 0; i < n; i++){
    for (j = i + 1; j < n; j++){
      if(v[i] > v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }
}


int main()
{
  int v[1000],i, n;

  scanf("%d",&n);
  n++;

  for(i=0;i<1000;i++)
		v[i]=randaux() % n;

	PrintInts(v,10,"\n");

	Sort(v,1000);

  PrintInts(v,10,"\n");

    return 0;
}