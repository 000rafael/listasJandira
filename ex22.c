#include <stdio.h>

int main()
{
  int numero, numeroBin = 0, mult = 1;
  printf("Insira o numero que voce quer calcular em binario: \n");
  scanf("%d", &numero);
  for(int i = 31; i >= 0; i--)
  {
    if(numero % 2 == 1)
    {
      numero /= 2;
      numeroBin += 1*mult;
    }
    else if ((numero % 2 == 0) && (numero != 0))
    {
      numero /= 2;
      numeroBin += 0*mult;
    }
    mult *= 10;
  }
  printf("Esse numero em binario e: %d\n", numeroBin);
  return 0;
}
