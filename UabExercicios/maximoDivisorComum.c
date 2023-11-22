#include <stdio.h>

int mdc( int a, int b){
    int maxdc;
    if (b == 0){
        maxdc = a;
    }
    else
    maxdc = mdc(b, (a % b));
    return maxdc;
}


int main()
{
    int x, y;
    scanf("%d %d", & x, & y);
    printf("\n%d",mdc(x,y));
}
