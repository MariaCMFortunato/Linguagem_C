#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 100
#define MAX_JOGADAS 10000
#define MAX_INTEIRO 2147483647

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

// Separar a sequencia em números
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

    for (i = 0; i < contador; i++)
    {
        serie[i] = atof(tokens[i]);
        // printf("%d ", serie[i]);
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

// Implementação do jogador artificial
void JogadaArtificial(int serie[], int jogadas, int jogadasInicial, int *indice, int *valor)
{
    int dimensao = Dimensao(serie);
    int melhorIndice = -1, melhorValor = -1;
    int melhorTamanho = INT_MAX;
    int vitoriaEncontrada = 0;
    int A = 0;

    // Soma total da sequência atual
    for (int i = 0; i < dimensao; i++)
    {
        A += serie[i];
    }

    // Iterar por todos os índices válidos
    for (int i = 0; i < dimensao && !vitoriaEncontrada; i++)
    {
        int V = serie[i];

        // Construir jogadas possíveis (remover, reduzir, aumentar, adicionar)
        for (int candidato = 0; candidato < MAX_JOGADAS_POSSIVEIS && !vitoriaEncontrada; candidato++)
        {
            int testeValor = 0, novaDimensao = 0;
            int copiaSerie[MAXIMO] = {0};
            memcpy(copiaSerie, serie, sizeof(int) * MAXIMO);

            if (candidato < V)
            { // Reduzir ou remover
                testeValor = candidato;
                copiaSerie[i] = testeValor;
            }
            else if (candidato - V < (jogadasInicial - A))
            { // Aumentar
                testeValor = V + (candidato - V);
                copiaSerie[i] = testeValor;
            }
            else
            { // Adicionar
                testeValor = -(candidato - V - (jogadasInicial - A));
                InserirPosicao(copiaSerie, i + 1, testeValor);
            }

            // Calcular nova dimensão e validar jogada
            novaDimensao = Dimensao(copiaSerie);
            int resultado = ValidaSerie(copiaSerie, jogadasInicial, novaDimensao);

            if (resultado == 2)
            {
                // Vitória garantida
                melhorIndice = i;
                melhorValor = testeValor;
                vitoriaEncontrada = 1;
                break;
            }

            if (resultado == 1 && novaDimensao < melhorTamanho)
            {
                // Melhor jogada válida encontrada
                melhorIndice = i;
                melhorValor = testeValor;
                melhorTamanho = novaDimensao;
            }
        }
    }

    // Retornar a melhor jogada encontrada
    *indice = melhorIndice;
    *valor = melhorValor;
}

// Alteração na função Jogo
void Jogo(char entrada[], int serie[], int jogadas)
{
    char jogadorAtual = 'A';    // jogador inicial
    char jogadorAnterior = 'Z'; // inicializado com um valor fora do esperado
    int movimento[2] = {0}, indice = 0, valor = 0, resultado = -1;
    int trocaJogador = 1; // Indica se o jogador deve trocar
    int jogadasInicial = 0;

    // Inicializa a sequência
    serieInicial(serie, jogadas);
    printf("[Joga %c]", jogadorAtual);
    jogadasInicial = jogadas;

    while (jogadas > 0)
    {
        // Construir nova jogada
        LerEntrada(entrada);
        SeparaSerie(entrada, movimento);
        indice = movimento[0];
        valor = movimento[1];

        if (indice == -2 && valor == -2)
        {
            // Jogada artificial
            JogadaArtificial(serie, jogadas, jogadasInicial, &indice, &valor);
            printf("Jogada artificial: %d %d\n", indice, valor);
        }

        // Construir a sequência modificada
        ConstruirNovaJogada(serie, indice, valor, &trocaJogador);
        ImprimirSerie(serie, Dimensao(serie));

        // Validar a jogada
        resultado = ValidaSerie(serie, jogadasInicial, Dimensao(serie));

        if (resultado == 0)
        {
            printf("\nJogador %c perdeu.", jogadorAtual);
            return;
        }
        else if (resultado == 2)
        {
            printf("\nJogador %c ganhou.", jogadorAtual);
            return;
        }

        // Verificar troca de jogador
        if (trocaJogador == 0)
        {
            if (jogadorAtual == jogadorAnterior)
            {
                TrocarJogador(&jogadorAtual);
            }
            else
            {
                jogadorAnterior = jogadorAtual;
                printf("[Joga %c]", jogadorAtual);
            }
        }
        else
        {
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

// Main inalterado, exceto por rodar o jogo completo
int main()
{
    int serie[MAXIMO] = {0}, jogadas = 0;
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
    }
}