#include <stdio.h>

int main()
{
  int a[15],b[15] = {0};
  for(int i = 0; i < 15; i++)
  {
    printf("Insira o termo %d de A\n", i+1);
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 15; i++)
  {
    for(int j = i; j >= 0; j--)
    {
      b[i] += a[j];
    }
    printf("%d, ", b[i]);
  }
  return 0;
}
