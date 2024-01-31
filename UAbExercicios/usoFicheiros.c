#include <stdio.h>
 
int main()
{
    int ano, mes, dias;
    FILE *f, *f2;
    f=stdin;
    f2=stdout;
    if(f==NULL || f2==NULL)
        return 0;
    fscanf(f,"%d", &ano);
    fscanf(f,"%d", &mes);
    
    if(mes==2)
    {
        if(ano%400==0 || ano%4==0 && ano%100!=0)
            fprintf(f2, "29");
        else
            fprintf(f2, "28");
    }
    else if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
    {
        fprintf(f2, "31");
    }
    else
    {
        fprintf(f2, "30");
    }

     
}