#include <stdio.h>

int main()
{
  float num = 0, media = 0;
  int contador = 0;
  while (num >= 0)
  {
    printf("Digite um numero para adicionar. Insira um numero negativo para encerrar\n");
    scanf(" %f", &num);
    if(num >= 0)
    {
      contador++;
      media += num;
    }
    else
    {
      media /= contador;
      printf("A media aritmetica e: %.3f\n", media);
    }
  }
  return 0;
}
