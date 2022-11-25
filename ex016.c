#include <stdio.h>
/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos sinais de igual serão mostrados.*/

void desenhaLinha(int num);

void main()
{
  int n;
  printf("Digite a quantidade de sinais que serao mostrados: ");
  scanf("%d", &n);
  desenhaLinha(n);
}

void desenhaLinha(int num)
{
  int i;
  for (i = 1;  i <= num; i++)
  {
    putchar('=');
  }
}