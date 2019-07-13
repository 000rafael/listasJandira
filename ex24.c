#include <stdio.h>
#include <string.h>
int main()
{
  int vogal = 0, consoantes = 0;
  char palavra[30];
  printf("Digite uma palavra\n");
  scanf(" %[^\n]s", palavra);
  for(int i = 0; i < strlen(palavra); i++)
  {
    if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
    {
      vogal++;
    }
    else
    {
      consoantes++;
    }
  }
  printf("A palavra tem %d vogais e %d consoantes\n", vogal, consoantes);
  return 0;
}
