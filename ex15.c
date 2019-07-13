#include <stdio.h>

int main()
{
  unsigned int numero, resultado = 1;
  printf("Insira o numero para calcular seu fatorial\n");
  scanf("%d", &numero);

  for(numero; numero > 0; numero--)
  {
    resultado *= numero;
  }
  printf("O resultado e: %d\n", resultado);
  return 0;
}
