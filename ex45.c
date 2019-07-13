#include <stdio.h>

int main()
{
  float b[50], maiorValor;
  for(int i = 0; i < 50; i++)
  {
    printf("Insira a posicao %d de B: \n", i+1);
    scanf("%f", &b[i]);
  }
  maiorValor = b[0];
  for(int i = 1; i < 50; i++)
  {
    if(b[i] > maiorValor)
    {
      maiorValor = b[i];
    }
  }
  for(int i = 0; i < 50; i++)
  {
    b[i] /= maiorValor;
    printf("%.2f, ", b[i]);
  }
  return 0;
}
