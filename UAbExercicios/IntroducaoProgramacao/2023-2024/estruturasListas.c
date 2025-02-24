#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

typedef struct SListaInt
{
    int valor;
    struct SListaInt *seguinte;
}TListaInt;//tipo de dados abstrato que representa um nó dfa lista encadeada
//Cada nó contém um valor inteiro e um ponteiro para o próximo nó na lista
TListaInt* LIAdicionar(TListaInt *lista, int valor)
{
    TListaInt *novo;
    novo=(TListaInt*)malloc(sizeof(TListaInt));
    if(novo != NULL)
    {
        novo->valor = valor;
        novo->seguinte = lista;
        return novo;
    }
    return lista;
}

void LILibertar(TListaInt *lista)
{
    TListaInt *aux;
    while(lista != NULL)
    {
        aux = lista->seguinte;
        free(lista);
        lista = aux;
    }
}

 /* Programa */
 
TListaInt *ListaAleatoria(int n, int base)
{
    TListaInt *lista=NULL; /* nova lista */
    int i;
 
    for(i=0;i<n;i++)
        lista=LIAdicionar(lista,randaux()%base);
 
    return lista;
}
 
void MostraLista(TListaInt *lista)
{
    while(lista!=NULL)
    {
        printf("%d ", lista->valor);
        lista=lista->seguinte;
    } 
}
 
int main()
{
    TListaInt *lista;
    int n,base;
    clock_t instante;

    printf("Dimensao: ");
    scanf("%d",&n);
    printf("Valor maximo: ");
    scanf("%d",&base);
 
    instante=clock();
    lista=ListaAleatoria(n,base);
    if(n<100)
        MostraLista(lista);
    LILibertar(lista);
    printf("Tempo (s): %.3f",(float)(clock()-instante)/CLOCKS_PER_SEC);
}