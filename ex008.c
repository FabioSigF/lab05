#include <stdio.h>
#include <math.h>
/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: hipotenusa = √𝑎2 + √𝑏2. Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.*/

float calculaHipotenusa(float a, float b);

void main()
{
  float a, b, hip;
  printf("Digite o valor do cateto A: ");
  scanf("%f", &a);
  printf("Digite o valor do cateto B: ");
  scanf("%f", &b);

  hip = calculaHipotenusa(a, b);

  printf("O valor da hipotenusa eh: %.2f.", hip);
}

float calculaHipotenusa(float a, float b)
{
  return sqrt((a*a) + (b*b));
}