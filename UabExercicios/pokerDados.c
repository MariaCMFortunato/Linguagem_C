#include <stdio.h>

unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

char *poker5dados(int dados[5]){
   int  face[6], i, j, ocorre = 0;

   for (i = 0; i < 6; i++)
   {
        face[i] = 0;
   }

   for (i = 0; i < 5; i++)
   {
        face[dados[i]-1]++;
        if(ocorre < face[dados[i]-1])
        {
            ocorre= face[dados[i]-1];
        }
   }
   
    if(ocorre == 1)
    {
        if(face[0]==0 || face[5]==0)
        {
            return "sequencia";
        }
    }

    if(ocorre == 2)
    {
        for(i = 0, j = 0; i<6; i++)
        {
            if(face[i] == 2)
            {
                j++;
            }
        }
        if(j == 2)
        {
            return "duplo par";
        }
        else
        {
            return "par";
        }
        
    }

    if(ocorre == 3)
    {
        for ( i=0; i<6; i++)
        {
            if (face[i] == 2)
            {
                return "fullen";

            }
        }    
    }

    if(ocorre == 3)
    {
    return "trio";
    }

    if(ocorre == 4)
    {
         return "poker quadruplo";
    }
       
    if(ocorre == 5)
    {
        return "poker real";
    }

    return"nada";

}

int main() {
    int N,i;
    int dados[5];

    // lançamentos em falso
    scanf("%d",&N);

    for(i=0;i<N;i++)
        randaux();

    // gerar os dados
    for(i=0;i<5;i++) {
        dados[i]=1+randaux()%6;
        printf("%d ",dados[i]);
    }
    printf("(%s)",poker5dados(dados));
}