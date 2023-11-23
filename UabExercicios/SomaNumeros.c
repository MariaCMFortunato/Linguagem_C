#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTR 255

int main(){
    char strNum[MAXSTR], *ponteiro;
    double soma = 0;

    fgets(strNum, MAXSTR, stdin );

    ponteiro = (char *)strtok(strNum, " ");

    while (ponteiro != NULL){
        soma += atof(ponteiro);
        ponteiro = (char *)strtok(NULL, " ");
    }
    printf("%.15g", soma);
}