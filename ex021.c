#include <stdio.h>
/* Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!
*/
void geraLinha(int n);

void main()
{
  int q;
  printf("Digite a quantidade de linhas: ");
  scanf("%d", &q);

  geraLinha(q);
}

void geraLinha(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("!");
    }
    putchar('\n');
  }
}