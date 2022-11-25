#include <stdio.h>
/*10. Faça uma função que receba dois números e retorne qual deles é o maior.*/
int maiorNum(int n1, int n2);
void main()
{
  int n1, n2, m;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  m = maiorNum(n1, n2);

  printf("O maior numero entre %d e %d eh %d", n1, n2, m);
}

int maiorNum(int n1, int n2)
{
  if (n1 > n2)
  {
    return n1;
  }
  return n2;
}