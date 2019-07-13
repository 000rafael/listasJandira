#include <stdio.h>
#include <string.h>

struct registro
{
  char nome[30];
  int bi;
  char hora[5];
};
int main()
{
  int i = 0,
      biProcura,
      cont;
  char acao,
       nomeProcura[30];
  struct registro predio[500];
  for(cont = 0; cont < 500; cont++)
  {
    predio[cont].bi = 0;
  }
  while(1)
  {
    for(i = 0; i < 500; i++)
    {
      if(predio[i].bi == 0)
      {
        printf("\n\n\n");
        printf("Voce quer entrar ou sair do predio?\nDigite 'E' p/ entrar e 'S' p/ sair\nVoce pode digitar 'L' p/ ver todos que estao no predio\n");
        scanf(" %c", &acao);
        printf("\n\n\n");
        if(acao == 'E')
        {
          printf("Insira seu nome: \n");
          scanf("\n%[^\n]s", &predio[i].nome);
          printf("Insira seu numero BI: \n");
          scanf("%d", &predio[i].bi);
          printf("Insira a hora de entrada (HH:MM): ");
          scanf("\n%s", &predio[i].hora);
          printf("---DADOS COLETADOS---\n");
          printf("SUA FICHA:\n");
          printf("Nome: %s\nBI: %d\nHora de Entrada: %s\n", predio[i].nome, predio[i].bi, predio[i].hora);
        }
        else if (acao == 'S')
        {
          printf("\n\n\n");
          printf("Digite seu BI para procurar nos registros:\n");
          scanf(" %d", &biProcura);
          for(cont = 0; cont < 500; cont++)
          {
            if(biProcura == predio[cont].bi)
            {
              printf("\n\n\n");
              printf("Seu registro e:\n");
              printf("Nome: %s\n", predio[cont].nome);
              printf("BI: %d\n", predio[cont].bi);
              printf("Hora de entrada: %s\n", predio[cont].hora);
              printf("Seu registro foi apagado\n");
              predio[cont].bi = 0;
              break;
            }
          }
        }
        else if (acao == 'L')
        {
          printf("A lista de totas as pessoas no predio e:\n");
          for(cont = 0; cont < 500; cont++)
          {
            if(predio[cont].bi != 0)
            {
              printf("BI: %d\tNOME: %s\n", predio[cont].bi, predio[cont].nome);
            }
          }
        }
        else
        {
          printf("Voce inseriu uma opcao invalida. Insira outro\n");
        }
      }
    }
  }
  return 0;
}
