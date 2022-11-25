#include <stdio.h>
#include <math.h>
/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex.: 1, 4, 9...*/

float verificaQuad(int num);

void main()
{
  int n, res;
  printf("Digite um numero inteiro: ");
  scanf("%d", &n);
  res = verificaQuad(n);
  if(res == -1)
  {
    printf("O numero nao eh um quadrado perfeito.");
  } else {
    printf("O numero %d eh um quadrado perfeito representado por %d x %d.", n, res, res);
  }

}

float verificaQuad(int num)
{
  float quadP;
  quadP = sqrt(num);

  if((quadP*quadP) == num)
    return quadP;
  else
    return -1;
}