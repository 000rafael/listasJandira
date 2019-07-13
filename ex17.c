#include <stdio.h>

int main()
{
  int m, n, i, j;
  printf("Digite o numero de linhas e colunas que a matriz vai ter\n");
  scanf("%d %d", &m, &n);
  int matriz[m][n];

  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(i < j)
      {
        matriz[i][j] = 2*i+7*j-2;
      }
      else if(i == j)
      {
        matriz[i][j] = 3*i*2-1;
      }
      else if(i > j)
      {
        matriz[i][j] = 4*i*3-5*j*2+1;
      }
    }
  }
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
