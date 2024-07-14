#include <stdio.h>
#include <locale.h>

int main(){
     /* Crie um programa que escreva no ecrã os números de 1 a 100 e os 
     respetivos quadrados. O resultado do programa deve ser:
               Saída:
               1 1
               2 4
               3 9
               4 16
               5 ?
               ...
               100 10000 */
     int i = 0;
     for(i = 1; i <= 100; i++){
          printf("\n%d\t%d", i, i*i);

     }
   return 0;
}