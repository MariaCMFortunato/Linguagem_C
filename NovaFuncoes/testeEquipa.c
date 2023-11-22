//Emerson Santana - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
 
//ADNEL SOUSA - função
int main(void){
 
    //AMANDA SILVA - Variáveis
    char comando[9] = "color ";
    char cores[2];
 
    //ANA TRABUCHO - comando de regionalização
    setlocale(LC_ALL, "Portuguese");
 
    //EMILIA COSTA - título do programa
    SetConsoleTitle("Cores com system");

    //ESTELA RICARDO
    printf ("Tabela de cores:\n\n");
 
    //JAQUELINE COELHO
    printf ("\t0 - Preto\t8 - Cinza\n");
 
    //JOANA BARROQUEIRO
    printf ("\t1 - Azul\t9 - Azul Claro\n");
 
    //JOÃO CORDOVIL 
    printf ("\t2 - Verde\tA - Verde Claro\n");
 
    //KARINA MERLO
    printf ("\t3 - Verde Água\tB - Verde Água Claro\n");
 
    //LUÍS VIDAL
    printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
 
    //MARCELO ZACARIAS
    printf ("\t5 - Roxo\tD - Lilás\n");
 
    //MARIA FORTUNATO
    printf ("\t6 - Amarelo\tE - Amarelo Claro\n");
 
    //MARIA SILVA
    printf ("\t7 - Branco\tF - Branco Brilhante\n");

    //PAULO FRUTUOSO
    printf ("\n\n Cor de fundo: ");
 
    //RÚBEN SILVA
    scanf("%c", &cores[0]);
    getchar();

    printf ("Cor do texto: ");
    scanf("%c", &cores[1]);

    //TIAGO FRANCISCO
    strcat (comando, cores);


    system (comando);
}
