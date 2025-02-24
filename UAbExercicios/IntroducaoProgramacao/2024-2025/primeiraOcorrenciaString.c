#include <stdio.h>
#include <string.h>

char *strstr1(char *find, char *str)
{
    int i;
    /*percorrer toda a string str*/
    while (*str != 0)
    {
        /*tentar fazer match a começar em str*/
        for (i = 0; str[i] != 0 && find[i] != 0 && find[i] == str[i]; i++)
            ;
        if (find[i] == 0)
        {
            /*retornar o inicio do match*/
            return str;
        }
        /*incrementar o inicio da string*/
        str++;
    }
    return NULL;
}

int main()
{
    char str[] = "Percorrer toda a string str";
    char find[10];
    char *resultado;

    printf("Introduza a string de procura: ");
    fgets(find, 10, stdin);
    /* remoção do caracter da mudança de linha */
    find[strlen(find) - 1] = 0;
    resultado = strstr1(find, str);
    printf("Resultado: %s\n", resultado);
}
/*
Claro! Vamos analisar o programa linha por linha:

#include <stdio.h>: Inclui a biblioteca standard de input/output, necessária para usar funções como printf e fgets.

#include <string.h>: Inclui a biblioteca de manipulação de strings, necessária para usar funções como strlen.

char *strstr1(char *find, char *str): Declaração da função strstr1 que procura a primeira ocorrência da string find dentro da string str.

int i;: Declaração de uma variável inteira i que será usada como índice.

while (*str != 0): Inicia um ciclo que percorre a string str até encontrar o caractere nulo (0), que indica o fim da string.

for (i = 0; str[i] != 0 && find[i] != 0 && find[i] == str[i]; i++);: Um ciclo for que tenta fazer um "match" entre find e str a partir da posição atual. Continua enquanto os caracteres correspondentes de find e str forem iguais e não se atingir o fim de nenhuma das strings.

if (find[i] == 0): Verifica se chegou ao fim da string find, o que significa que encontrou um "match".

return str;: Retorna o ponteiro para o início do "match" encontrado em str.

str++;: Incrementa o ponteiro str para verificar a próxima posição na string.

return NULL;: Retorna NULL se não encontrar a string find em str.

int main(): Função principal do programa.

char str[] = "Percorrer toda a string str";: Declara e inicializa a string str.

char find[10];: Declara um array de caracteres find com espaço para 10 caracteres.

char *resultado;: Declara um ponteiro resultado que irá armazenar o resultado da função strstr1.

printf("Introduza a string de procura: ");: Imprime uma mensagem para o utilizador introduzir a string de procura.

fgets(find, 10, stdin);: Lê uma linha de texto do input standard (teclado) e armazena em find.

find[strlen(find) - 1] = 0;: Remove o caractere de nova linha (\n) que fgets adiciona ao final da string.

resultado = strstr1(find, str);: Chama a função strstr1 para procurar find em str e armazena o resultado em resultado.

printf("Resultado: %s\n", resultado);: Imprime o resultado da procura. Se find for encontrado, imprime a parte de str a partir do "match"; caso contrário, imprime (null).
*/