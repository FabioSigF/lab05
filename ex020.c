#include <stdio.h>
/*20. Escreva uma função para determinar a quantidade de números primos abaixo de N*/
int calculaPrimos(int n);

void main()
{
  int n, res;
  printf("Digite um numero: ");
  scanf("%d", &n);

  res = calculaPrimos(n);

  printf("Abaixo de %d, existem %d numeros primos.", n, res);
}

int calculaPrimos(int n)
{
  int prim, totPrim;
  totPrim = 0;
  for (int i = 1; i <= n; i++)
  {
    prim = 0;

    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        prim++;
      }
    }
    if (prim == 2)
    {
      totPrim++;
    }
  }

  return totPrim;
}