#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 100

// Imprimir as diversas sequências
void ImprimirSerie(int serie[], int dimensao)
{
    int i;
    printf("Sequencia: ");
    for (i = 0; i < dimensao; i++)
    {
        printf("%d ", serie[i]);
    }
}

// Gerar a sequência inicial
void serieInicial(int serie[], int jogadas)
{
    int i;
    for (i = 0; i < 2; i++)
    {
        serie[i] = jogadas / 2;
    }
    ImprimirSerie(serie, 2);
}

// Pedir e ler jogadas dos jogadores
void LerEntrada(char entrada[])
{
    // printf("Indique uma sequencia de numeros inteiros positivos, terminando com 0: ");
    printf("\nJogada (indice valor): ");
    scanf(" %[^\n]", entrada);
}

// Função para separar a entrada em jogadas, índices e valores por causa do pre-check
void SeparaSerie(char entrada[], int *numJogadas, int indices[], int valores[])
{
    int i = 0, contador = 0;
    char *token;

    // Primeiro token é o número de jogadas
    token = strtok(entrada, " ");
    *numJogadas = atoi(token);

    // Processa o restante da string para índices e valores
    while ((token = strtok(NULL, " ")) != NULL && contador < MAXIMO)
    {
        if (contador % 2 == 0) // Índices
            indices[i] = atoi(token);
        else // Valores
            valores[i++] = atoi(token);
        contador++;
    }
}

// Calcular a dimensão da sequência excluindo posições com 0
int Dimensao(int serie[])
{
    int i, dimensao = 0;
    for (i = 0; serie[i] != 0; i++)
    {
        dimensao++;
    }
    return dimensao;
}

// valida cada jogada de acordo com as regras e retorna resultado
int ValidaSerie(int serie[], int jogadas, int dimensao)
{
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
    // printf("\nSoma: %d \nProduto: %d \n Diferença Absoluta: %d ", soma, produto, difAbsoluta);
    if (soma > jogadas || produto < jogadas)
    {
        // printf("Sequencia invalida");
        return 0;
    }
    else
    {
        if (difAbsoluta == jogadas)
        {
            // printf("Sequencia vitoria");
            return 2;
        }
        else
        {
            // printf("Sequencia valida");
            return 1;
        }
    }
}

// Trocar de jogador
void TrocarJogador(char *jogadorAtual)
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

// remove uma posição e reajusta a sequência
void RemoverPosicao(int serie[], int indice)
{
    int i;
    int dimensao = Dimensao(serie);
    for (i = indice; i < dimensao - 1; i++)
    {
        serie[i] = serie[i + 1];
    }
    serie[dimensao - 1] = 0;
}

// insere uma posição após reajuste de posições
void InserirPosicao(int serie[], int indice, int valor)
{
    int dimensao = Dimensao(serie);
    int i;
    for (i = dimensao; i > indice; i--)
    {
        serie[i] = serie[i - 1];
    }
    serie[indice] = abs(valor);
}

// Construir nova sequência com a jogada do jogador
void ConstruirNovaJogada(int serie[], int indice, int valor, int *trocaJogador)
{
    int dimensao = Dimensao(serie);
    // ==> indice >= dimensao atual
    if (indice >= dimensao)
    {
        // valor < 0
        if (valor < 0)
        {
            InserirPosicao(serie, dimensao, valor);
            *trocaJogador = 0;
        }

        // valor > 0
        else if (valor > 0) // rever
        {
            serie[dimensao] = abs(valor);
            *trocaJogador = 1;
        }

        // valor = 0
        else
        {
            *trocaJogador = 0;
        }
    }

    // ==> indice <= 0
    else if (indice <= 0)
    {
        // valor < 0
        if (valor < 0)
        {
            InserirPosicao(serie, 0, valor);
            *trocaJogador = 0;
        }

        // valor > 0
        else if (valor > 0)
        {
            serie[0] = valor;
            *trocaJogador = 1;
        }

        // valor = 0
        else
        {
            RemoverPosicao(serie, 0);
            *trocaJogador = 0;
        }
    }

    // indice > 0 E indice < dimensao sequencia
    else
    {
        // valor < 0
        if (valor < 0)
        {
            InserirPosicao(serie, indice, valor);
            *trocaJogador = 0;
        }

        // valor > 0
        else if (valor > 0)
        {
            serie[indice] = abs(valor);
            *trocaJogador = 1;
        }

        // valor = 0
        else
        {
            RemoverPosicao(serie, indice);
            *trocaJogador = 0;
        }
    }
}

void Jogo(char entrada[], int serie[], int jogadas)
{
    char jogadorAtual = 'A';    // jogador inicial
    char jogadorAnterior = 'Z'; // incializado com um valor fora do esperado
    int movimento[MAXIMO] = {0}, indice = 0, valor = 0, resultado = -1;
    int trocaJogador = 1; // Indica se o jagador deve trocar
    int jogadasInicial = 0;
    int indices[MAXIMO] = {0}, valores[MAXIMO] = {0}, numJogadas = 0;

    // inicializa a sequência
    serieInicial(serie, jogadas);
    printf("[Joga %c]", jogadorAtual);
    jogadasInicial = jogadas;

    LerEntrada(entrada);
    SeparaSerie(entrada, &numJogadas, indices, valores);

    while (jogadas > 0)
    {
        // contruir nova jogada
        LerEntrada(entrada);
        SeparaSerie(entrada, &numJogadas, indices, valores);

        indice = movimento[0];
        valor = movimento[1];

        // construir a sequencia modificada
        ConstruirNovaJogada(serie, indice, valor, &trocaJogador);
        ImprimirSerie(serie, Dimensao(serie));

        // validar a  jogada
        resultado = ValidaSerie(serie, jogadasInicial, Dimensao(serie));

        // ==> se invalida ==> pára jogo e mostra mensagem
        if (resultado == 0)
        {
            printf("\nJogador %c perdeu.", jogadorAtual);
            return;
        }

        // ==> se vitoria ==> pára jogo e mostra mensagem
        else if (resultado == 2)
        {
            printf("\nJogador %c ganhou.", jogadorAtual);
            return;
        }

        // ==> se valida ==> continua e:
        // =====> verifica troca de jogador

        if (trocaJogador == 0)
        // Jogador atual pode jogar mais uma vez
        {
            if (jogadorAtual == jogadorAnterior)
            {
                // força troca de jogador
                TrocarJogador(&jogadorAtual);
            }

            else
            {
                // mantem jogador atual e atualiza jogador anterior
                jogadorAnterior = jogadorAtual;
                printf("[Joga %c]", jogadorAtual);
            }
        }

        else
        {
            // troca
            jogadorAnterior = jogadorAtual;
            TrocarJogador(&jogadorAtual);
        }
        jogadas--;
        if (jogadas == 0)
        {
            printf("\nEmpate.");
        }
    }
}

int main()
{
    int serie[MAXIMO] = {0}, jogadas = 0;
    // int dimensao;
    char entrada[MAXIMO];

    printf("Indique K: ");
    scanf("%d", &jogadas);

    if (jogadas < 2 || jogadas > MAXIMO)
    {
        printf("K tem de ser entre 2 e 100.\n");
    }
    else
    {
        Jogo(entrada, serie, jogadas);
        // serieInicial(serie, jogadas);
        // LerEntrada(entrada);
        // SeparaSerie(entrada, serie);
        // dimensao = Dimensao(serie);
        // printf("\nDimensao: %d\n", dimensao);
        // ImprimirSerie(serie, dimensao);
        // ValidaSerie(serie, jogadas, dimensao);
    }
}