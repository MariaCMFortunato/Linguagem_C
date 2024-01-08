#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
unsigned int randaux()
{
  static long seed=1;
  return(((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

typedef struct 
{
    int n, alocado;
    //adiconada a variável alocado
    int *valor;
}TVectorInt;

TVectorInt VICriar()
{
    TVectorInt vector;
    vector.valor = NULL;
    vector.n = 0;
    vector.alocado = 0;
    //adiconada iniciacilizaçºão da variável alocado
    return vector;
}

int VITamanho(TVectorInt *vector)//Sem alteração
{
    return vector->n;
}

void VIInternoRealocar(TVectorInt *vector, int i)
{
    int k, *vectorAntigo;
    vectorAntigo=vector->valor;
    /*vectorAntigo recebe o valor (endereço)de vector->valor, passando a apontar para 
    a mesma região de mmória que vector->valor*/
    vector->valor=(int*)malloc(sizeof(int)*(i+1)*2);
    //aloca-se o dobro do espaço mnais um
    if(vector->valor!=NULL)// verifica se existem elementos no vetor para serem copiados
    {
        for(k = 0; k<vector->n;k++)
            vector->valor[k] = vectorAntigo[k];
            /*itera sobre todos os valores do VectorAntigo e copia cada elemento para 
            a nova área de memória alocada para o vetor(Vector->Valor)*/
        vector->alocado = (i + 1) * 2;// atualiza o tamanho do vetor (vector->n) para i+1
    }
    else
        vector->alocado = 0;
    if(vectorAntigo!=NULL)
        free(vectorAntigo);

}

void VIValorI(TVectorInt *vector, int i, int valor)
{
    /*Se o tamanho for excedido, realocar*/
    if(i > vector->alocado)//passa a verificar o tamanho alocado
        VIInternoRealocar(vector, i);

    if(i >= 0 && i < vector->alocado)//passa a verificar o tamanho alocado
    {
        vector->valor[i] = valor;
        //atualiza a dimensão lógica do vetor
        if(i > vector->n)
            vector->n = i+1;
    }
}

int VIValorO(TVectorInt *vector, int i)
{
    /*Não se coloca aqui a realocação aqui porque esta operação é de leitura e não 
    de escrita*/
    if(i >= 0 && i < vector->n)
        return vector->valor[i];
    return 0;
}

void VILibertar(TVectorInt *vector)
{
    if(vector->valor != NULL)
    {
        free(vector->valor);
        vector->valor= NULL;
        vector->alocado = 0; //nova variável
        vector->n = 0;
    }
}

/* Programa */
 
TVectorInt VectorAleatorio(int n, int base)
{
    TVectorInt vector;
    int i;
 
    vector=VICriar();
 
    for(i=0;i<n;i++)
        VIValorI(&vector,i,randaux()%base);
        /*O operador & é usado para obter o endereço de vector*/

    return vector;
}
 
void MostraVector(TVectorInt *vector)
{
    int i;
    for(i=0;i<VITamanho(vector);i++)
        printf("%d ",VIValorO(vector,i));
}
 
int main()
{
    TVectorInt vector;
    int n,base;
    clock_t instante;//decvlara uma variável instante do tipo clock_t
    /*clock_t é um tipo de dados usado para representar unidades de tempo, geralmente medidas em ciclos de clock, necessita da biblioteca time.h*/

    printf("Dimensao: ");
    scanf("%d",&n);
    printf("Valor maximo: ");
    scanf("%d",&base);
 
    instante = clock();
    /*Atribui à variável instante o valor retornado pela função clock. Esta função, da biblioteca time.h, retorna o número de ciclos de clock decorridos desde o inicio do programa. É usado habitualmente para medir o tempo de execução de uma secção especvifica do código*/
    vector=VectorAleatorio(n,base);
    if(n < 100)
        MostraVector(&vector);
        /*chama a função, passando o endereço de memória (&vector)*/
    VILibertar(&vector);
    printf("Tempo (s): %.1g", (float)(clock()-instante)/CLOCKS_PER_SEC);
}