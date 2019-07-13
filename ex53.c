#include <stdio.h>

int main()
{
  float nota;
  printf("Insira a nota do aluno\n");
  scanf("%f", &nota);
  if(nota < 5)
  {
    printf("Conceito: D\n");
  }
  else if(nota > 5 && nota < 7)
  {
    printf("Conceito: C\n");
  }
  else if(nota > 7 && nota < 9)
  {
    printf("Conceito: B\n");
  }
  else
  {
    printf("Conceito: A\n");
  }
  return 0;
}
