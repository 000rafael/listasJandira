#include <stdio.h>

int main()
{
  int linha, coluna, somatoria = 0;
  char tab[8][8];
  printf("Insira todas as posições das pecas do jogo.\n");
  printf("0 - para posicao vazia\np - para peao\nc - para cavalo\nb - para bispo\nt - para torre\nq - para rainha\nk - para rei\n");

  for(linha = 0; linha < 8; linha++)
  {
    for(coluna = 0; coluna < 8; coluna++)
    {
      printf("Insira o ter i=%d e j=%d\n", linha+1, coluna+1);
      scanf("%s", &tab[linha][coluna]);
    }
  }


  for(linha = 0; linha < 8; linha++)
  {
    for(coluna = 0; coluna < 8; coluna++)
    {

      if(tab[linha][coluna] == 'p')
      {
        somatoria += 1;
      }
      else if(tab[linha][coluna] == 'c')
      {
        somatoria += 3;
      }
      else if(tab[linha][coluna] == 'b')
      {
        somatoria += 3;
      }
      else if(tab[linha][coluna] == 't')
      {
        somatoria += 5;
      }
      else if(tab[linha][coluna] == 'q')
      {
        somatoria += 10;
      }
      else if(tab[linha][coluna] == 'k')
      {
        somatoria += 50;
      }
      else
      {
        somatoria += 0;
      }
    }
  }
  printf("O valor total das pecas do jogo e: %d\n", somatoria);
  return 0;
}
