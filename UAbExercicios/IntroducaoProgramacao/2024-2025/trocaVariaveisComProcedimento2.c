#include <stdio.h>

void Troca(int x[], int y[])
{
    int aux = x[0];
    x[0] = y[0];
    y[0] = aux;
}

int main()
{
    int x[1] = {123}, y[1] = {321};
    Troca(x, y);
    printf("x: %d y: %d", x[0], y[0]);
}