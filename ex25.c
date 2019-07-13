#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int aleatorio;
  srand((unsigned)time(NULL));
  for(int i = 0; i < 20; i++)
  {
    aleatorio = 1000+(rand() % 999);
    if((aleatorio % 11) == 5)
    {
      printf("%d, ", aleatorio);
    }
  }
  return 0;
}
