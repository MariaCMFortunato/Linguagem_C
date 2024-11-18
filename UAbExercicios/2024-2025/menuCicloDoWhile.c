#include <stdio.h>

/*
int Menu()
{
    int escolha;
    // mostrar as opções do menu
    printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
    printf("\nOpcao: ");
    scanf("%d", &escolha);
    // retornar a opcao selecionada
    return escolha;
}
*/

int main()
{
    int opcao;
    do
    {
        /*mostrar as opções do menu*/
        printf("\nMenu:\n1 - opcao A\n2 - opcao B\n3 - opcao C\n0 - sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

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
        else if (opcao != 0)
        {
            printf("Opcao invalida");
        }
    } while (opcao > 0);

    printf("Fim do programa");
}