#include <stdio.h>

/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.*/
float volEsfera(float raio);

void main()
{
  float r, ve;

  printf("Digite o raio da esfera em metros: ");
  scanf("%f", &r);
  ve = volEsfera(r);
  printf("O volume da esfera eh %.2f", ve);
}

float volEsfera(float raio)
{
  float ve;
  const float pi = 3.141593;;
  ve = 4 * pi * (raio * raio * raio) / 3;
  return ve;
}