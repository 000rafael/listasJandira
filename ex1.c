#include <stdio.h>

int main()
{
  int n, linha, coluna, cont0, perm = 0;
  cont0 = 0;
  printf("Insira aqui a ordem da matriz que voce quer verificar se e de permutacao\n");
  scanf("%i", &n);
  int matriz[n][n];
  printf("Insira os dados da matriz\n");
  //Recebe os dados:
  for(linha = 0; linha <= (n-1); linha++)
  {
    for(coluna = 0; coluna <= (n-1); coluna++)
    {
      printf("Digite o numero da posicao i=%i e j=%i\n", linha+1, coluna+1);
      scanf("%i", &matriz[linha][coluna]);
      if(matriz[linha][coluna] >= 2)
      {
        perm = 1;
        goto fimDoPrograma;
      }
    }
  }
  //Imprime a matriz:
  for(linha = 0; linha <= (n-1); linha++)
  {
    for(coluna = 0; coluna <= (n-1); coluna++)
    {
      if(matriz[linha][coluna] == 0)
      {
        cont0++;
      }
    }
    if(cont0 > (n-1))
    {
      perm = 1;
    }
    cont0 = 0;
  }

  for(coluna = 0; coluna <= (n-1); coluna++)
  {
    for(linha = 0; linha <= (n-1); linha++)
    {
      if(matriz[linha][coluna] == 0)
      {
        cont0++;
      }
    }
    if(cont0 > (n-1))
    {
      perm = 1;
    }
    cont0 = 0;
  }
  fimDoPrograma:
  if(perm == 0)
  {
    printf("A matriz e de permutacao\n");
  }
  else if(perm == 1)
  {
    printf("A matriz nao e de permutacao\n");
  }
  return 0;
}
