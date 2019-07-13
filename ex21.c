#include <stdio.h>

int main()
{
  int n;
  printf("Insira um numero: \n");
  scanf("%d", &n);
  for(int i = n; i >= 1; i--)
  {
    printf("%d, ", i);
  }
  for(int i = 1; i <= n; i++)
  {
    printf("%d, ", i);
  }
  return 0;
}
