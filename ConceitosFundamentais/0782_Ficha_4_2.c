#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que leia a velocidade m�xima numa localidade 
e a velocidade com que o condutor conduzia
 e calcule o valor da multa, considerando 
 que s�o pagos 5 Euros por cada km/h que estiver acima da velocidade permitida.
  */
  
  //NOTA: pressupoem-se que o ve�culo egue sempre em excesso de velocidade

main() {
	setlocale(LC_ALL, "Portuguese");
	float vpermitida=0, vveiculo=0;
	printf("Qual a velocidade m�xima permitida na localidade?");
	scanf("%f", &vpermitida);
	printf("\nA que velocidade seguia o ve�culo?");
	scanf("%f", &vveiculo);
	printf("\n\nO veiculo seguia a uma velocidade %.2f superior ao permitido na localidade.", (vveiculo-vpermitida));
	printf("\nTer� de pagar a multa de %.2f euros, pela infra��o.\n\n\n",(vveiculo-vpermitida)*5);
	
	
}
