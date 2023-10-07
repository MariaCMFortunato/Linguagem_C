#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("Calculo do numero de segundos desde o inicio do dia.\nHora: ");
    scanf("%d", & horas);
    printf("Minuto: ");
    scanf("%d", & minutos);
    printf("Segundos: ");
    scanf("%d", & segundos);

    minutos += horas*60;
    segundos += minutos*60;

    printf("Numero de segundos desde o inicio do dia: %d", segundos);   
}