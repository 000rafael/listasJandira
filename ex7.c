#include <stdio.h>
#include <string.h>
int main()
{
  int num, i, j;
  struct restaurantes
  {
    char nome[20];
    char endereco[40];
    float precoMedio;
    char tipoComida[20];
  };
  printf("Insira o numero de restaurantes que voce vai colocar: \n");
  scanf("%d", &num);
  struct restaurantes restaurante[num], aux;
  for(i = 0; i < num; i++)
  {
    printf("Insira o nome do Restaurante No%d: \n", i+1);
    scanf("\n%[^\n]s", &restaurante[i].nome);
    printf("Insira o endereco do Restaurante No%d\n", i+1);
    scanf("\n%[^\n]s", &restaurante[i].endereco);
    printf("Insira o preco medio do Restaurante No%d\n", i+1);
    scanf("%f", &restaurante[i].precoMedio);
    printf("Insira o tipo de comida (fritura, assado ou salada) do Restaurante No%d\n", i+1);
    scanf("\n%[^\n]s", &restaurante[i].tipoComida);
  }
  for(i = 0; i < num; i++)
  {
    printf("\n\n=====================================================\n");
    printf("Restaurante %s: \n", restaurante[i].nome);
    printf("Endereco: %s\n", restaurante[i].endereco);
    printf("Preco medio e de: RS%.2f\n", restaurante[i].precoMedio);
    printf("Tipo de comida: %s\n", restaurante[i].tipoComida);
  }
  for(i = 0; i < num; i++)               //Coloca os dados em ordem crescente
  {
    for(j = i; j < num; j++)
    {
      if(restaurante[i].precoMedio > restaurante[j].precoMedio)
      {
        aux = restaurante[i];
        restaurante[i] = restaurante[j];
        restaurante[j] = aux;
      }
    }
  }
  printf("Os resturantes organizados de acordo com o preco medio, em ordem crescente sao: \n");
  for(i = 0; i < num; i++)
  {
    printf("\n=====================================================\n");
    printf("Restaurante %s: \n", restaurante[i].nome);
    printf("Preco medio e de: RS%.2f\n", restaurante[i].precoMedio);
  }
  printf("O que cada restaurante tem em seu cardapio: \n");
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "fritura") == 0)
    {
      printf("O restaurante %s tem frituras\n", restaurante[i].nome);
    }
  }
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "assado") == 0)
    {
      printf("O restaurante %s tem assados\n", restaurante[i].nome);
    }
  }
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "salada") == 0)
    {
      printf("O restaurante %s tem saladas\n", restaurante[i].nome);
    }
  }
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "fritura") == 0)
    {
      printf("O restaurante com frituras que tem o menor preco e o %s com o preco de: RS%.2f\n", restaurante[i].nome,
                                                                                                 restaurante[i].precoMedio);
      goto verAssado;
    }
  }
  verAssado:
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "assado") == 0)
    {
      printf("O restaurante com assados que tem o menor preco e o %s com o preco de: RS%.2f\n", restaurante[i].nome,
                                                                                                 restaurante[i].precoMedio);
      goto verSalada;
    }
  }
  verSalada:
  for(i = 0; i < num; i++)
  {
    if(strcmp(restaurante[i].tipoComida, "salada") == 0)
    {
      printf("O restaurante com saladas que tem o menor preco e o %s com o preco de: RS%.2f\n", restaurante[i].nome,
                                                                                                 restaurante[i].precoMedio);
    }
  }
  return 0;
}
