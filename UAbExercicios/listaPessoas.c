#include <stdio.h>

#define MAXSTR 255

typedef struct
{
    int ano, mes, dia;
}TData;

typedef struct SPessoa
{
    char *nome;
    char sexo;
    TData nascimento;
    char *morada;
    char *email;
    long telefone;
    struct SPessoa *seguinte;
}TlistaPessoa;

TlistaPessoa* LPAdicionar(TlistaPessoa *lista, TlistaPessoa pessoa)
{
    TlistaPessoa * novo;
    novo = (TlistaPessoa*) malloc (sizeof(TlistaPessoa));
    if(novo != NULL)
    {
        (*novo)=pessoa;
        novo->seguinte=lista;
        return novo;
    }
    return lista;
}

void LPLibertar(TlistaPessoa *lista)
{
    
}