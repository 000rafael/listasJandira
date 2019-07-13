#include <stdio.h>

int main()
{
  unsigned int a[10], b[10], valor = 1;
  for(int i = 0; i < 10; i++)
  {
    printf("Insira o termo %d do vetor A\n", i+1);
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 10; i++)
  {
    for(int j = a[i]; j > 0; j--)
    {
      valor *= j;
    }
    b[i] = valor;
    printf("%d, ", b[i]);
    valor = 1;
  }
  return 0;
}
