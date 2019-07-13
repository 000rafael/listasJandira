#include <stdio.h>

int main()
{
  int a[10], b[10], elementoComum = 0;
  for(int i = 0; i < 10; i++)
  {
    printf("Insira o termo %d de A: \n", i+1);
    scanf("%d", &a[i]);
    printf("Insira o termo %d de B: \n", i+1);
    scanf("%d", &b[i]);
  }
  printf("Elementos que aparecem em A e nao aparecem em B: \n");
  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      if(a[i] == b[j])
      {
        elementoComum++;
      }
    }
    if(elementoComum == 0)
    {
      printf("%d, ", a[i]);
    }
    elementoComum = 0;
  }
  printf("\nElementos que aparecem em B e nao aparecem em A: \n");
  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      if(b[i] == a[j])
      {
        elementoComum++;
      }
    }
    if(elementoComum == 0)
    {
      printf("%d, ", b[i]);
    }
    elementoComum = 0;
  }
  return 0;
}
