#include <stdio.h>

int main()
{

  float ordem2[2][2], ordem3[3][3], determinante = 0;
  int ordem;

  printf("Insira a ordem da matriz (3 ou 2)\n");
  scanf("%d", &ordem);

  if(ordem == 2)
  {
    for(int linha = 0; linha < 2; linha++)
    {
      for(int coluna = 0; coluna < 2; coluna++)
      {
        printf("Insira a posicao i=%d e j=%d\n", linha+1, coluna+1);
        scanf("%f", &ordem2[linha][coluna]);
      }
    }
    determinante = (ordem2[0][0]*ordem2[1][1])-(ordem2[0][1]*ordem2[1][0]);
    printf("O determinante e: %f\n", determinante);
  }
  else if(ordem == 3)
  {
    for(int linha = 0; linha < 3; linha++)
    {
      for(int coluna = 0; coluna < 3; coluna++)
      {
        printf("Insira a posicao i=%d e j=%d\n", linha+1, coluna+1);
        scanf("%f", &ordem3[linha][coluna]);
      }
    }
    determinante = (ordem3[0][0]*ordem3[1][1]*ordem3[2][1])+(ordem3[0][1]*ordem3[1][2]*ordem3[2][0])+(ordem3[0][2]*ordem3[1][0]*ordem3[2][1]);
    determinante -= (ordem3[0][2]*ordem3[1][1]*ordem3[2][0])+(ordem3[0][0]*ordem3[1][2]*ordem3[2][1])+(ordem3[0][1]*ordem3[1][0]*ordem3[2][2]);
    printf("O determinante e: %f\n", determinante);
  }
  else
  {
    printf("Dado invalido\n");
  }

  return 0;
}
