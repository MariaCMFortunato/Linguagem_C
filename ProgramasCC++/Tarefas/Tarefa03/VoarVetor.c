#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

//Programa calcula a hora de chegada de 3 voos diferentes
//Dados são armazenados num vetor

void menu(){
    system("cls");
    printf("\n***** PROGRAMA VOAR *****\n");
    printf("\n 1 - Recolha de dados\n");
    printf("\n 2 - Mostrar dados com tempos de voo\n");
    printf("\n 3 - Sair\n");
}

void recolher(int lista[3][6]){
    system("cls");
    printf("\n1 - Recolha de dados dos voos\n");
    printf("\n------------------------------------------\n");
    
     for(int j = 0; j < 3; j++){
            printf("\nVoo %d: \n", j + 1);

            do{
            printf("\nHora de Partida: ");
            scanf("%2d", &lista[j][0]);
            }while(lista[j][0] < 0 || lista[j][0] > 23 );

            do{
            printf("\nMinuto de Partida: ");
            scanf("%2d", &lista[j][1]);
             }while(lista[j][1] < 0 || lista[j][1] > 59 );
            
            do{
            printf("\nHora de Duração: ");
            scanf("%2d", &lista[j][2]);
            }while(lista[j][2] < 0 || lista[j][2] > 23 );

            do{
            printf("\nMinuto de Duração: ");
            scanf("%2d", &lista[j][3]);
            }while(lista[j][1] < 0 || lista[j][1] > 59 );

            lista[j][5] = (lista[j][1] + lista[j][3]);

            if (lista[j][5] < 60 ){
                lista[j][4] = (lista[j][0] + lista[j][2]);
            }
            else{
                lista[j][5] -= 60;
                lista[j][4] = (lista[j][0] + lista[j][2] + 1);
            }
            if(lista[j][4] > 23){
                lista[j][4] -=24;
            }
            
         }
        
    printf("\nPrima qualquer tecla para continuar.\n");
    system("pause");
}

void mostrar(int lista[3][6]){
    system("cls");
    printf("\n2 - Tempos de voo\n");
    printf("\n------------------------------------------\n");
    printf("\t Nº Voo \tH. Part.\tM. Part.\tH. Dur. \tM. Dur. \tH. Cheg.\tM. Cheg.\n");

    for(int i = 0; i < 3 ; i++){
         printf("\t  %2d", i + 1);
        for(int j = 0; j < 6; j++){
             printf("\t");
            printf("\t%2d", lista[i][j] );
        }
        printf("\n");
    }
    printf("\nPrima qualquer tecla para continuar.");
    system("pause");
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int aviao[3][6];
    int opcao = 0;
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            aviao[i][j] = 0;
        }
    }

    do{
        system("cls");
        menu();
        printf("\nDigite a sua opção[ ] ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                recolher(aviao);
                break;
            case 2:
                mostrar(aviao);
                break;
        }
    }while(opcao!=3);
    return 0;
}


