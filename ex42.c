#include <stdio.h>

int main()
{
  float a,b;
  char acao;
  while(1)
  {
    printf("'+' p/ Soma; '-' p/ Subtracao; '*' p/ Multiplicacao; '/' p/ Divisao\n");
    scanf(" %c", &acao);
    printf("Insira o 1o numero\n");
    scanf(" %f", &a);
    printf("Insira o 2o numero\n");
    scanf(" %f", &b);
    switch (acao)
    {
      case '+':
        printf("RESULTADO:\n%.2f\n", (a+b));
      break;
      case '-':
        printf("RESULTADO:\n%.2f\n", (a-b));
      break;
      case '*':
        printf("RESULTADO:\n%.2f\n", (a*b));
      break;
      case '/':
        if(b == 0)
        {
          printf("ERRO. INSIRA OUTRO NUMERO\n");
        }
        else
        {
          printf("RESULTADO:\n%.2f\n", (a/b));
        }
      break;
      default:
        printf("\n\n***Entrada Invalida. Insira uma das opcoes.***\n\n");
      break;
    }
  }
  return 0;
}
