#include <stdio.h>

//Soma dos elementos de cada linha == Soma dos elementos de cada coluna
//Soma dos elementos da diagonal principal == Soma dos elementos da diagonal secundaria

int main()
{
  int ordem, linha, coluna, diagPrin, diagSec, somLinhas = 0, somDiagonais = 0;
  printf("Insira a ordem da matriz\n");
  scanf("%d", &ordem);
  int m[ordem][ordem], somLin[ordem], somCol[ordem];
  for(linha = 0; linha < ordem; linha++)
  {
    for(coluna = 0; coluna < ordem; coluna++)
    {
      printf("Insira o termo i=%d e j=%d\n", linha+1, coluna+1);
      scanf("%d", &m[linha][coluna]);
    }
  }
  printf("A matriz escolhida e:\n");
  for(linha = 0; linha < ordem; linha++)
  {
    for(coluna = 0; coluna < ordem; coluna++)
    {
      printf("%d\t", m[linha][coluna]);
    }
    printf("\n");
  }
  for(linha = 0; linha < ordem; linha++)      //Soma linhas e colunas e guarda nos vetores
  {
    somLin[linha]=0;
    for(coluna = 0; coluna < ordem; coluna++)
    {
      somLin[linha]+=m[linha][coluna];
    }
  }
  for(coluna = 0; coluna < ordem; coluna++)
  {
    somCol[coluna]=0;
    for(linha = 0; linha < ordem; linha++)
    {
      somCol[coluna]+=m[linha][coluna];
    }
  }
  for(linha = 0; linha < ordem; linha++)      //Verifica se as linhas são iguais as colunas
  {
    if(somCol[linha] == somLin[linha])
    {
      somLinhas = 1;
    }
    else
    {
      somLinhas = 0;
    }
  }
  diagSec = 0;
  diagPrin = 0;
  coluna = 0;
  for(linha = 0; linha < ordem; linha++)
  {
    diagPrin+=m[linha][coluna];
    coluna++;
  }
  coluna = ordem-1;
  for(linha = 0; linha < ordem; linha++)
  {
    diagSec+=m[linha][coluna];
    coluna--;
  }
  if(diagPrin == diagSec)                       //Verifica se as diagonais são iguais
  {
    somDiagonais = 1;
  }
  if((somLinhas == 1) && (somDiagonais == 1))
  {
    printf("A matriz e um quadrado perfeito\n");
  }
  else
  {
    printf("A matriz nao e um quadrado perfeito\n");
  }
  return 0;
}
