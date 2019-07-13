#include <stdio.h>

int main()
{
  int x[20], somatoria = 0;
  for(int i = 0; i < 20; i++)
  {
    printf("Insira o termo %d do vetor X\n", i+1);
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < 20; i++)
  {
    somatoria += x[i];
  }
  printf("A somatoria dos termos e: %d\n", somatoria);
  return 0;
}
