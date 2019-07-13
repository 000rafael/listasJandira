#include <stdio.h>

int main()
{
  int n;
  float soma = 0, razao = 0, iFloat;
  printf("Insira N: \n");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    iFloat = i;
    soma += 1/iFloat;
  }
  printf("O resultado e: %.2f\n", soma);
  return 0;
}
