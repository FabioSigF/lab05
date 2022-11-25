#include <stdio.h>
/*Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 /
5,0) + 32,0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
float converteFahrenheit(int c);

void main()
{
  int g;
  float f;
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%d", &g);
  f = converteFahrenheit(g);
  printf("A temperatura em Fahrenheit eh: %f", f);
}

float converteFahrenheit(int c)
{
  return c * (9.0/5.0) + 32;
}