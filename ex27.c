#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int aleatorio, digitado, acerto = 0, cont = 0;
  srand((unsigned)time(NULL));
  aleatorio = (rand() % 100);
  while(acerto == 0)
  {
    printf("Digite um numero de 0 ate 100: \n");
    scanf("%d", &digitado);
    if(digitado > aleatorio)
    {
      printf("MAIOR\n");
      cont++;
    }
    else if(digitado < aleatorio)
    {
      printf("MENOR\n");
      cont++;
    }
    else if(digitado == aleatorio)
    {
      printf("Esse foi o numero digitado. Voce teve %d tentativas\n", cont);
      acerto = 1;
    }
  }
  return 0;
}
