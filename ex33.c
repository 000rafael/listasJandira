#include <stdio.h>

int main()
{
  int x[15], cont = 0;
  for(int i = 0; i < 15; i++)
  {
    printf("Insira o termo %d do vetor X\n", i+1);
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < 15; i++)
  {
    if(x[i] % 2 == 0)
    {
      cont++;
    }
  }
  printf("O numero de termos pares e: %d\n", cont);
  return 0;
}
