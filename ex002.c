#include <stdio.h>
/*2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.*/

void escreveData(int d, int m, int y);

void main()
{
  int dd, mm, yy;

  printf("Digite uma data (DD/MM/YY): ");
  scanf("%d/%d/%d", &dd,&mm,&yy);

  escreveData(dd,mm,yy);
}

void escreveData(int d, int m, int y)
{
  switch (m)
  {
  case 1:
    return printf("%d de Janeiro de %d", d, y);
  case 2:
    return printf("%d de Fevereiro de %d", d, y);
  case 3:
    return printf("%d de Marco de %d", d, y);
  case 4:
    return printf("%d de Abril de %d", d, y);
  case 5:
    return printf("%d de Maio de %d", d, y);
  case 6:
    return printf("%d de Junho de %d", d, y);
  case 7:
    return printf("%d de Julho de %d", d, y);
  case 8:
    return printf("%d de Agosto de %d", d, y);
  case 9:
    return printf("%d de Setembro de %d", d, y);
  case 10:
    return printf("%d de Outubro de %d", d, y);
  case 11:
    return printf("%d de Novembro de %d", d, y);
  case 12:
    return printf("%d de Dezembro de %d", d, y);
  
  default:
    break;
  }
}
