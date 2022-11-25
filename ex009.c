#include <stdio.h>

/*9. Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: 𝑉 = pi * raio2 * altura, onde pi = 3.141592.*/

float calculaVolCilindro(float r, float h);

void main()
{
  float r, h, vol;
  printf("Digite o valor da altura em metros do cilindro: ");
  scanf("%f", &h);
  printf("Digite o valor do raio em metros do cilindro: ");
  scanf("%f", &r);

  vol = calculaVolCilindro(r, h);

  printf("O volume do cilindro circular eh: %.2f", vol);
}

float calculaVolCilindro(float r, float h)
{
  const float pi = 3.141592;
  return pi * (r*r) * h;
}