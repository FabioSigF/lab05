#include <stdio.h>
/* 17. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles. */

int somaIntervalo(int a, int b);

void main()
{
  int a, b, soma;
  printf("Digite o 1o numero positivo: ");
  scanf("%d", &a);
  printf("Digite o 2o numero positivo: ");
  scanf("%d", &b);

  soma = somaIntervalo(a, b);

  if (soma > 0)
  {
    printf("A soma dos numeros no intervalo entre %d e %d foi: %d", a, b, soma);
  }
  else
  {
    printf("Os valores não podem ser negativos.");
  }
}

int somaIntervalo(int a, int b)
{
  int res = 0;
  if (a > 0 && b > 0)
  {
    if (a < b)
    {
      for (int i = a; i <= b; i++)
      {
        res += i;
      }
    }
    else
    {
      for (int i = b; i <= a; i++)
      {
        res += i;
      }
    }
  }
  else
  {
    return 0;
  }
  return res;
}