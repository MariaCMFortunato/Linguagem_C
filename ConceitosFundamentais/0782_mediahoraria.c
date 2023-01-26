#include <stdio.h>
#include <stdlib.h>



main() {
	int kms=0, horas=0, media=0;
	printf("Digite kms percorridos: ");
	scanf ("%d", &kms);
	printf("Digite tempo gasto em horas: ");
	scanf ("%d", &horas);
	media=(kms/horas);
	printf("A media foi: %d", media);
	
	
	
}
