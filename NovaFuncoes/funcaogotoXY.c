#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

void gotoxy (int x, int y){
    COORD ponto;
    ponto.X = x;
    ponto.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),ponto);

}

int main(){
    setlocale(LC_ALL, "Portuguese");
    gotoxy(10,5);
    printf("Coluna 10 e linha 5");

    gotoxy(30,5);
    printf("Coluna 30 e linha 5");
    return 0;
}