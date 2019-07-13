#include <stdio.h>
int main()
{
  float sal = 0, hed = 0, hen = 0, nd = 0, fal = 0, de = 0, ref = 0, val = 0;
  float horasExtras, salarioFamilia, salarioBruto, faltas, impostoRenda, salarioLiquido;
  char nome[20];
  printf("Insira seu nome\n");
  scanf("%[^\n]s", nome);
  printf("Insira os seguintes dados: \n");
  printf("Salario\nHoras extras diurnas\nHoras extras noturnas\nNumero de dependentes\nFaltas em Horas\nDescontos Eventuais\nGastos com refeicoes feitas na empresa\nVales retirados durante o mes\n");
  scanf("%f %f %f %f %f %f %f %f", &sal, &hed, &hen, &nd, &fal, &de, &ref, &val);


  horasExtras = (hed*sal/160) + (hen*1.2*sal/160);
  salarioFamilia = nd*0.05*sal;
  salarioBruto = sal + horasExtras + salarioFamilia;
  faltas = fal*sal/160;
  impostoRenda = 0.08*salarioBruto;
  salarioLiquido = salarioBruto - de;

  printf("Sua ficha e:\n");
  printf("Nome: %s\n", nome);
  printf("Seu salario e: %.2f\n", sal);
  printf("Suas horas extras sao: %.2f\n", horasExtras);
  printf("O salario familia e: RS%.2f\n", salarioFamilia);
  printf("O salario bruto e: RS%.2f\n", salarioBruto);
  printf("Suas faltas sao: %.2f\n", faltas);
  printf("Seu gasto com refeicao e: RS%.2f\n", ref);
  printf("Seus vales sao: RS%.2f\n", val);
  printf("Seu descontos eventuais e: RS%.2f\n", de);
  printf("O imposto de renda e: RS%.2f\n", impostoRenda);
  printf("O salario liquido e: RS%.2f\n", salarioLiquido);
  return 0;
}
