#include <stdio.h>

int main()
{
  int a[10], b[10];
  for(int i = 0; i < 10; i++)
  {
    printf("Insira o termo %d do vetor A: \n", i+1);
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 10; i++)
  {
    printf("Insira o termo %d do vetor B: \n", i+1);
    scanf("%d", &b[i]);
  }
  for(int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 10; j++)
    {
      if(a[i] == b[j])
      {
        printf("%d e um elemento em comum dos vetores\n", a[i]);
      }
    }
  }

  return 0;
}
