#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSTR 255
 
struct SData
{
    int ano, mes, dia;
};
struct SPessoa
{
    char * nome;
    char sexo;
    struct SData nascimento;
    char *morada;
    char *email;
    long telefone;
};

 struct SPessoa LerPessoa()
 {
    struct SPessoa pessoa;
    char str[MAXSTR];

    printf ("Nome: ");
    fgets(str, MAXSTR, stdin);
    pessoa.nome=(char*)malloc(strlen(str) + 1);
    strcpy(pessoa.nome, str);

    printf("Sexo: ");
    scanf("%c", &pessoa.sexo);

    printf("Data de nascimento (dd-mm-aaaa): ");
    scanf("%d-%d-%d", 
          &pessoa.nascimento.dia, 
          &pessoa.nascimento.mes, 
          &pessoa.nascimento.ano);
    
    printf("Morada: ");
    fgets(str, MAXSTR, stdin);
    fgets(str, MAXSTR, stdin);
    pessoa.morada = (char*)malloc (strlen(str) + 1);
    strcpy(pessoa.morada, str);

    printf("Email: ");
    fgets(str, MAXSTR, stdin);
    pessoa.email = (char*)malloc (strlen(str) + 1);
    strcpy(pessoa.email, str);

    printf("Telefone: ");
    scanf("%ld", &pessoa.telefone);
    return pessoa;
 }
 
void MostraPessoa(struct SPessoa pessoa)
{
    printf("\nNome: %sSexo: %c\nData de Nascimento: %d-%d-%d\n",
        pessoa.nome, pessoa.sexo, 
        pessoa.nascimento.dia,
        pessoa.nascimento.mes,
        pessoa.nascimento.ano);
    printf("Morada: %sEmail: %sTelefone: %ld\n",
        pessoa.morada,
        pessoa.email,
        pessoa.telefone);
}
 
void Libertar(struct SPessoa pessoa)
{
    free(pessoa.nome);
    free(pessoa.morada);
    free(pessoa.email);
}
 
int main()
{
    struct SPessoa pessoa;
    pessoa=LerPessoa();
    MostraPessoa(pessoa);
    Libertar(pessoa);
}