#include <stdio.h>
/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os converta em segundos.*/
int converteSeg(int h, int m, int s);

void main()
{
  int hh, mm, ss, res;
  printf("Digite as horas, minutos e segundos HH:MM:SS : ");
  scanf("%d:%d:%d", &hh, &mm, &ss);
  res = converteSeg(hh,mm,ss);
  printf("A conversão desse tempo em segundos fica: %ds", res);
}

int converteSeg(int h, int m, int s)
{
  int tot;
  tot = (h*3600) + (m*60) + s;
  return tot;
}