#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSTR 255
 
 typedef struct
{
    int ano, mes, dia;
}TData;

typedef struct
{
    char * nome;
    char sexo;
    TData nascimento;
    char *morada;
    char *email;
    long telefone;
}TPessoa;

 void LerPessoa(TPessoa *pessoa)
 {
    char str[MAXSTR];

    printf ("Nome: ");
    fgets(str, MAXSTR, stdin);
    pessoa ->nome=(char*)malloc(strlen(str) + 1);
    strcpy(pessoa ->nome, str);

    printf("Sexo: ");
    scanf("%c", &pessoa -> sexo);

    printf("Data de nascimento (dd-mm-aaaa): ");
    scanf("%d-%d-%d", 
          &pessoa -> nascimento.dia, 
          &pessoa -> nascimento.mes, 
          &pessoa -> nascimento.ano);
    
    printf("Morada: ");
    fgets(str, MAXSTR, stdin);
    fgets(str, MAXSTR, stdin);
    pessoa -> morada = (char*)malloc (strlen(str) + 1);
    strcpy(pessoa -> morada, str);

    printf("Email: ");
    fgets(str, MAXSTR, stdin);
    pessoa -> email = (char*)malloc (strlen(str) + 1);
    strcpy(pessoa -> email, str);

    printf("Telefone: ");
    scanf("%ld", &pessoa -> telefone);
 }
 
void MostraPessoa(TPessoa *pessoa)
{
    printf("\nNome: %sSexo: %c\nData de Nascimento: %d-%d-%d\n",
        pessoa -> nome, pessoa -> sexo, 
        pessoa -> nascimento.dia,
        pessoa -> nascimento.mes,
        pessoa -> nascimento.ano);
    printf("Morada: %sEmail: %sTelefone: %ld\n",
        pessoa -> morada,
        pessoa -> email,
        pessoa -> telefone);
}
 
void Libertar(TPessoa *pessoa)
{
    free(pessoa -> nome);
    free(pessoa -> morada);
    free(pessoa -> email);
}
 
int main()
{
   TPessoa pessoa;
    LerPessoa(&pessoa);
    MostraPessoa(&pessoa);
    Libertar(&pessoa);
}