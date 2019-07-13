#include <stdio.h>

int main()
{
  int a[100], imprimir = 0, repeticao = 0;
  for(int i = 0; i < 100; i++)
  {
    printf("Insira o termo %d de A\n", i+1);
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 100; i++)
  {
    for(int j = 0; j < 100; j++)
    {
      if(a[i] <= 0)
      {
        imprimir++;
      }
      if(a[i] == a[j])
      {
        repeticao++;
      }
    }
    if(imprimir == 0 && repeticao == 1)
    {
      printf("%d, ", a[i]);
    }
    imprimir = 0;
    repeticao = 0;
  }
  return 0;
}
