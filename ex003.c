#include <stdio.h>

/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/
int verificaNum(int num);

void main()
{
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);

  switch (verificaNum(n))
  {
  case -1:
    printf("O numero eh negativo.");
    break;
  case 0:
    printf("O numero eh 0");
    break;
  case 1:
    printf("O numero eh positivo.");
    break;
  default:
    break;
  }
}

int verificaNum(int num)
{
  if (num < 0)
  {
    return -1;
  }
  else if (num > 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
