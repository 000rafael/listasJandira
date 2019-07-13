#include <stdio.h>
#include <string.h>
int main()
{
  int i = 0, j, palindromo = 0;
  char palavra[20];
  printf("Insira o numero: \n");
  scanf(" %[^\n]s", palavra);
  j = strlen(palavra)-1;
  while(i < strlen(palavra))
  {
    if(palavra[i] != palavra[j])
    {
      palindromo++;
    }
    j--;
    i++;
  }
  if(palindromo == 0)
  {
    printf("Seu numero e um palindromo\n");
  }
  else
  {
    printf("Seu numero NAO e um palindromo\n");
  }
  return 0;
}
