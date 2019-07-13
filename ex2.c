#include <stdio.h>

int main()
{
  //Define a matriz e a ordem dela
  int ordem; //Variavel ordem matriz
  int linha, coluna; //Variavel contador matriz
  int termosEtinerario, i;
  float somaEtinerario = 0;
  printf("Insira a ordem da matriz\n");
  scanf("%d", &ordem);
  printf("Insira o numero de termos do etinerario\n");
  scanf("%d", &termosEtinerario);
  float m[ordem][ordem];
  int etinerario[termosEtinerario];
  //Dá input nos valores da matriz
  for(linha = 0; linha < ordem; linha++)
  {
    for(coluna = 0; coluna < ordem; coluna++)
    {
      printf("Insira o termo i=%d e j=%d\n", (linha+1), (coluna+1));
      scanf("%f", &m[linha][coluna]);
    }
  }
  //Imprime a matriz para visualização (não necessário e não feito no fluxograma)
  for(linha = 0; linha < ordem; linha++)
  {
    for(coluna = 0; coluna < ordem; coluna++)
    {
      printf("%.2f\t", m[linha][coluna]);
    }
    printf("\n");
  }
  //Ler todos os valores do Etinerario
  for(i = 0; i < termosEtinerario; i++)
  {
    printf("Digite o termo %d do etinerario\n", (i+1));
    scanf("%d", &etinerario[i]);
  }
  //Soma os valores do Etinerario
  for(i = 0; i < termosEtinerario-1; i++)
  {
    linha = etinerario[i];
    coluna = etinerario[i+1];
    somaEtinerario += m[linha][coluna];
  }
  printf("\n\n\n\nO custo do etinerario e: %.2f", somaEtinerario);
  return 0;
}
