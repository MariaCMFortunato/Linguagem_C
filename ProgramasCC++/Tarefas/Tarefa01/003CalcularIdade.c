#include <stdio.h>
#include <locale.h>

int main(){
     /* Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, 
     m�s e ano atual.
     Considere o seguinte:
     - Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento. 
     No entanto se o m�s atual for inferior ao m�s de nascimento ou o m�s atual igual ao m�s de nascimento e o dia atual inferior ao dia de nascimento a idade � o ano atual menos o ano de nascimento menos um. */
     setlocale(LC_ALL, "Portuguese");

     int diaNasc = 0, mesNasc = 0, anoNasc = 0;
     int diaAtual = 0, mesAtual = 0, anoAtual = 0, idade = 0;
     printf("Digite o dia de nascimento: ");
     scanf("%d", &diaNasc);
     printf("Digite o m�s de nascimento: ");
     scanf("%d", &mesNasc);
     printf("Digite o ano de nascimento: ");
     scanf("%d", &anoNasc);
     printf("Digite o dia atual: ");
     scanf("%d", &diaAtual);
     printf("Digite o m�s atual: ");
     scanf("%d", &mesAtual);
     printf("Digite o ano atual: ");
     scanf("%d", &anoAtual);
     idade = (anoAtual-anoNasc);
     if (mesAtual < mesNasc ) {
          idade--;
     }
     if (mesAtual == mesNasc && diaAtual < diaNasc){
          idade--;
     }
     printf("\nA idade � %d", idade);
     printf(" anos\n"); 
     
     return 0;
}