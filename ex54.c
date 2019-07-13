#include <stdio.h>

int main()
{
  float altura;
  char sexo;
  printf("Insira sua altura em metros: \n");
  scanf("%f", &altura);
  printf("Insira seu sexo: 'M' p/ masculino e 'F' p/ feminino: \n");
  scanf(" %c", &sexo);
  if(sexo == 'M' || sexo == 'm')
  {
    printf("Seu peso ideal e: %.3f Kg\n", (72.8*altura-58));
  }
  else if(sexo == 'F' || sexo == 'f')
  {
    printf("Seu peso ideal e: %.3f Kg\n", (62.1*altura-44.7));
  }
  else
  {
    printf("Insira um opcao valida\n");
  }
  return 0;
}
