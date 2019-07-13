#include <stdio.h>

int main()
{
  int a[10], b[10], c[20], aux;
  for(int i = 0; i < 10; i++)
  {
    printf("Insira o termo %d do vetor A\n", i+1);
    scanf("%d", &a[i]);
    printf("Insira o termo %d do vetor B\n", i+1);
    scanf("%d", &b[i]);
  }
  for(int i = 0; i < 10; i++)
  {
    c[i] = a[i];
  }
  for(int i = 10; i < 20; i++)
  {
    c[i] = b[i-10];
  }

  for(int i = 19; i >= 0; i--)
  {
    for(int j = 19; j >= 0; j--)
    {
      if(c[i] < c[j])
      {
        aux = c[i];
        c[i] = c[j];
        c[j] = aux;
      }
    }
  }
  for(int i = 0; i < 20; i++)
  {
    printf("%d, ", c[i]);
  }

  return 0;
}
