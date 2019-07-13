#include <stdio.h>

int main()
{
  int a[4][4], primo = 0, outrasCondicoes = 0;
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("Insira o termo A%d,%d\n", i+1, j+1);
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      if(a[i][j] < 0)
      {
        a[i][j] = 0;
        outrasCondicoes++;
      }
      else if((a[i][j] % 2 == 0) && (a[i][j] >= 0))
      {
        a[i][j] = -1;
        outrasCondicoes++;
      }
      for(int k = 2; k < a[i][j]; k++)
      {
        if(a[i][j] % k == 0 && a[i][j] != 1)
        {
          primo++;
        }
      }
      if(primo == 0 && outrasCondicoes == 0)
      {
        a[i][j] = -2;
      }
      primo = 0;
      outrasCondicoes = 0;
    }
  }
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
