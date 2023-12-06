#include <stdio.h>

unsigned int randaux(){
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16 & 0x7fff));
}

void Baralhar (int v[], int n){
    int i, j, aux;
    for (i = 0; i < n-1; i++){
        j = i + randaux() % (n-i);
        printf("i: %d, j: %d \n", i, j);
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
}

void PrintInts(int v[], int n, char * nome){
        int i;
        printf ("%s ", nome);
        for( i = 0; i < n; i++){
            printf("%d ", v[i]);
        }
}

int main(){
    int v[1000], i, n;

    scanf("%d", &n);

    for( i = 0; i < n; i++){
        v[i]= i;
    }

    PrintInts(v, 100, "Vetor identidade: ");

    Baralhar (v, n);

    PrintInts(v, 100, "");
}