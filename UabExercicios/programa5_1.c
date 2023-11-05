#include <stdio.h>
 
 int main()
 {
    int opcao;
    /* mostrar as opções do menu */
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    printf("\nOpcao: ");
    scanf("%d", &opcao);

    while(opcao>0)
    {
        /* ver qual é a opção */
        if(opcao==1)
            printf("Opcao escolhida A");
        else if(opcao==2)
            printf("Opcao escolhida B");
        else if(opcao==3)
            printf("Opcao escolhida C");
        else 
            printf("Opcao invalida");
  
        /* mostrar as opções do menu */
        printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);



    }
    printf("Fim do programa.");
 }