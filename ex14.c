#include <stdio.h>

int main()
{
  unsigned int numA = 1, numB = 0, numAtual = 0, i;
  printf("Insira ate que termo você deseja\n");
  scanf("%d", &i);

  for(int num = 0; num < i; num++)
  {
    printf("O termo %d da sequencia de Fibonacci e: %d\n", num+1, numAtual);
    numAtual = numA + numB;
    numA = numB;
    numB = numAtual;
  }
  return 0;
}
