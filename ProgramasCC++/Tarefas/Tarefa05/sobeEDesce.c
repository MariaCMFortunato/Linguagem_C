#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>

void menuPreparacao ();
void menuTentativas ();
void menuNivel (int tentativas);
void jogo (int tentativas, int nivel, int numero);
void sorteio();

int main(void){
    setlocale(LC_ALL, "Portuguese");
    // int tentativas, nivel, numero;
    srand(time(NULL));
    menuPreparacao ();
}

void jogo (int tentativas, int nivel, int numero){
    int ensaio = 0, vez = 1;
    char escolha;
    
    system("cls");
    printf("\nEstamos a jogar no nível %d ", nivel);
    switch (nivel){
         case 1:
                puts("(1 a 100)");
                break;
        case 2:
                puts("(1 a 1.000)");
                break;
        case 3:
                puts("(1 a 10.000)");
                break;
    }
    printf("Tem %d, tentativas.\n", tentativas);
    //printf("\nNumero sorteado %d\n", numero);

    do{
        printf ("\nDigite o número para a %dª tentativa ", vez);
        scanf("%d", &ensaio);

        vez ++;
        tentativas --;
        puts("");
        if(ensaio > numero) puts("Está alto!");
        else if (ensaio < numero) puts("Está baixo!");
        else {
            fflush(stdin);
            printf ("\nAcertou em %d tentativas", vez - 1);
            break;
        }    
    }while (tentativas > 0 && ensaio != numero);

    puts("");
    if (tentativas == 0 && ensaio != numero) puts("Lamento, não tem mais tentativas");

    do{
        fflush(stdin);
        puts("\nQuer jogar outra vez (s ou n): ");
        scanf("%c", &escolha);
            
        switch (escolha){
            case 's':
                system("cls");
                menuPreparacao ();
                break;
            case'n':
                break;
            default:
                puts("Erro na escolha da opção!");
            }
    }while(escolha != 's' && escolha != 'n');
}

void sorteio(){
    int tentativas, nivel, numero;
    tentativas = rand() % 2 + 1;
   // printf("\nTentativas: %d", tentativas);

    switch(tentativas){
        case 1:
            tentativas += 9;
            
            break;
        case 2:
            tentativas += 13;
            break;
        case 3:
            tentativas += 17;
            break;
    }
    //printf("\nTentativas: %d", tentativas);

    nivel = rand() % 2 + 1;
    //printf("\nNivel: %d", nivel);

    switch(nivel){
        case 1:
            //printf("\nNivel: %d , número entre 1 e 100", nivel);
            numero = rand() % 100 + 1;            
            break;
        case 2:
             //printf("\nNivel: %d , número entre 1 e 1.000", nivel);
            numero = rand() % 1000 + 1;  
            break;
        case 3:
             //printf("\nNivel: %d , número entre 1 e 10.000", nivel);
            numero = rand() % 10000 + 1;  
            break;
    }
    printf("\nTentativas: %d", tentativas);
    jogo (tentativas, nivel, numero);
}

void menuNivel (int tentativas){
    int opcao;
    int numero;
    do{
        puts("");
        puts("/********** JOGO DO SOBE E DESCE **********/");
        puts("/***************** NÍVEIS *****************/");
        puts(" ------------------------------------------");
        printf("\t(1) Numero mistério entre 1 e 100)\n");
        printf("\t(2) Numero misterio entre 1 e 1.000)\n");
        printf("\t(3) Numero misterio entre 1 e 10.000)\n"); 
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                system("cls");
                do{
                puts("Escolha um número entre 1 e 100 ");
                scanf("%d", &numero);
                }while (numero < 1 || numero >100);
                break;
            case 2:
                system("cls");
                do{
                puts("Escolha um número entre 1 e 1.000 ");
                scanf("%d", &numero);
                }while (numero < 1 || numero >1000);
                break;
            case 3:
                system("cls");
                do{
                puts("Escolha um número entre 1 e 10.000 ");
                scanf("%d", &numero);
                }while (numero < 1 || numero >10000);
                break;
            default:
                puts("Erro na escolha da opção!");
        }
        }while (opcao!= 1 && opcao!= 2 && opcao!= 3);
    jogo (tentativas, opcao, numero);
}

void menuTentativas (){
    int opcao;
    int tentativas;
    do{
        puts("");
        puts("/********** JOGO DO SOBE E DESCE **********/");
        puts("/*************** TENTATIVAS ***************/");
        puts(" ------------------------------------------");
        printf("\t(1) Tentativas: 10)\n");
        printf("\t(2) Tentativas: 15)\n");
        printf("\t(3) Tentativas: 20)\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                system("cls");
                tentativas = 10;
                break;
            case 2:
                system("cls");
                tentativas = 15;
                break;
            case 3:
                system("cls");
                tentativas = 20;
                break;
            default:
                puts("Erro na escolha da opção!");
        }
    }while (opcao!= 1 && opcao!= 2 && opcao!= 3);
    menuNivel (tentativas);
}

void menuPreparacao (){
    int opcao;
    do{
    puts("");
    puts("/********** JOGO DO SOBE E DESCE **********/");
    puts(" ------------------------------------------");
    printf("\t(1) Valores por sorteio)\n");
    printf("\t(2) Valores Manuais)\n");
    printf("\t(3) Sair\n");
    scanf("%d", &opcao);
    switch (opcao){
        case 1:
            system("cls");
            sorteio();
            break;
        case 2:
            system("cls");
            menuTentativas ();
            break;
        case 3:
            system("cls");
            break;
        default:
            puts("Erro na escolha da opção!");
    }
    }while (opcao!= 3);
}
