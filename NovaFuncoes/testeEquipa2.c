//Admin
#include <stdio.h>
 
//ADNEL SOUSA ? fun��o
int main(int argc, char *argv[])
{

    //AMANDA SILVA ? Vari�veis

    int valor1, valor2, opcao, resultado;

    //ANA TRABUCHO
    puts("Introduza o primeiro valor");
    scanf("%d", &valor1);

    //EMILIA COSTA
    puts("Introduza o segundo valor");
    scanf("%d", &valor2);

    //ESTELA RICARDO
    puts("1-Soma");
 
    //JAQUELINE COELHO
    puts("2-Subtracao");
 
    //JOANA BARROQUEIRO
    puts("3-Multiplicacao");
 
    //JO�O CORDOVIL 
    printf ("\t1 - Azul\t9 - Azul Claro\n");
 
    //KARINA MERLO
    puts("4-Divisao");
 
    //LU�S VIDAL
    printf("Opcao:");
    scanf("%d",&opcao);
 
    //MARCELO ZACARIAS
    switch(opcao){

    //MARIA FORTUNATO
        case 1: resultado=valor1+valor2; break;
 
????//MARIA SILVA
        case 2: resultado=valor1-valor2; break;
 
????//PAULO FRUTUOSO
        case 3: resultado=valor1*valor2; break;
 
????//R�BEN SILVA
        case 4: resultado=valor1/valor2; break;
        default: puts("A opcao esta incorrecta");
        }

????//TIAGO FRANCISCO??
??printf("O resultado e: %d\n", resultado);
 
 
??return 0;


}
