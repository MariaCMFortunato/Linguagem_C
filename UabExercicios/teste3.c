#include <stdio.h>
#include <math.h>

 #define ITERACOES 3

int main()
{
int i = 0, j;
double resultado, factor = 0, parcela;

resultado = 2. *sqrt(2.) / 9801.;

 while(i < ITERACOES)
 {
 parcela = 1103 + 26390 *i;
 /* (4k)! */
  j = 4 *i;
while(j > 0)
 {
     parcela *= j;
     j--;
 }
     /* /(k!)^4 */
   j = i;
    while(j > 0)
    {
         parcela /= j *j *j *j;
        j--;
    }
 /* /(396)^(4k) */
 j = 4 *i;
 while(j > 0)
{
 parcela /= 396;
j--;
 }
 i++;
 factor += parcela;
 }
 resultado *= factor;
 resultado = 1 / resultado;
 printf("\nValor de PI (%d iteracoes): %.17g\n", ITERACOES, resultado);
 }