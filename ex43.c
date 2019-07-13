#include <stdio.h>
#include <math.h>

int main()
{
  int k[15], primo = 0, contPrimo = 0;
  for(int i = 0; i < 15; i++)
  {
    printf("Insira o termo %d de K\n", i+1);
    scanf("%d", &k[i]);
  }
  for(int i = 0; i < 15; i++)
  {
    for(int j = k[i]-1; j >= 2; j--)
    {
      if(k[i] % j == 0 && k[i])
      {
        primo++;
      }
    }
    if(primo == 0 && k[i] != 1)
    {
      printf("%d, ", k[i]);
      contPrimo++;
    }
    primo = 0;
  }
  if(contPrimo == 0)
  {
    for(int i = 0; i < 15; i++)
    {
      if(k[i] == 6 || k[i] == 28 || k[i] == 496 || k[i] == 8128 || k[i] == 33550336)
      {
        k[i] = pow(k[i], 4)*3;
        k[i] /= 4;
        printf("%d, ", k[i]);
      }
    }
  }
  return 0;
}
