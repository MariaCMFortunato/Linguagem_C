//Emerson Santana - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
 
//ADNEL SOUSA - fun��o
int main(void){
 
    //AMANDA SILVA - Vari�veis
    char comando[9] = "color ";
    char cores[2];
 
    //ANA TRABUCHO - comando de regionaliza��o
    setlocale(LC_ALL, "Portuguese");
 
    //EMILIA COSTA - t�tulo do programa
    SetConsoleTitle("Cores com system");

    //ESTELA RICARDO
    printf ("Tabela de cores:\n\n");
 
    //JAQUELINE COELHO
    printf ("\t0 - Preto\t8 - Cinza\n");
 
    //JOANA BARROQUEIRO
    printf ("\t1 - Azul\t9 - Azul Claro\n");
 
    //JO�O CORDOVIL 
    printf ("\t2 - Verde\tA - Verde Claro\n");
 
    //KARINA MERLO
    printf ("\t3 - Verde �gua\tB - Verde �gua Claro\n");
 
    //LU�S VIDAL
    printf ("\t4 - Vermelho\tC - Vermelho Claro\n");
 
    //MARCELO ZACARIAS
    printf ("\t5 - Roxo\tD - Lil�s\n");
 
    //MARIA FORTUNATO
    printf ("\t6 - Amarelo\tE - Amarelo Claro\n");
 
    //MARIA SILVA
    printf ("\t7 - Branco\tF - Branco Brilhante\n");

    //PAULO FRUTUOSO
    printf ("\n\n Cor de fundo: ");
 
    //R�BEN SILVA
    scanf("%c", &cores[0]);
    getchar();

    printf ("Cor do texto: ");
    scanf("%c", &cores[1]);

    //TIAGO FRANCISCO
    strcat (comando, cores);


    system (comando);
}
