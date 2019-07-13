#include <stdio.h>

int main()
{
  unsigned int numero = 100, primo = 0, contador = 0;
  while(contador < 10)      //Coloque quantos numeros primos você quer no lugar do 10
  {
    for(int i = 2; i < numero; i++)
    {
      if(numero % i == 0)
      {
        primo++;
      }
    }
    if(primo == 0)
    {
      printf("O numero primo e: %d\n", numero);
      contador++;
    }
    primo = 0;
    numero++;
  }
  return 0;
}
