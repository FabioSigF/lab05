#include <stdio.h>

/*19. Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!.*/

int fatorial(int num);

void main()
{
  int n, res;
  printf("Digite um numero: ");
  scanf("%d", &n);

  res = fatorial(n);

  printf("O fatorial de %d foi: %d", n, res);
}

int fatorial(int num)
{
  int res = 1;
  for (num; num >= 1; num--)
  {
    res *= num;
  }
  return res;
}

