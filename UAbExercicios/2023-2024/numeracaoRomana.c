#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXIMO 24

void ArabeParaRomana(int arabe, char romana[])
{
    static int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1, 0};
    static char *texto[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I", ""};
    int i;
    strcpy(romana, "");
    
    for(i = 0; valor[i] > 0; i++)
        while(arabe >= valor[i])
        {
            strcat(romana, texto[i]);
            arabe -= valor[i];
            //if(mostrar)
               // printf("  %d %s\n", arabe, romana);
        }
}

int RomanaParaArabe(char romana[])
{
    static int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1, 0};
    static char *texto[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I", ""};
    int arabe = 0, i;
    char *pt;
    pt = romana;
    while(pt[0] != 0)
        for(i = 0; valor[i] > 0; i++)
            if(texto[i][1] == 0 && pt[0] == texto[i][0])
            {
                pt++;
                arabe += valor[i];
                //if(mostrar)
                //{
                  //  printf("  %d %s\n", arabe, pt);
                    //break;
                //}
            }
            else if(texto[i][1] != 0 && 
				pt[0] == texto[i][0] && 
				pt[1] == texto[i][1])
            {
                pt += 2;
                arabe += valor[i];
                //if(mostrar)
                //{
                   // printf("  %d %s\n", arabe, pt);
                  //  break;
                //}
            }
    return arabe;
}

int main()
{
    int numero;
    char romana[MAXIMO];
    fgets(romana,MAXIMO,stdin);
    // afunção fgets no final da string inclui o carcater de mudança de linha \n por isso é necessário retirá-lo
    romana[strlen(romana)-1]=0;//igual a zero ou /0 o último carcater da string romana
    numero = atoi(romana);//converte a string romana para um número inteiro
    ArabeParaRomana(numero, romana);
    printf("%s\n", romana);

    fgets(romana,MAXIMO,stdin);
    romana[strlen(romana)-1]=0;
    printf("%d\n", RomanaParaArabe(romana));
}
