#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore um programa que leia a velocidade máxima numa localidade 
e a velocidade com que o condutor conduzia
 e calcule o valor da multa, considerando 
 que são pagos 5 Euros por cada km/h que estiver acima da velocidade permitida.
  */
  
  //NOTA: pressupoem-se que o veículo egue sempre em excesso de velocidade

main() {
	setlocale(LC_ALL, "Portuguese");
	float vpermitida=0, vveiculo=0;
	printf("Qual a velocidade máxima permitida na localidade?");
	scanf("%f", &vpermitida);
	printf("\nA que velocidade seguia o veículo?");
	scanf("%f", &vveiculo);
	printf("\n\nO veiculo seguia a uma velocidade %.2f superior ao permitido na localidade.", (vveiculo-vpermitida));
	printf("\nTerá de pagar a multa de %.2f euros, pela infração.\n\n\n",(vveiculo-vpermitida)*5);
	
	
}
