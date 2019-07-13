# include <stdio.h>
int main()
{
  //O programa demora pra processar pois existem muitos numeros para ele testar, porém, se esperar tempo
  //Suficiente, ele vai calcular os numeros. Se quiser só testar, pode diminuir o valor 33550336 para um
  //valor menor, como 10000.
  unsigned int numA, numB, a=0;
  for (numB=33550336; numB>=1; numB--)
  {
    for (numA=1; numA<=33550336; numA++)
    {
      if (((numB%numA)==0) && (numA!=numB))
      {
        a=a+numA;
      }
    }
    if (a==numB) printf ("\nNumero perfeito: %d\n", a);
    a=0;
  }
  return 0;
}
