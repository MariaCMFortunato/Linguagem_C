#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 100

void ImprimirSerie(int serie[], int dimensao)
{
    int i;
    printf("Sequencia: ");
    for (i = 0; i < dimensao; i++)
    {
        printf("%d ", serie[i]);
    }
}

void serieInicial(int serie[], int jogadas)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        serie[i] = jogadas / 2;
    }
    ImprimirSerie(serie, 2);
}

void LerEntrada(char entrada[])
{
    // printf("Indique uma sequencia de numeros inteiros positivos, terminando com 0: ");
    printf("\nJogada(indice valor): ");
    fgets(entrada, MAXIMO, stdin);
}

void SeparaSerie(char entrada[], int serie[])
{
    int i, contador = 0;
    char *pt, *tokens[MAXIMO];

    pt = (char *)strtok(entrada, " ");

    while (pt != NULL && contador < MAXIMO)
    {
        tokens[contador] = pt;
        contador++;

        pt = (char *)strtok(NULL, " ");
    }

    for (i = 0; i < (contador); i++)
    {
        serie[i] = atof(tokens[i]);
        // printf("%d ", serie[i]);
    }
}

int Dimensao(int serie[])
{
    int i, dimensao = 0;
    for (i = 0; serie[i] != 0; i++)
    {
        dimensao++;
    }
    return dimensao;
}

int ValidaSerie(int serie[], int jogadas, int dimensao)
{
    int validade = 0;
    int i, j, soma = 0, produto = 1, difAbsoluta = 0;

    for (i = 0; i < dimensao; i++)
    {
        soma += serie[i];
        produto *= serie[i];
        for (j = i + 1; j < dimensao; j++)
        {
            difAbsoluta += abs(serie[i] - serie[j]);
        }
    }

    if (soma > jogadas || produto < jogadas)
    {
        // printf("Sequencia invalida");
        return validade = 0;
    }
    else
    {
        if (difAbsoluta == jogadas)
        {
            // printf("Sequencia vitoria");
            return validade = 2;
        }
        else
        {
            // printf("Sequencia valida");
            return validade = 1;
        }
    }
}

void TrocaJogador(char *jogadorAtual)
{
    if (*jogadorAtual == 'A')
    {
        *jogadorAtual = 'B';
    }

    else
    {
        *jogadorAtual = 'A';
    }
    printf("[Joga %c]", *jogadorAtual);
}

void RemoverPosicao(int serie[], int indice)
{
    int i = 0, j = 0;
    for (i = indice; i < Dimensao(serie); i++)
    {
        for (j = i; j < Dimensao(serie) - 1; j++)
        {
            serie[j] = serie[j + 1];
        }
    }
}

void Jogo(char entrada[], int serie[], int jogadas)
{
    int movimento[2] = {0}, indice = 0, valor = 0, resultado = -1;
    char jogadorAtual = 'A';
    char jogadorAnterior = 'Z';
    serieInicial(serie, jogadas);
    printf("[Joga %c]", jogadorAtual);

    while (jogadas != 0)
    {
        LerEntrada(entrada);
        SeparaSerie(entrada, movimento);

        indice = movimento[0];
        valor = movimento[1];

        if (indice > Dimensao(serie))
        // Inserir no valor no fim da sêquencia
        // Se valor < 0 ==> Inserir |valor|
        {
            indice = Dimensao(serie);
            serie[indice] = abs(valor);
            ImprimirSerie(serie, indice + 1);
            resultado = ValidaSerie(serie, jogadas, Dimensao(serie));
            printf("\tresultado: %d\t", resultado);
            TrocaJogador(&jogadorAtual);
            printf("[Joga %c]", jogadorAtual);
            printf("\t[Jogador anterior %c]", jogadorAnterior);
            jogadas--;
            printf("\tjogadas %d\t", jogadas);
        }

        else if (indice <= 0)
        // Se indice inferior ou igual a 0, inserir na posição 0
        // Se valor < 0 ==> Inserir |valor|
        // Se valor = 0 ==> Remover posição
        {
            if (valor != 0)
            {
                serie[0] = abs(valor);
            }
            else
            {
                RemoverPosicao(serie, indice);
            }

            ImprimirSerie(serie, Dimensao(serie));
            resultado = ValidaSerie(serie, jogadas, Dimensao(serie));
            printf("\tresultado: %d\t", resultado);

            if (jogadorAnterior != jogadorAtual)
            {
                jogadorAnterior == jogadorAtual;
                printf("[Joga %c]", jogadorAtual);
                printf("\t[Jogador anterior %c]", jogadorAnterior);
            }
            else
            {
                TrocaJogador(&jogadorAtual);
                printf("[Joga %c]", jogadorAtual);
                printf("\t[Jogador anterior %c]", jogadorAnterior);
            }
        }

        else
        // substituir valor na sêquencia
        // Se valor < 0 ==> Inserir |valor|
        // Se valor = 0 ==> Remover posição
        {
            if (valor != 0)
            {
                serie[indice] = abs(valor);
            }
            else
            {
                RemoverPosicao(serie, indice);
            }

            ImprimirSerie(serie, Dimensao(serie));
            resultado = ValidaSerie(serie, jogadas, Dimensao(serie));
            printf("\tresultado: %d\t", resultado);
            if (jogadorAnterior != jogadorAtual)
            {
                jogadorAnterior == jogadorAtual;
                printf("[Joga %c]", jogadorAtual);
                printf("\t[Jogador anterior %c]", jogadorAnterior);
            }
            else
            {
                TrocaJogador(&jogadorAtual);
                printf("[Joga %c]", jogadorAtual);
                printf("\t[Jogador anterior %c]", jogadorAnterior);
            }
        }

        if (resultado == 0)
        {
            printf("\nJogador %c perdeu", jogadorAtual);
            return;
        }
        else if (resultado == 2)
        {
            printf("\nJogador %c ganhou", jogadorAtual);
        }
        else
        {
            jogadas--;
            printf("\tjogadas %d\t", jogadas);
        }
    }
}

int main()
{
    int serie[MAXIMO] = {0}, jogadas = 0;
    // int dimensao;
    char entrada[MAXIMO];
    // Consumir o caracter \n que está em memória
    char memoria[MAXIMO];

    printf("Indique K: ");
    scanf("%d", &jogadas);

    // Consumir o caracter \n que está em memória
    fgets(memoria, sizeof(memoria), stdin);

    if (jogadas < 2 || jogadas > MAXIMO)
    {
        printf("K tem de ser entre 2 e 100.\n");
    }
    else
    {
        Jogo(entrada, serie, jogadas);

        // SeparaSerie(entrada, serie);
        // dimensao = Dimensao(serie);
        // printf("\nDimensao: %d\n", dimensao);
        // ImprimirSerie(serie, dimensao);

        // ValidaSerie(serie, jogadas, dimensao);
    }
}