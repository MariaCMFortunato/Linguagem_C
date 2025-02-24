#include <stdio.h>

int x = {123}, y = {321};

void Troca()
{
    int aux = x;
    x = y;
    y = aux;
}

int main()
{
    Troca(&x, &y);
    printf("x: %d y: %d", x, y);
}