#include <stdio.h>
int main()
{
  int x[30];
  for(int i = 0; i < 30; i++)
  {
    printf("Insira o termo %d do vetor X\n", i+1);
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < 30; i++)
  {
    if(x[i] % 2 == 0)
    {
      printf("O elemento %d de posicao %d e par\n", x[i], i+1);
    }
  }
  printf("\n");
  for(int i = 0; i < 30; i++)
  {
    if(x[i] % 2 == 1)
    {
      printf("O elemento %d de posicao %d e impar\n", x[i], i+1);
    }
  }

  return 0;
}
