#include <stdio.h>

/*23. Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, a saída para n = 4 seria:
 *
 **
 ***
 ****
 ***
 **
 *
 */

void geraTriang(int n);
void main()
{
  int q;
  printf("Digite a quantidade de linhas do seu triangulo: ");
  scanf("%d", &q);

  geraTriang(q);
}

void geraTriang(int n)
{
  int nlinhas = n * 2 - 1;
  for (int i = 0; i <= nlinhas; i++)
  {
    if (i <= n)
    {
      for (int j = 0; j < i; j++)
      {
        printf("*");
      }
      putchar('\n');
    }
    else
    {
      for (int k = i; k <= nlinhas; k++)
      {
        printf("*");
      }
      putchar('\n');
    }
  }
}