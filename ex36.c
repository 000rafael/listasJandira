#include <stdio.h>

int main()
{
  float a[50], aux;
  for(int i = 0; i < 50; i++)
  {
    printf("Insira o termo %d de A\n", i+1);
    scanf("%f", &a[i]);
  }
  for(int i = 49; i >= 0; i--)
  {
    for(int j = 49; j >= 0; j--)
    {
      if(a[i] < a[j])
      {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
      }
    }
  }
  for(int i = 0; i < 50; i++)
  {
    printf("%.2f, ", a[i]);
  }
  return 0;
}
