#include <stdio.h>

int main()
{
  int a[500], b[500];
  for(int i = 0; i < 500; i++)
  {
    printf("Insira quantos filmes o cliente %d alugou em 1997: \n", i+1);
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 500; i++)
  {
    b[i] = a[i] / 15;
    printf("CLIENTE %d \t ALUGADOS: %d \t LOC. GRATIS: %d\n", i+1, a[i], b[i]);
  }
  return 0;
}
 
