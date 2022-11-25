#include <stdio.h>

/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação. */

int elevaNum(int x, int z);

void main()
{
  int a, b, res;
  printf("Digite o 1o numero: ");
  scanf("%d", &a);
  printf("Digite o 2o numero: ");
  scanf("%d", &b);

  res = elevaNum(a,b);

  printf("O resultado de elevar %d por %d foi: %d", a, b, res);
}

int elevaNum(int x, int z)
{
  int res = x;
  for (int i = 1; i < z; i++)
  {
    res *= x;
  }
  return res;
}