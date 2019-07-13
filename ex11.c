#include <stdio.h>


int contapessoas(int lugs[50])
{
  int i;
  int npess=0;
  for (i=0;i<50;i++)
  {
    npess=npess+lugs[i];
  }
  return npess;
}

int main()
{
  int lugar[50],n,m;
  int i,lugactual;
  int psaltadas;
  do{

    printf("Digite o numero de Pessoas N\n");
    scanf("%d",&n);
    }while(n<=0 && n>=0);
   printf("Digite a posicao M\n");
   scanf("%d",&m);

        for(i=0;i<n;i++)
        lugar[i]=1;
        for(i=n;i<50;i++)
            lugar[i]=0;
            lugactual=0;

    while(contapessoas(lugar)>1)
    {
        psaltadas=0;
        while(psaltadas<n){
        if(lugar[lugactual]==1)
        psaltadas++;
        lugactual++;
        if (lugactual==n)
            lugactual=0;

        }
        if (lugactual == 0){
        lugactual = n-1;
        }else
        lugactual--;
        lugar[lugactual]=0;
        }

        for(i=0;i<n;i++)
        if(lugar[i]==1)
        printf("%d\n",i);



return 0;

}
