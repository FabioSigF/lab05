#include <stdio.h>

/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
  - O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
  - Chama-se equilátero o triângulo que tem três lados iguais;
  - Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
  - Recebe o nome de escaleno o triângulo que tem os três lados diferentes*/
int verificaLados(float a, float b, float c);
int verificaTipo(float a, float b, float c);
void main()
{
  float a, b, c;
  int vLados;

  printf("Digite o valor do 1o lado: ");
  scanf("%f", &a);
  printf("Digite o valor do 2o lado: ");
  scanf("%f", &b);
  printf("Digite o valor do 3o lado: ");
  scanf("%f", &c);

  if (a > 0 && b > 0 && c > 0)
  {
    vLados = verificaLados(a, b, c);
    if (vLados)
    {
      verificaTipo(a, b, c);
    }
    else
    {
      printf("Os valores digitados nao formam um triangulo.");
    }
  }
  else
  {
    printf("O valor dos lados nao pode ser 0.");
  }
}

int verificaLados(float a, float b, float c)
{
  if ((a > (b + c)) || (b > (a + c)) || (c > (a + b)))
  {
    return 0; // falso
  }
  return 1; // verdadeiro
}

int verificaTipo(float a, float b, float c)
{
  if ((a == b) && (b == c)) // Equilátero
  {
    return printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo equilatero.", a, b, c);
  }
  else if ((a == b) || (b == c) || (a == c)) // Isósceles
  {
    return printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo isosceles.", a, b, c);
  }
  else // Escaleno
  {
    return printf("Os valores de A=%.1f, B=%.1f e C=%.1f sao de um triangulo escaleno.", a, b, c);
  }
}
