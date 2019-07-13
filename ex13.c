#include <stdio.h>
struct clientes
{
  int conta;
  int itens;
  float despesa;
};
int main()
{
  struct clientes discoteca[200];
  int procurarConta, i, j = 0, contasAtivas = 0, numContaTemp = 0;
  float precoTemp;
  char acao;
  for(i = 0; i < 200; i++)
  {
    discoteca[i].itens = 0;
    discoteca[i].conta = 0;
    discoteca[i].despesa = 0;
  }
  while(1)
  {
    printf("Insira o que quer fazer:\n");
    printf(" 'N' p/ Novos Clientes\n 'C' p/ Inserir Produtos\n 'T' p/ Ver o No de Pessoas na discoteca\n 'D' p/ Calcular a Despesa do Cliente\n");
    scanf(" %c", &acao);
    if(acao == 'N')
    {
      discoteca[j].conta = j+1;
      printf("Sua conta e: %d\n", discoteca[j].conta);
      j++;
    }
    else if(acao == 'C')
    {
      printf("Insira o numero da conta\n");
      scanf(" %d", &procurarConta);
      for(i = 0; i < 200; i++)
      {
        if(discoteca[i].conta == procurarConta)
        {
          if(discoteca[i].itens > 10)
          {
            printf("Voce nao pode mais inserir produtos nessa conta. Peca uma nova.\n");
          }
          else
          {
            discoteca[i].itens++;
            printf("Voce pode consumir mais %d itens\n", (10-discoteca[i].itens));
            printf("Insira o preco do produto R$");
            scanf(" %f", &precoTemp);
            discoteca[i].despesa+=precoTemp;
          }
        }
      }
    }
    else if(acao == 'T')
    {
      for(i = 0; i < 200; i++)
      {
        if(discoteca[i].conta != 0)
        {
          contasAtivas++;
        }
      }
      printf("O numero de contas ativas e: %d\n", contasAtivas);
      contasAtivas = 0;
    }
    else if(acao == 'D')
    {
      printf("Insira o numero da sua conta\n");
      scanf(" %d", &procurarConta);
      for(i = 0; i < 200; i++)
      {
        if(discoteca[i].conta == procurarConta)
        {
          printf("\n\nVoce consumiu %d itens e tem R$%.2f de despesas\n", discoteca[i].itens, discoteca[i].despesa);
          printf("A partir de agora, essa conta foi apagada e sera disponibilizada p/ outro cliente\n");
          discoteca[i].conta = 0;
        }
      }
    }
  }
  return 0;
}
