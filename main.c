#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int MaxvetorIterativo()
{
    int random = 1 + (rand()%10);
    int v[random];
    int n = 0;
    for(n=0; n<random; n++)
    {
        v[n] = rand()%50;
        printf("%d\n",v[n]);
    }
    int maximo = v[0];
    if(random == 1)
    {
        return v[0];
    }
    else
    {
        for(n=1; n<random; n++)
        {
            if(v[n] > maximo)
            {
                maximo = v[n];
            }
        }
    }
    return maximo;
}
int MaxvetorRecursivo(int n,int v[])
{
    int x = n+1;
    int maximo = v[n];
    if(n==0)
        return v[n];
    else
        {
            if(maximo < v[n-1])
            {
                maximo = v[n-1];
                return MaxvetorRecursivo(n-1,v);
            }
        }
}

int CalcPotIterativo(int n)
{
    int c;
    int pot=2;
    for(c=1;c<n;c++)
    {
        pot = pot*2;
    }
    return pot;
}

int CalcPotRecursivo(int n)
{
    if(n==1)
        return 2;
    else
        return 2*CalcPotRecursivo(n-1);
}
int OrdenacaoIterativo(int n,int v[])
{
    n=4;
    int e;
    int c,j;
    for(c=0;c<n;c++)
    {
        scanf("%d",&v[c]);
    }
    for(c=0;c<n;c++)
    {
        for(j=c;j<n;j++)
        {
            if(v[c] > v[j])
                {
                    return 0;
                }
        }
    }
    return 1;
}
int OrdenacaoRecursivo()
{

}
int menu()
{

}
int main()
{
    srand(time(NULL));
    int v[4];
    //int m = MaxvetorIterativo();
    //int x = MaxvetorRecursivo(4,v);
    int z = OrdenacaoIterativo(4,v);
    printf("\nmaior eh;;; %i",z);
}
