#include <stdio.h>
int main()
{
  int linha, coluna, linhaCont, colunaCont, somX1 = 1, somXn = 1, somY1 = 1, somYn = 1, divisor = 1;
  float somatoriaTotal = 0;
  printf("Insira o numero de linhas que a matriz tera\n");
  scanf("%d", &linha);
  printf("Insira o numero de colunas que a matriz tera\n");
  scanf("%d", &coluna);
  int m[linha][coluna];

  for(linhaCont = 0; linhaCont < linha; linhaCont++)
  {
    for(colunaCont = 0; colunaCont < coluna; colunaCont++)
    {
      printf("Insira a posicao i=%d e j=%d\n", linhaCont+1, colunaCont+1);
      scanf("%d", &m[linhaCont][colunaCont]);
    }
  }

  for(linhaCont = 0; linhaCont < linha; linhaCont++)
  {
    for(colunaCont = 0; colunaCont < coluna; colunaCont++)
    {
      printf("%d\t", m[linhaCont][colunaCont]);
    }
    printf("\n");
  }

  printf("Insira o ponto que voce quer calcular a media dos adjacentes\n");
  printf("\nLinha: ");
  scanf("%d", &linhaCont);
  printf("\nColuna: ");
  scanf("%d", &colunaCont);
  linhaCont--;
  colunaCont--;

  if((linhaCont-1) < 0)
  {
    somXn = 0;
  }
  if((linhaCont+1) > (linha-1))
  {
    somX1 = 0;
  }
  if((colunaCont-1) < 0)
  {
    somYn = 0;
  }
  if((colunaCont+1) > (coluna-1))
  {
    somY1 = 0;
  }

  somatoriaTotal += m[linhaCont][colunaCont];
  if(somXn == 1)
  {
    somatoriaTotal += m[(linhaCont-1)][colunaCont];
    divisor++;
  }
  if(somX1 == 1)
  {
    somatoriaTotal += m[(linhaCont+1)][colunaCont];
    divisor++;
  }
  if(somYn == 1)
  {
    somatoriaTotal += m[linhaCont][(colunaCont -1)];
    divisor++;
  }
  if(somY1 == 1)
  {
    somatoriaTotal += m[linhaCont][colunaCont +1];
    divisor++;
  }


  somatoriaTotal /= divisor;

  printf("A media dos pontos adjacentes do ponto escolhido e: %.3f\n", somatoriaTotal);
  return 0;
}
