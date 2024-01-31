#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x=1;

int main(void)
{
    int x = 5;
    printf("\n\nX local no âmbito externo do main é %d\n", x);
    {
        int x = 7;
        printf("X local de âmbito interno do main é %d\n", x);
    }
    
    printf("X local no âmbito externo do main é %d\n", x);
    
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    
    printf("\nX local no main é %d\n", x);
    return 0;
}

void useLocal(void)
{
    int x = 25;
     printf("\nX local na useLocal é %d, após ter entrado na useLocal\n", x);
     ++x;
    printf("X local na useLocal é %d, antes de sair da useLocal\n", x);
}

void useStaticLocal(void)
{
    static int x = 50;
     printf("\nX local estático é %d, após ter entrado na useStaticLocal\n", x);
     ++x;
    printf("X local estático é %d, antes de sair da useStaticLocal\n", x);
}

void useGlobal(void)
{
     printf("\nX global é %d, após ter entrado na useGlobal\n", x);
     x *=10;
    printf("X global é %d, antes de sair da useGlobal\n", x);
}