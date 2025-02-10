#include <stdio.h>

unsigned int randaux()
{
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

void Sort(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                v[j] = v[i] + v[j];
                v[i] = v[j] - v[i];
                v[j] = v[j] - v[i];
            }
        }
    }
}

void PrintInts(int v[], int n, char str[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("%s", str);
}

void RemoveDups(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        while (i < n && v[i] == v[i + 1])
        {
            for (int j = i; j < n - 1; j++)
            {
                v[j] = v[j + 1];
            }
            n--;
        }
    }
}

int main()
{
    int v[1000], i, n;

    scanf("%d", &n);
    n++;

    for (i = 0; i < 1000; i++)
        v[i] = randaux() % n;

    PrintInts(v, 10, "\n");
    Sort(v, 1000);

    RemoveDups(v, 1000);
    PrintInts(v, 10, "\n");
}