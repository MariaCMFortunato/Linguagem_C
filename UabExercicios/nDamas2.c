#include <stdio.h>

#define MAX_N 16

int count = 0;

// Função para imprimir o tabuleiro
void printBoard(int board[MAX_N][MAX_N], int N) {
    printf("+");
    for (int i = 0; i < N; i++) {
        printf("---");
    }
    printf("+\n");

    for (int i = 0; i < N; i++) {
        printf("|");
        for (int j = 0; j < N; j++) {
            if (board[i][j]) {
                printf(" # ");
            } else {
                printf(" . ");
            }
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < N; i++) {
        printf("---");
    }
    printf("+\n");
}

// Função para verificar se é seguro colocar uma dama em uma determinada posição
int isSafe(int board[MAX_N][MAX_N], int row, int col, int N) {
    // Verifica a linha na esquerda
    for (int i = 0; i < col; i++) {
        if (board[row][i]) {
            return 0;
        }
    }

    // Verifica a diagonal superior na esquerda
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return 0;
        }
    }

    // Verifica a diagonal inferior na esquerda
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) {
            return 0;
        }
    }

    return 1;
}

// Função recursiva para resolver o problema N-damas
void solveNQueens(int board[MAX_N][MAX_N], int col, int N) {
    if (col == N) {
        // Se todas as damas foram colocadas, imprime o tabuleiro
        printBoard(board, N);
        count++;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col, N)) {
            // Se a posição for segura, coloca a dama
            board[i][col] = 1;

            // Chama recursivamente para a próxima coluna
            solveNQueens(board, col + 1, N);

            // Retrocede se a solução não for encontrada
            board[i][col] = 0;
        }
    }
}

int main() {
    int N;

    // Solicita o número de damas
    printf("Número de Damas (entre 4 e 16): ");
    scanf("%d", &N);

    if (N < 4 || N > 16) {
        printf("Por favor, insira um número válido entre 4 e 16.\n");
        return 1;
    }

    int board[MAX_N][MAX_N] = {0};

    // Chama a função recursiva
    solveNQueens(board, 0, N);

    // Exibe o total de soluções
    printf("Total: %d\n", count);

    return 0;
}
