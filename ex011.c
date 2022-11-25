#include <stdio.h>
/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2. */

float calcularMedia(float n1, float n2, float n3, char tipo);

void main()
{
  float n1, n2, n3, m;
  char tipo;
  printf("Digite a 1a nota: ");
  scanf("%f", &n1);
  printf("Digite a 2a nota: ");
  scanf("%f", &n2);
  printf("Digite a 3a nota: ");
  scanf("%f", &n3);
  printf("Digite qual media voce deseja:\n - 'A' para media aritmetica\n - 'P' para media ponderada\n R= ");
  scanf(" %c", &tipo);

  m = calcularMedia(n1, n2, n3, tipo);

  printf("A media calculada foi igual a: %.2f", m);

}

float calcularMedia(float n1, float n2, float n3, char tipo)
{
  switch (tipo)
  {
  case 'a':
  case 'A':
    return (n1 + n2 + n3)/3;
  case 'p':
  case 'P':
    return ((n1*5) + (n2*3) + (n3*2))/10;
  default:
    return 0;
  }
}