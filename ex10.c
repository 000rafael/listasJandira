#include <stdio.h>
#include <string.h>
int main()
{
  int enc = 0, chave, i;
  char string[1024];
  printf("Forneca uma frase com espacos em branco (Max 1024 caracteres): ");
  scanf("\n%[^\n]s", &string);
  int len = strlen(string); //Pega o numero de caracteres da string digitada

  for (int i = 0, posicao = 0; i < len; i++, posicao++)
  {
      if (string[posicao] == ' ')
      {
          posicao++;
      }
      string[i] = string[posicao];
  }
  printf("Frase sem espacos: %s\n", string);
  len = strlen(string); //Atualiza o numero de caracteres da string digitada
  printf("Insira a chave de criptografia\n");
  scanf("%d", &chave);

  for(i = 0; i < len; i++)
  {
    if(string[i] >= 97 && string[i] <= 122)
    {
      string[i] -= 32;
    }
  }

  for(i = 0; i < len; i++)
  {
    if((string[i] + chave) > 90)
    {
      string[i] += (chave-26);
    }
    else
    {
      string[i] += chave;
    }
  }

  i = 0;
  while(i < len)
  {
    if(i % 5 == 0)
    {
      printf("%c ", string[i]);
    }
    else
    {
      printf("%c", string[i]);
    }
    i++;
  }

  return 0;
}
