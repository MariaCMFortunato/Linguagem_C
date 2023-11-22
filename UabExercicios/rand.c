#include <stdio.h>
#include <math.h>

#define A 231533
#define B 82571
#define M 428573

unsigned int seed = 0;

unsigned int gerarNumero(int n){
    seed = (A * seed + B) % M;
    if (seed > (unsigned int) pow(2,32))
        seed = seed % (unsigned int) pow(2,32);

    return seed;
}

int main(){
    int n, i;

    //printf("Digite a semente (seed): ");
    scanf("%u", &seed);

    //printf("Digite o número máximo (N): ");
    scanf("%u", &n);
    n++;
    
    for (i = 0; i < 10; i++) {
        unsigned int numeroAleatorio = gerarNumero(n);
        seed = numeroAleatorio;
         if (numeroAleatorio > (unsigned int) n)
            numeroAleatorio = numeroAleatorio % n;
        printf("%u ", numeroAleatorio);
        
    }

    printf("\n");

    return 0;

}
