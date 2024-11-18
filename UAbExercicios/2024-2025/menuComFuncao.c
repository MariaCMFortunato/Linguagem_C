#include <stdio.h>

int Menu()
{
    int escolha;
    /*mostrar as opções do menu*/
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    printf("\nOpcao: ");
    scanf("%d", &escolha);
    /*retornar a opcao selecionada*/
    return escolha;
}

int main()
{
    int opcao;
    opcao = Menu();

    while (opcao > 0)
    {
        /*ver qual é a opção*/
        if (opcao == 1)
        {
            printf("Opcao escolhida A");
        }
        else if (opcao == 2)
        {
            printf("Opcao escolhida B");
        }
        else if (opcao == 3)
        {
            printf("Opcao escolhida C");
        }
        else
        {
            printf("Opcao invalida");
        }

        opcao = Menu();
    }
    printf("Fim do programa");
}