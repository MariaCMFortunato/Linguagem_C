#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void notas(){
    int nota;
    do{
        printf("\nNota final do aluno: ");
         scanf("%d" , &nota);
        if (nota < 0 || nota > 20 ){
            printf("A nota tem de ser entre 0 e 20, tente de novo!");
        }
    }while(nota < 0 || nota > 20);
    
    if (nota < 10) {
        printf("Reprovado!");
    }
    else if (nota <= 12) {
        printf("Exame!");
    }
    else printf("Aprovado!");
    }

void calculadesconto (){
    float preco, desconto, final;

    printf("\nIndique o valor (euros): ");
    scanf("%f", &preco);

    printf("Indique o desconto (em percentagem) a aplicar: ");
    scanf("%f", &desconto);

    final =(preco *(desconto / 100));
    printf("\nValor do desconto: %.2f euros.", final);
}

void par(){

    int numero;
    do{
        printf("\nDigite um numero, entre 0 e 50: ");
        scanf("%d", &numero);
        if(numero < 0 || numero > 50) 
        printf("O numero tem de ser entre 0 e 50, tente de novo!");
    }while(numero < 0 || numero > 50);

    if(numero % 2 == 0){
        printf("Numero par!");
    }
    else printf("Numero impar!");
    }

    void maior(){
        int a, b, c, maximo;

        printf("\nDigite o primeiro numero: ");
        scanf("%d", &a);
        maximo = a;

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        if (b > maximo) maximo = b;

        printf("Digite o terceiro numero: ");
        scanf("%d", &c);

        if (c > maximo) maximo = c;

        printf("\nValor maximo inserido %d", maximo);
    }

    void genero(){
        char gender;

        fflush(stdin);

        printf("\nDigite o genero (F/f) ou (M/m): ");
        scanf("%c", &gender);

        switch(gender){
            case 'F':
            case 'f':
                printf("Feminino!");
                break;
            case 'M':
            case 'm':
                printf("Masculino!");
                break;
            default:
                printf("Invalido!");
        }
        
        }

    void menu(){
    system("cls");
    printf("\n***** PROGRAMA FUNCOES *****\n");
    printf("\n 1 - Notas\n");
    printf("\n 2 - Calcular desconto\n");
    printf("\n 3 - Par ou impar\n");
    printf("\n 4 - Máximo de 3 numeros\n");
    printf("\n 5 - Masculino ou feminino\n");
    printf("\n 0 - Sair\n");
}

int main(){
    setlocale(LC_ALL, "portuguese");
   int opcao;

   do{
        system("cls");
        menu();
        printf("\nDigite a sua opção[ ] ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                notas();
                printf("\nPrima qualquer tecla para continuar.\n");
                system("pause");
                break;
            case 2:
                calculadesconto();
                printf("\nPrima qualquer tecla para continuar.\n");
                system("pause");
                break;
            case 3:
                par();
                printf("\nPrima qualquer tecla para continuar.\n");
                system("pause");
                break;
            case 4:
                maior();
                printf("\nPrima qualquer tecla para continuar.\n");
                system("pause");
                break;
            case 5:
                genero();
                printf("\nPrima qualquer tecla para continuar.\n");
                system("pause");
                break;
            default:
                printf("\nOpcao invalida, o programa vai terminar!\n");

            
        }
    }while(opcao!=0);


}