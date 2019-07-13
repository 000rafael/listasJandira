#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int vetor[10], numero, aparece;
  while(1)
  {
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++)
    {
      vetor[i] = 1+(rand() % 100);
    }
    printf("Digite um numero\n");
    scanf("%d", &numero);
    for(int i = 0; i < 10; i++)
    {
      if(vetor[i] == numero)
      {
        aparece += 1;
      }
    }
    if(aparece > 0)
    {
      printf("Seu numero existe no vetor\n");
    }
    else
    {
      printf("Seu numero nao existe no vetor\n");
    }
    aparece = 0;
  }
  return 0;
}
