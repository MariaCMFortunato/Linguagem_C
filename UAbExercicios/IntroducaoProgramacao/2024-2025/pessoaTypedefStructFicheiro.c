#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSTR 255
/*Tipo de dados abstrato: TListaPessoa*/
typedef struct
{
    int ano, mes, dia;
} TData;

typedef struct SPessoa
{
    char *nome;
    char sexo;
    TData nascimento;
    char *morada;
    char *email;
    long telefone;
    struct Spessoa *seguinte;
} TListaPessoa;

TListaPessoa *LPAdicionar(TListaPessoa *lista, TListaPessoa pessoa)
{
    TListaPessoa *novo;
    novo = (TListaPessoa *)malloc(sizeof(TListaPessoa));
    if (novo != NULL)
    {
        (*novo) = pessoa;
        novo->seguinte = lista;
        return novo;
    }
    return lista;
}

void LPLibertar(TListaPessoa *lista)
{
    TListaPessoa *aux;
    while (lista != NULL)
    {
        aux = lista->seguinte;
        free(lista->nome);
        free(lista->morada);
        free(lista->email);
        free(lista);
        lista = aux;
    }
}

/*Programa*/

/*Colocar fout = NULL para não imprimir texto dos campos a ler*/
void LerPessoa(TListaPessoa *pessoa, FILE *fin, FILE *fout)
{
    char str[MAXSTR];
    if (fout != NULL)
    {
        fprintf(fout, "Nome: ");
    }
    fgets(str, MAXSTR, fin);
    pessoa->nome = (char *)malloc(strlen(str) + 1);
    strcpy(pessoa->nome, str);

    if (fout != NULL)
    {
        fprintf(fout, "Sexo: ");
    }
    fscanf(fin, "%c", &pessoa->sexo);

    if (fout != NULL)
    {
        fprintf(fout, "Data de nascimento (dd-mm-aaaa): ");
    }
    fscanf(fin, "%d-%d-%d",
           &pessoa->nascimento.dia,
           &pessoa->nascimento.mes,
           &pessoa->nascimento.ano);

    if (fout != NULL)
    {
        fprintf(fout, "Morada: ");
    }
    fgets(str, MAXSTR, fin);
    fgets(str, MAXSTR, fin);
    pessoa->morada = (char *)malloc(strlen(str) + 1);
    strcpy(pessoa->morada, str);

    if (fout != NULL)
    {
        fprintf(fout, "Email: ");
    }
    fgets(str, MAXSTR, fin);
    pessoa->email = (char *)malloc(strlen(str) + 1);
    strcpy(pessoa->email, str);

    if (fout != NULL)
    {
        fprintf(fout, "Telefone: ");
    }
    fscanf(fin, "%ld", &pessoa->telefone);
}

/*grava para fout, mas apenas mostra texto com o nome dos campos se prompt = 1*/

void MostraPessoa(TListaPessoa *pessoa, FILE *fout, int prompt)
{
    if (prompt == 0)
    {
        fprintf(fout, "%s%c\n%d-%d-%d\n%s%s%ld",
                pessoa->nome,
                pessoa->sexo,
                pessoa->nascimento.dia,
                pessoa->nascimento.mes,
                pessoa->nascimento.ano,
                pessoa->morada,
                pessoa->email,
                pessoa->telefone);
    }
    else
    {
        fprintf(fout, "\nNome: %s\nSexo: %c\nData de Nascimento: %d-%d-%d\n",
                pessoa->nome,
                pessoa->sexo,
                pessoa->nascimento.dia,
                pessoa->nascimento.mes,
                pessoa->nascimento.ano);
        fprintf(fout, "Morada: %s\nEmail: %s\nTelefone: %ld\n",
                pessoa->morada,
                pessoa->email,
                pessoa->telefone);
    }
}

int main()
{
    FILE *f;
    TListaPessoa *lista = NULL, *i, pessoa;
    /*ler as pessoas todas do ficheiro pessoas.txt*/
    f = fopen("pessoas.txt", "rt");
    if (f != NULL)
    {
        while (!feof(f))
        {
            /*lê uma pessoa do ficheiro*/
            LerPessoa(&pessoa, f, NULL);
            lista = LPAdicionar(lista, pessoa);
        }
        fclose(f);
    }

    for (i = lista; i != NULL; i = i->seguinte)
    {
        MostraPessoa(i, stdout, 1);
    }

    /*lé uma pessoa do teclado*/
    LerPessoa(&pessoa, stdin, stdout);
    lista = LPAdicionar(lista, pessoa);
    /*grava tudo para o ficheiro*/
    f = fopen("pessoas.txt", "wt");
    if (f != NULL)
    {
        for (i = lista; i != NULL; i = i->seguinte)
        {
            MostraPessoa(i, f, 0);
        }
        fclose(f);
    }
    LPLibertar(lista);
}