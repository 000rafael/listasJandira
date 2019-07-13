#include <stdio.h>
#include <math.h>
int main()
{
  float a , b, c, delta, x1, x2;
  while(1)
  {
    printf("Insira A, B, C\n");
    scanf("%f,%f,%f", &a, &b, &c);
    delta = (b*b)-(4*a*c);
    if(delta < 0)
    {
      printf("Nao existe solucao nos reais\n");
    }
    else
    {
      x1 = (-b+sqrt(delta))/(2*a);
      x2 = (-b-sqrt(delta))/(2*a);
      printf("Seu X1 e: %f e seu X2 e: %f\n", x1, x2);
    }
  }

  return 0;
}
