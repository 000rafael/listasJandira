#include <stdio.h>
int main()
{
  int caracter, codNum[13], i = 0;
  char cod[13];     //O codigo ISBN passou a ter 13 digitos, no máximo, a partir de 2007

  printf("Insira o seu codigo ISBN\n");
  scanf("%s", &cod);

  for(caracter = 0; caracter < 13; caracter++)
  {
    codNum[caracter] = cod[caracter]-48;
  }

  printf("Lingua: ");
  for(caracter = 0; caracter < 13; caracter++)
  {
    if(codNum[caracter] != -3)
    {
      printf("%d", codNum[caracter]);
    }
    else
    {
      if(i == 0)
      {
        printf("\nEditora: ");
      }
      else if(i == 1)
      {
        printf("\nCodigo: ");
      }
      else if(i == 2)
      {
        printf("\nCheck digit: ");
      }
      i++;
    }
  }
  return 0;
}
