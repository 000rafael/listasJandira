#include <stdio.h>

int main()
{
  int termos, aux;
  printf("Insira quantos termos seu vetor tera: \n");
  scanf("%d", &termos);
  int vetor[termos];
  for(int i = 0; i < termos; i++)
  {
    printf("Insira o termo %d do vetor\n", i+1);
    scanf(" %d", &vetor[i]);
  }
  for(int i = 0; i < termos; i++)
  {
    for(int j = i; j < termos; j++)
    {
      if(vetor[i] > vetor[j])
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
  for(int i = 0; i < termos; i++)
  {
    printf("%d, ", vetor[i]);
  }
  return 0;
}
