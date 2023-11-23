#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int RemoveDups(int v[], int n)
{
    int i, j;
    /* como o vector está ordenado, os duplicados estão seguidos,
    pelo que é necessário saber se o elemento seguinte é igual */
    for(i = 0; i < n - 1; i++)
        /* enquanto o elemento seguinte for igual, apagá-lo */
        while(i < n - 1 && v[i] == v[i + 1])
        {
            /* para apagar o elemento actual, tem de se copiar
            todos os elementos seguintes uma posição para trás. */
            for(j = i; j < n - 1; j++)
                v[j] = v[j + 1];
            /* não esquecer de actualizar a dimensão do vector */
            n--;
        }
    return n;
}
/* Nota: numa versão mais eficiente, mas requerendo matéria do bloco
seguinte, poderia-se criar um vector novo e ir colocando os elementos
distintos nesse vector. Esse método faz uma só passagem pelo vector,
independentemente do número de elementos duplicados, enquanto que a
função acima percorre o resto do vector por cada elemento duplicado.
*/

void Sort(int v[], int n)
{
    int i, j, aux;
    for(i = 0; i < n; i++)
        for(j = i + 1; j < n; j++)
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

void PrintInts(int v[], int n, char *nome)
{
    int i;
    printf("%s", nome);
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
}

int main()
{
    int v[1000], i, n;

    scanf("%d",&n);
    n++;
    
    for(i = 0; i < 1000; i++)
        v[i] = randaux() % n;

    PrintInts(v, 10, "\n");

    Sort(v, 1000);

    RemoveDups(v, 1000);

    PrintInts(v, 10, "\n");
}