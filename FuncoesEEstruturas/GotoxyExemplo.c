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
    system ("cls");
    gotoxy(1,1);
    printf("N�   Hora Partida   Minuto Partida   Hora Dura��o   Minuto Dura��o");
    int y = 2;
    int hp, mp, hd, md;
    for (int i = 1; i < 4; i++){
        gotoxy(1,y);
        printf ("%d", i);
        gotoxy(10,y);
        scanf("%d", &hp);
        gotoxy(27,y);
        scanf("%d", &mp);
        gotoxy(42,y);
        scanf("%d", &hd);
        gotoxy(59,y);
        scanf("%d", &md);
        y++;


    }

    return 0;
}